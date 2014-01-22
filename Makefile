#
# 'make depend' uses makedepend to automatically generate dependencies 
#               (dependencies are added to end of Makefile)
# 'make'        build executable file 'mycc'
# 'make clean'  removes all .o and executable files
#

# define the C compiler to use
CC = llvm-gcc

# define the linker for the llvm step, since apparently gcc hates bitcode
LLVM_LD = llvm-ld
LLVM_LD_FLAGS = -link-as-library

# define any compile-time flags
CFLAGS = -Wall -g
LLVM_CFLAGS = -emit-llvm 

KLEE_HOME = /data/software/klee

# define any directories containing header files other than /usr/include
#
INCLUDES = -I$(KLEE_HOME)/include/klee/ -Imicrowave/microwave_grt_rtw/ -IR2013a/extern/include/ -IR2013a/rtw/c/src/ext_mode/common/ -IR2013a/rtw/c/src/ -IR2013a/simulink/include/

# define library paths in addition to /usr/lib
#   if I wanted to include libraries not in /usr/lib I'd specify
#   their path using -Lpath, something like:
LFLAGS = -lm -L$(KLEE_HOME)/Release+Asserts/lib/ 

# define any libraries to link into executable:
#   if I want to link in libraries (libx.so or libx.a) I use the -llibname 
#   option, something like (this will link in libmylib.so and libm.so:
LIBS = -lkleeCore -lkleeRuntest 

# define the C source files
SRCS = symbolic/ert_main.c symbolic/klee_util.c microwave/microwave_grt_rtw/rtGetInf.c microwave/microwave_grt_rtw/rtGetNaN.c microwave/microwave_grt_rtw/rt_nonfinite.c  microwave/microwave_grt_rtw/microwave.c microwave/microwave_grt_rtw/microwave_data.c R2013a/rtw/c/src/rt_logging.c

# define the C object files 
#
# This uses Suffix Replacement within a macro:
#   $(name:string1=string2)
#         For each word in 'name' replace 'string1' with 'string2'
# Below we are replacing the suffix .c of all words in the macro SRCS
# with the .o suffix
#
OBJS = $(SRCS:.c=.o)
LLVM_OBJS = $(SRCS:.c=.bc)

# define the executable file prefix 
MAIN = microwave

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

.PHONY: depend clean
.SUFFIXES: .bc


all:    $(MAIN)_native $(MAIN)_llvm
	@echo All finished, have fun.

$(MAIN)_native: $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN)_native $(OBJS) $(LFLAGS) $(LIBS)

$(MAIN)_llvm: $(LLVM_OBJS)
	$(LLVM_LD) $(LLVM_LD_FLAGS) -o $(MAIN)_llvm $(LLVM_OBJS) $(LFLAGS) $(LIBS)

# this is a suffix replacement rule for building .o's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# (see the gnu make manual section about automatic variables)
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

.c.bc:
	$(CC) $(CFLAGS) $(INCLUDES) $(LLVM_CFLAGS) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)_native $(MAIN)_llvm
	find . -name \*.o -type f -delete
	find . -name \*.bc -type f -delete

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it

