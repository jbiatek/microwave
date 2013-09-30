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
#include "microwave.h"                  /* Model's header file */
#include "rtwtypes.h"                  /* MathWorks types */
#include "klee_util.h"

#define NUM_STEPS 3

void make_input_symbolic(void);
void make_input_symbolic(void) 
{
  klee_make_symbolic_range( &(microwave_U.KP_START), 0, 
                      sizeof(boolean_T), "KP_START");
  klee_make_symbolic_range( &(microwave_U.KP_CLEAR), 0, 
                      sizeof(boolean_T), "KP_CLEAR");
  klee_make_symbolic_range( &(microwave_U.KP_0), 0, 
                      sizeof(boolean_T), "KP_0");
  klee_make_symbolic_range( &(microwave_U.KP_1), 0, 
                      sizeof(boolean_T), "KP_1");
  klee_make_symbolic_range( &(microwave_U.KP_2), 0, 
                      sizeof(boolean_T), "KP_2");
  klee_make_symbolic_range( &(microwave_U.KP_3), 0, 
                      sizeof(boolean_T), "KP_3");
  klee_make_symbolic_range( &(microwave_U.KP_4), 0, 
                      sizeof(boolean_T), "KP_4");
  klee_make_symbolic_range( &(microwave_U.KP_5), 0, 
                      sizeof(boolean_T), "KP_5");
  klee_make_symbolic_range( &(microwave_U.KP_6), 0, 
                      sizeof(boolean_T), "KP_6");
  klee_make_symbolic_range( &(microwave_U.KP_7), 0, 
                      sizeof(boolean_T), "KP_7");
  klee_make_symbolic_range( &(microwave_U.KP_8), 0, 
                      sizeof(boolean_T), "KP_8");
  klee_make_symbolic_range( &(microwave_U.KP_9), 0, 
                      sizeof(boolean_T), "KP_9");
  klee_make_symbolic_range( &(microwave_U.DOOR_CLOSED), 0, 
                      sizeof(boolean_T), "DOOR_CLOSED");
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
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = 0;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(microwave_M, "Overrun");
    return;
  }

  OverrunFlag = TRUE;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */
  make_input_symbolic ();

  /* Step the model */
  microwave_step();

  /* Get model outputs here */

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
  /* Initialize model */
  microwave_initialize(); // used to have an argument: 1.

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 1.0 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep();
   */
  int step = 0;
  while (rtmGetErrorStatus(microwave_M) == (NULL) && step < NUM_STEPS) {
    /*  Perform other application tasks here */
    rt_OneStep();
    step++;
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  microwave_terminate();
  return 0;
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
