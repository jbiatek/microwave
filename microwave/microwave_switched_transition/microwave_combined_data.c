/*
 * File: microwave_combined_data.c
 *
 * Real-Time Workshop code generated for Simulink model microwave_combined.
 *
 * Model version                        : 1.130
 * Real-Time Workshop file version      : 7.6  (R2010b)  03-Aug-2010
 * Real-Time Workshop file generated on : Wed Jan 29 14:22:23 2014
 * TLC version                          : 7.6 (Jul 13 2010)
 * C/C++ source code generated on       : Wed Jan 29 14:22:24 2014
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "microwave_combined.h"
#include "microwave_combined_private.h"

/* Block parameters (auto storage) */
Parameters_microwave_combined microwave_combined_P = {
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
  1U,                                  /* Computed Parameter: One_Value
                                        * Referenced by: '<S26>/One'
                                        */
  0U,                                  /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S27>/Zero'
                                        */
  0U,                                  /* Computed Parameter: Zero_Value_c
                                        * Referenced by: '<S28>/Zero'
                                        */
  0U,                                  /* Computed Parameter: Zero_Value_l
                                        * Referenced by: '<S32>/Zero'
                                        */
  1U,                                  /* Computed Parameter: STEPS_PER_SECOND_Value
                                        * Referenced by: '<Root>/STEPS_PER_SECOND'
                                        */
  60U,                                 /* Computed Parameter: SECONDS_IN_MINUTE_Value
                                        * Referenced by: '<S7>/SECONDS_IN_MINUTE'
                                        */
  10U,                                 /* Computed Parameter: TENS_OF_SECONDS_Value
                                        * Referenced by: '<S7>/TENS_OF_SECONDS'
                                        */
  0U,                                  /* Computed Parameter: Unit_Delay_Steps_Remaining_X0
                                        * Referenced by: '<S6>/Unit _Delay_Steps_Remaining'
                                        */
  9U,                                  /* Computed Parameter: NO_PRESS3_Value
                                        * Referenced by: '<S9>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value
                                        * Referenced by: '<S9>/NO_PRESS1'
                                        */
  9U,                                  /* Computed Parameter: NO_PRESS3_Value_n
                                        * Referenced by: '<S10>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value_m
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
  9U,                                  /* Computed Parameter: NO_PRESS3_Value_d
                                        * Referenced by: '<S12>/NO_PRESS3'
                                        */
  0U,                                  /* Computed Parameter: NO_PRESS1_Value_mo
                                        * Referenced by: '<S12>/NO_PRESS1'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayMiddleDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Middle Digit'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayLeftDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Left Digit'
                                        */
  0U,                                  /* Computed Parameter: UnitDelayRightDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Right Digit'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value
                                        * Referenced by: '<S40>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_h
                                        * Referenced by: '<S41>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_j
                                        * Referenced by: '<S45>/COOKING_MODE'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_jf
                                        * Referenced by: '<S44>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_f
                                        * Referenced by: '<S47>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_p
                                        * Referenced by: '<S50>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_fw
                                        * Referenced by: '<S51>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_fm
                                        * Referenced by: '<S55>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_i
                                        * Referenced by: '<S56>/COOKING_MODE'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_ff
                                        * Referenced by: '<S54>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_n
                                        * Referenced by: '<S59>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_m
                                        * Referenced by: '<S60>/COOKING_MODE'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_ny
                                        * Referenced by: '<S61>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_e
                                        * Referenced by: '<S66>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_b
                                        * Referenced by: '<S67>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_a
                                        * Referenced by: '<S68>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_k
                                        * Referenced by: '<S69>/COOKING_MODE'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_nq
                                        * Referenced by: '<S71>/COOKING_MODE'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_c
                                        * Referenced by: '<S75>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_fp
                                        * Referenced by: '<S76>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_nqc
                                        * Referenced by: '<S77>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_ke
                                        * Referenced by: '<S84>/COOKING_MODE'
                                        */
  0U,                                  /* Computed Parameter: UnitDelay_X0
                                        * Referenced by: '<S33>/Unit Delay'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_o
                                        * Referenced by: '<S85>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_ev
                                        * Referenced by: '<S86>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_on
                                        * Referenced by: '<S87>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_pk
                                        * Referenced by: '<S81>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_m3
                                        * Referenced by: '<S94>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_nw
                                        * Referenced by: '<S95>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_cm
                                        * Referenced by: '<S96>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_mg
                                        * Referenced by: '<S97>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_l
                                        * Referenced by: '<S93>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_pd
                                        * Referenced by: '<S101>/COOKING_MODE'
                                        */
  2U,                                  /* Computed Parameter: COOKING_MODE_Value_bk
                                        * Referenced by: '<S100>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_oe
                                        * Referenced by: '<S104>/COOKING_MODE'
                                        */
  3U,                                  /* Computed Parameter: COOKING_MODE_Value_m2
                                        * Referenced by: '<S105>/COOKING_MODE'
                                        */
  0U,                                  /* Computed Parameter: Unit_Delay_Mode_X0
                                        * Referenced by: '<S6>/Unit _Delay_Mode'
                                        */
  1U,                                  /* Computed Parameter: COOKING_MODE_Value_aj
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
  0,                                   /* Computed Parameter: UnitDelay_X0_i
                                        * Referenced by: '<S29>/Unit Delay'
                                        */
  1,                                   /* Computed Parameter: True_Value
                                        * Referenced by: '<S29>/True'
                                        */
  1                                    /* Expression: true
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
};

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
