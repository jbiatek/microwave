microwave
=========

The code for the microwave model. Set $KLEE_HOME to the root of the Klee directory (the one containing include/, Release+Asserts/, etc.) $LD_LIBRARY_PATH also needs to be set to $KLEE_HOME/Release+Asserts/lib if you want to run the native binary.


GCov
====

The native binary will write out the standard GCov files, which are by default stored next to the .c and .o files. Just run it with `$KTEST_FILE` pointing to the file you'd like to replay. Coverage can be collected over multiple runs. The `native_run_all.sh` script will run all ktest files passed to it so you can do it all in one shot. 

For some reason, gcov doesn't handle relative paths well, so you have to tell it where to find the .gcda (coverage data) file is for the .c file you're interested in by using the -o option. So something like this:

    gcov -o symbolic/ert_main.gcda symbolic/ert_main.c

If that seems like a big pain, it is. There's also `gcovr`, which will work recursively to find all .gcda files and is apparently smarter about finding things. You can get it to keep the output .gcov files with the -k flag. 

The Makefile can reset the counters for you by deleting all .gcda files, just call `make clean_gcov`. The whole process might look something like this:

    make
    ./native_run_all.sh klee-last/*.ktest
    gcovr -k
    mv *.gcov klee_gcov_output
    make clean_gcov
    ./native_run_all.sh reactis/*.ktest
    gcovr -k
    mv *.gcov reactis_gcov_output


