/*
 * microwave_data.c
 *
 * Code generation for model "microwave".
 *
 * Model version              : 1.131
 * Simulink Coder version : 8.4 (R2013a) 13-Feb-2013
 * C source code generated on : Wed Aug 14 12:10:36 2013
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "microwave.h"
#include "microwave_private.h"

/* Block parameters (auto storage) */
P_microwave_T microwave_P = {
  0U,                                  /* Computed Parameter: STEPS_TO_COOK_Y0
                                        * Referenced by: '<S3>/STEPS_TO_COOK'
                                        */
  60U,                                 /* Computed Parameter: MINUTES_PLACE_Value
                                        * Referenced by: '<S8>/MINUTES_PLACE'
                                        */
  1U,                                  /* Computed Parameter: ONES_PLACE_Value
                                        * Referenced by: '<S8>/ONES_PLACE'
                                        */
  10U,                                 /* Computed Parameter: TENS_PLACE_Value
                                        * Referenced by: '<S8>/TENS_PLACE'
                                        */
  1U,                                  /* Computed Parameter: STEPS_PER_SECOND_Value
                                        * Referenced by: '<Root>/STEPS_PER_SECOND'
                                        */
  60U,                                 /* Computed Parameter: SECONDS_IN_MINUTE_Value
                                        * Referenced by: '<S6>/SECONDS_IN_MINUTE'
                                        */
  10U,                                 /* Computed Parameter: TENS_OF_SECONDS_Value
                                        * Referenced by: '<S6>/TENS_OF_SECONDS'
                                        */
  9U,                                  /* Computed Parameter: NO_PRESS3_Value
                                        * Referenced by: '<S9>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value
                                        * Referenced by: '<S9>/NO_PRESS1'
                                        */
  9U,                                  /* Computed Parameter: NO_PRESS3_Value_f
                                        * Referenced by: '<S10>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value_c
                                        * Referenced by: '<S10>/NO_PRESS1'
                                        */
  10U,                                 /* Computed Parameter: NO_PRESS_Value
                                        * Referenced by: '<S11>/NO_PRESS'
                                        */
  9U,                                  /* Computed Parameter: NINE_PRESSED_Value
                                        * Referenced by: '<S11>/NINE_PRESSED'
                                        */
  8U,                                  /* Computed Parameter: EIGHT_PRESSED_Value
                                        * Referenced by: '<S11>/EIGHT_PRESSED'
                                        */
  7U,                                  /* Computed Parameter: SEVEN_PRESSED_Value
                                        * Referenced by: '<S11>/SEVEN_PRESSED'
                                        */
  6U,                                  /* Computed Parameter: SIX_PRESSED_Value
                                        * Referenced by: '<S11>/SIX_PRESSED'
                                        */
  5U,                                  /* Computed Parameter: FIVE_PRESSED_Value
                                        * Referenced by: '<S11>/FIVE_PRESSED'
                                        */
  4U,                                  /* Computed Parameter: FOUR_PRESSED_Value
                                        * Referenced by: '<S11>/FOUR_PRESSED'
                                        */
  3U,                                  /* Computed Parameter: THREE_PRESSED_Value
                                        * Referenced by: '<S11>/THREE_PRESSED'
                                        */
  2U,                                  /* Computed Parameter: TWO_PRESSED_Value
                                        * Referenced by: '<S11>/TWO_PRESSED'
                                        */
  1U,                                  /* Computed Parameter: ONE_PRESSED_Value
                                        * Referenced by: '<S11>/ONE_PRESSED'
                                        */
  0U,                                  /* Computed Parameter: ZERO_PRESSED_Value
                                        * Referenced by: '<S11>/ZERO_PRESSED'
                                        */
  9U,                                  /* Computed Parameter: NO_PRESS3_Value_n
                                        * Referenced by: '<S12>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value_i
                                        * Referenced by: '<S12>/NO_PRESS1'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayMiddleDigit_InitialCon
                                        * Referenced by: '<S3>/Unit Delay Middle Digit'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayLeftDigit_InitialCondi
                                        * Referenced by: '<S3>/Unit Delay Left Digit'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayRightDigit_InitialCond
                                        * Referenced by: '<S3>/Unit Delay Right Digit'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value
                                        * Referenced by: '<S2>/COOKING_MODE'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S13>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S14>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S15>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S16>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S17>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S18>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S19>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S20>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S21>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S22>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  1                                    /* Expression: true
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
};
