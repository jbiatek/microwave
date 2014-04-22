/*
 * File: ert_main.c
 *
 * Real-Time Workshop code generated for Simulink model microwave.
 *
 * Model version                        : 1.133
 * Real-Time Workshop file version      : 7.6  (R2010b)  03-Aug-2010
 * Real-Time Workshop file generated on : Tue Sep 24 18:03:25 2013
 * TLC version                          : 7.6 (Jul 13 2010)
 * C/C++ source code generated on       : Tue Sep 24 18:03:25 2013
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include <stdlib.h>
#include <errno.h>
#include "microwave_combined.h"                  /* Model's header file */
#include "rtwtypes.h"                  /* MathWorks types */
#include "klee.h"
#include "klee_util.h"



void make_input_symbolic(ExternalInputs_microwave_combin *input);
void make_input_symbolic(ExternalInputs_microwave_combin *input)
{
  klee_make_symbolic_range( &(input->KP_START), 0, 
                      sizeof(boolean_T), "KP_START");
  klee_make_symbolic_range( &(input->KP_CLEAR), 0, 
                      sizeof(boolean_T), "KP_CLEAR");
  klee_make_symbolic_range( &(input->KP_0), 0, 
                      sizeof(boolean_T), "KP_0");
  klee_make_symbolic_range( &(input->KP_1), 0, 
                      sizeof(boolean_T), "KP_1");
  klee_make_symbolic_range( &(input->KP_2), 0, 
                      sizeof(boolean_T), "KP_2");
  klee_make_symbolic_range( &(input->KP_3), 0, 
                      sizeof(boolean_T), "KP_3");
  klee_make_symbolic_range( &(input->KP_4), 0, 
                      sizeof(boolean_T), "KP_4");
  klee_make_symbolic_range( &(input->KP_5), 0, 
                      sizeof(boolean_T), "KP_5");
  klee_make_symbolic_range( &(input->KP_6), 0, 
                      sizeof(boolean_T), "KP_6");
  klee_make_symbolic_range( &(input->KP_7), 0, 
                      sizeof(boolean_T), "KP_7");
  klee_make_symbolic_range( &(input->KP_8), 0, 
                      sizeof(boolean_T), "KP_8");
  klee_make_symbolic_range( &(input->KP_9), 0, 
                      sizeof(boolean_T), "KP_9");
  klee_make_symbolic_range( &(input->DOOR_CLOSED), 0, 
                      sizeof(boolean_T), "DOOR_CLOSED");
}

void check_observers();
void check_observers()
{
  klee_assert(microwave_combined_Y.S1);
  klee_assert(microwave_combined_Y.S2);
  klee_assert(microwave_combined_Y.R1);
  klee_assert(microwave_combined_Y.R2);
  klee_assert(microwave_combined_Y.R3);
  klee_assert(microwave_combined_Y.R4);
  klee_assert(microwave_combined_Y.R5);
  klee_assert(microwave_combined_Y.R6);
  klee_assert(microwave_combined_Y.R7);
  klee_assert(microwave_combined_Y.R8);
  klee_assert(microwave_combined_Y.R9);
  klee_assert(microwave_combined_Y.R10);
  klee_assert(microwave_combined_Y.R11);
  klee_assert(microwave_combined_Y.R12);
}

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(ExternalInputs_microwave_combin *input);
void rt_OneStep(ExternalInputs_microwave_combin *input)
{
  static boolean_T OverrunFlag = 0;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(microwave_combined_M, "Overrun");
    return;
  }

  OverrunFlag = TRUE;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */
  microwave_combined_U = *input;

  /* Step the model */
  microwave_combined_step();

  /* Get model outputs here */
  check_observers ();

  /* Indicate task complete */
  OverrunFlag = FALSE;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char_T *argv[]);
int_T main(int_T argc, const char_T *argv[])
{
  /* How many steps to run? */
  if (argc != 2) 
  {
    printf("Usage: microwave_type [STEPS]\n");
  }
  int num_steps = strtol(argv[1], NULL, 0);
  if (errno || num_steps == 0)
  {
    perror("Error parsing num steps.\n");
    exit(1);
  }

  /* Initialize model */
  microwave_combined_initialize(1); // used to have an argument: 1.

  /* Create symbolic inputs beforehand */
  //make_input_symbolic();
  int step_num;
  ExternalInputs_microwave_combin inputs[num_steps];
  int i;
  for (i=0; i<num_steps; i++)
  {
    make_input_symbolic( &(inputs[i]));
  }

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 1.0 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep();
   */
  step_num = 0;
  while (rtmGetErrorStatus(microwave_combined_M) == (NULL) && step_num < num_steps) {
    /*  Perform other application tasks here */
    rt_OneStep( &(inputs[step_num]));
    step_num++;
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  microwave_combined_terminate();
  return 0;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
