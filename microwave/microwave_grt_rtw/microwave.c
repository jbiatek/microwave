/*
 * microwave.c
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

/* Named constants for Chart: '<S1>/mode_logic' */
#define microwave_IN_COOKING           ((uint8_T)1U)
#define microwave_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define microwave_IN_RUNNING           ((uint8_T)1U)
#define microwave_IN_SETUP             ((uint8_T)2U)
#define microwave_IN_SUSPENDED         ((uint8_T)2U)

/* Block signals (auto storage) */
B_microwave_T microwave_B;

/* Block states (auto storage) */
DW_microwave_T microwave_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_microwave_T microwave_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_microwave_T microwave_Y;

/* Real-time model */
RT_MODEL_microwave_T microwave_M_;
RT_MODEL_microwave_T *const microwave_M = &microwave_M_;

/* Model step function */
void microwave_step(void)
{
  /* local block i/o variables */
  uint8_T rtb_Switch1;
  uint8_T rtb_Switch1_d;
  uint8_T rtb_Switch1_a;
  boolean_T rtb_UnitDelay2;
  uint16_T rtb_Sum1;
  uint16_T rtb_Divide;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator1_j;
  uint8_T rtb_Switch8;
  uint32_T tmp;

  /* Outputs for Atomic SubSystem: '<S1>/LE Detector12' */
  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Inport: '<Root>/KP_START'
   *  Logic: '<S5>/Logical Operator2'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  rtb_LogicalOperator1 = (microwave_U.KP_START &&
    (!microwave_DW.UnitDelay_DSTATE));

  /* End of Outputs for SubSystem: '<S1>/LE Detector12' */

  /* Outputs for Atomic SubSystem: '<S1>/LE Detector1' */
  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  Inport: '<Root>/KP_CLEAR'
   *  Logic: '<S4>/Logical Operator2'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  rtb_LogicalOperator1_j = (microwave_U.KP_CLEAR &&
    (!microwave_DW.UnitDelay_DSTATE_i));

  /* End of Outputs for SubSystem: '<S1>/LE Detector1' */

  /* UnitDelay: '<S1>/Unit Delay2' */
  rtb_UnitDelay2 = microwave_DW.UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S1>/KEYPAD_PROCESSING' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtb_UnitDelay2) {
    if (!microwave_DW.KEYPAD_PROCESSING_MODE) {
      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Middle Digit' */
      microwave_DW.UnitDelayMiddleDigit_DSTATE =
        microwave_P.UnitDelayMiddleDigit_InitialCon;

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector0' */
      /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_o = microwave_P.UnitDelay_InitialCondition;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector0' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector1' */
      /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_p = microwave_P.UnitDelay_InitialCondition_c;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector1' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector2' */
      /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_k =
        microwave_P.UnitDelay_InitialCondition_ck;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector2' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector4' */
      /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_n = microwave_P.UnitDelay_InitialCondition_l;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector4' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector3' */
      /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_is =
        microwave_P.UnitDelay_InitialCondition_n;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector3' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector5' */
      /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_e =
        microwave_P.UnitDelay_InitialCondition_n3;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector5' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector7' */
      /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_j = microwave_P.UnitDelay_InitialCondition_p;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector7' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector6' */
      /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_m =
        microwave_P.UnitDelay_InitialCondition_lr;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector6' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector8' */
      /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_f = microwave_P.UnitDelay_InitialCondition_f;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector8' */

      /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector9' */
      /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
      microwave_DW.UnitDelay_DSTATE_d =
        microwave_P.UnitDelay_InitialCondition_fu;

      /* End of InitializeConditions for SubSystem: '<S11>/LE Detector9' */

      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Left Digit' */
      microwave_DW.UnitDelayLeftDigit_DSTATE =
        microwave_P.UnitDelayLeftDigit_InitialCondi;

      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Right Digit' */
      microwave_DW.UnitDelayRightDigit_DSTATE =
        microwave_P.UnitDelayRightDigit_InitialCond;
      microwave_DW.KEYPAD_PROCESSING_MODE = TRUE;
    }

    /* Outputs for Atomic SubSystem: '<S11>/LE Detector0' */
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/NO_PRESS'
     *  Constant: '<S11>/ZERO_PRESSED'
     *  Inport: '<Root>/KP_0'
     *  Inport: '<Root>/KP_1'
     *  Inport: '<Root>/KP_2'
     *  Inport: '<Root>/KP_3'
     *  Inport: '<Root>/KP_4'
     *  Inport: '<Root>/KP_5'
     *  Inport: '<Root>/KP_6'
     *  Inport: '<Root>/KP_7'
     *  Inport: '<Root>/KP_8'
     *  Inport: '<Root>/KP_9'
     *  Logic: '<S13>/Logical Operator1'
     *  Logic: '<S13>/Logical Operator2'
     *  Logic: '<S14>/Logical Operator1'
     *  Logic: '<S14>/Logical Operator2'
     *  Logic: '<S15>/Logical Operator1'
     *  Logic: '<S15>/Logical Operator2'
     *  Logic: '<S16>/Logical Operator1'
     *  Logic: '<S16>/Logical Operator2'
     *  Logic: '<S17>/Logical Operator1'
     *  Logic: '<S17>/Logical Operator2'
     *  Logic: '<S18>/Logical Operator1'
     *  Logic: '<S18>/Logical Operator2'
     *  Logic: '<S19>/Logical Operator1'
     *  Logic: '<S19>/Logical Operator2'
     *  Logic: '<S20>/Logical Operator1'
     *  Logic: '<S20>/Logical Operator2'
     *  Logic: '<S21>/Logical Operator1'
     *  Logic: '<S21>/Logical Operator2'
     *  Logic: '<S22>/Logical Operator1'
     *  Logic: '<S22>/Logical Operator2'
     *  Switch: '<S11>/Switch1'
     *  Switch: '<S11>/Switch2'
     *  Switch: '<S11>/Switch3'
     *  Switch: '<S11>/Switch4'
     *  Switch: '<S11>/Switch5'
     *  Switch: '<S11>/Switch6'
     *  Switch: '<S11>/Switch7'
     *  Switch: '<S11>/Switch8'
     *  Switch: '<S11>/Switch9'
     *  UnitDelay: '<S13>/Unit Delay'
     *  UnitDelay: '<S14>/Unit Delay'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S16>/Unit Delay'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S18>/Unit Delay'
     *  UnitDelay: '<S19>/Unit Delay'
     *  UnitDelay: '<S20>/Unit Delay'
     *  UnitDelay: '<S21>/Unit Delay'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    if (microwave_U.KP_0 && (!microwave_DW.UnitDelay_DSTATE_o)) {
      rtb_Switch8 = microwave_P.ZERO_PRESSED_Value;
    } else {
      /* Outputs for Atomic SubSystem: '<S11>/LE Detector1' */
      if (microwave_U.KP_1 && (!microwave_DW.UnitDelay_DSTATE_p)) {
        /* Switch: '<S11>/Switch1' incorporates:
         *  Constant: '<S11>/ONE_PRESSED'
         */
        rtb_Switch8 = microwave_P.ONE_PRESSED_Value;
      } else {
        /* Outputs for Atomic SubSystem: '<S11>/LE Detector2' */
        if (microwave_U.KP_2 && (!microwave_DW.UnitDelay_DSTATE_k)) {
          /* Switch: '<S11>/Switch2' incorporates:
           *  Constant: '<S11>/TWO_PRESSED'
           *  Switch: '<S11>/Switch1'
           */
          rtb_Switch8 = microwave_P.TWO_PRESSED_Value;
        } else {
          /* Outputs for Atomic SubSystem: '<S11>/LE Detector4' */
          if (microwave_U.KP_3 && (!microwave_DW.UnitDelay_DSTATE_n)) {
            /* Switch: '<S11>/Switch3' incorporates:
             *  Constant: '<S11>/THREE_PRESSED'
             *  Switch: '<S11>/Switch1'
             *  Switch: '<S11>/Switch2'
             */
            rtb_Switch8 = microwave_P.THREE_PRESSED_Value;
          } else {
            /* Outputs for Atomic SubSystem: '<S11>/LE Detector3' */
            if (microwave_U.KP_4 && (!microwave_DW.UnitDelay_DSTATE_is)) {
              /* Switch: '<S11>/Switch4' incorporates:
               *  Constant: '<S11>/FOUR_PRESSED'
               *  Switch: '<S11>/Switch1'
               *  Switch: '<S11>/Switch2'
               *  Switch: '<S11>/Switch3'
               */
              rtb_Switch8 = microwave_P.FOUR_PRESSED_Value;
            } else {
              /* Outputs for Atomic SubSystem: '<S11>/LE Detector5' */
              if (microwave_U.KP_5 && (!microwave_DW.UnitDelay_DSTATE_e)) {
                /* Switch: '<S11>/Switch5' incorporates:
                 *  Constant: '<S11>/FIVE_PRESSED'
                 *  Switch: '<S11>/Switch1'
                 *  Switch: '<S11>/Switch2'
                 *  Switch: '<S11>/Switch3'
                 *  Switch: '<S11>/Switch4'
                 */
                rtb_Switch8 = microwave_P.FIVE_PRESSED_Value;
              } else {
                /* Outputs for Atomic SubSystem: '<S11>/LE Detector7' */
                if (microwave_U.KP_6 && (!microwave_DW.UnitDelay_DSTATE_j)) {
                  /* Switch: '<S11>/Switch6' incorporates:
                   *  Constant: '<S11>/SIX_PRESSED'
                   *  Switch: '<S11>/Switch1'
                   *  Switch: '<S11>/Switch2'
                   *  Switch: '<S11>/Switch3'
                   *  Switch: '<S11>/Switch4'
                   *  Switch: '<S11>/Switch5'
                   */
                  rtb_Switch8 = microwave_P.SIX_PRESSED_Value;
                } else {
                  /* Outputs for Atomic SubSystem: '<S11>/LE Detector6' */
                  if (microwave_U.KP_7 && (!microwave_DW.UnitDelay_DSTATE_m)) {
                    /* Switch: '<S11>/Switch7' incorporates:
                     *  Constant: '<S11>/SEVEN_PRESSED'
                     *  Switch: '<S11>/Switch1'
                     *  Switch: '<S11>/Switch2'
                     *  Switch: '<S11>/Switch3'
                     *  Switch: '<S11>/Switch4'
                     *  Switch: '<S11>/Switch5'
                     *  Switch: '<S11>/Switch6'
                     */
                    rtb_Switch8 = microwave_P.SEVEN_PRESSED_Value;
                  } else {
                    /* Outputs for Atomic SubSystem: '<S11>/LE Detector8' */
                    if (microwave_U.KP_8 && (!microwave_DW.UnitDelay_DSTATE_f))
                    {
                      /* Switch: '<S11>/Switch8' incorporates:
                       *  Constant: '<S11>/EIGHT_PRESSED'
                       *  Switch: '<S11>/Switch1'
                       *  Switch: '<S11>/Switch2'
                       *  Switch: '<S11>/Switch3'
                       *  Switch: '<S11>/Switch4'
                       *  Switch: '<S11>/Switch5'
                       *  Switch: '<S11>/Switch6'
                       *  Switch: '<S11>/Switch7'
                       */
                      rtb_Switch8 = microwave_P.EIGHT_PRESSED_Value;
                    } else {
                      /* Outputs for Atomic SubSystem: '<S11>/LE Detector9' */
                      if (microwave_U.KP_9 && (!microwave_DW.UnitDelay_DSTATE_d))
                      {
                        /* Switch: '<S11>/Switch9' incorporates:
                         *  Constant: '<S11>/NINE_PRESSED'
                         *  Switch: '<S11>/Switch1'
                         *  Switch: '<S11>/Switch2'
                         *  Switch: '<S11>/Switch3'
                         *  Switch: '<S11>/Switch4'
                         *  Switch: '<S11>/Switch5'
                         *  Switch: '<S11>/Switch6'
                         *  Switch: '<S11>/Switch7'
                         *  Switch: '<S11>/Switch8'
                         */
                        rtb_Switch8 = microwave_P.NINE_PRESSED_Value;
                      } else {
                        rtb_Switch8 = microwave_P.NO_PRESS_Value;
                      }

                      /* End of Outputs for SubSystem: '<S11>/LE Detector9' */
                    }

                    /* End of Outputs for SubSystem: '<S11>/LE Detector8' */
                  }

                  /* End of Outputs for SubSystem: '<S11>/LE Detector6' */
                }

                /* End of Outputs for SubSystem: '<S11>/LE Detector7' */
              }

              /* End of Outputs for SubSystem: '<S11>/LE Detector5' */
            }

            /* End of Outputs for SubSystem: '<S11>/LE Detector3' */
          }

          /* End of Outputs for SubSystem: '<S11>/LE Detector4' */
        }

        /* End of Outputs for SubSystem: '<S11>/LE Detector2' */
      }

      /* End of Outputs for SubSystem: '<S11>/LE Detector1' */
    }

    /* End of Switch: '<S11>/Switch' */
    /* End of Outputs for SubSystem: '<S11>/LE Detector0' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/NO_PRESS1'
     *  Constant: '<S9>/NO_PRESS3'
     *  Inport: '<Root>/KP_CLEAR'
     *  RelationalOperator: '<S9>/Relational Operator2'
     *  Switch: '<S9>/Switch14'
     *  UnitDelay: '<S3>/Unit Delay Left Digit'
     */
    if (microwave_U.KP_CLEAR) {
      rtb_Switch1 = microwave_P.NO_PRESS1_Value;
    } else if (rtb_Switch8 <= microwave_P.NO_PRESS3_Value) {
      /* Switch: '<S9>/Switch14' incorporates:
       *  UnitDelay: '<S3>/Unit Delay Middle Digit'
       */
      rtb_Switch1 = microwave_DW.UnitDelayMiddleDigit_DSTATE;
    } else {
      rtb_Switch1 = microwave_DW.UnitDelayLeftDigit_DSTATE;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/NO_PRESS1'
     *  Constant: '<S10>/NO_PRESS3'
     *  Inport: '<Root>/KP_CLEAR'
     *  RelationalOperator: '<S10>/Relational Operator2'
     *  Switch: '<S10>/Switch14'
     *  UnitDelay: '<S3>/Unit Delay Middle Digit'
     */
    if (microwave_U.KP_CLEAR) {
      rtb_Switch1_d = microwave_P.NO_PRESS1_Value_c;
    } else if (rtb_Switch8 <= microwave_P.NO_PRESS3_Value_f) {
      /* Switch: '<S10>/Switch14' incorporates:
       *  UnitDelay: '<S3>/Unit Delay Right Digit'
       */
      rtb_Switch1_d = microwave_DW.UnitDelayRightDigit_DSTATE;
    } else {
      rtb_Switch1_d = microwave_DW.UnitDelayMiddleDigit_DSTATE;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S12>/NO_PRESS1'
     *  Constant: '<S12>/NO_PRESS3'
     *  Inport: '<Root>/KP_CLEAR'
     *  RelationalOperator: '<S12>/Relational Operator2'
     *  Switch: '<S12>/Switch14'
     *  UnitDelay: '<S3>/Unit Delay Right Digit'
     */
    if (microwave_U.KP_CLEAR) {
      rtb_Switch1_a = microwave_P.NO_PRESS1_Value_i;
    } else if (rtb_Switch8 <= microwave_P.NO_PRESS3_Value_n) {
      /* Switch: '<S12>/Switch14' */
      rtb_Switch1_a = rtb_Switch8;
    } else {
      rtb_Switch1_a = microwave_DW.UnitDelayRightDigit_DSTATE;
    }

    /* End of Switch: '<S12>/Switch1' */

    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<Root>/STEPS_PER_SECOND'
     *  Constant: '<S8>/MINUTES_PLACE'
     *  Constant: '<S8>/ONES_PLACE'
     *  Constant: '<S8>/TENS_PLACE'
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  DataTypeConversion: '<S8>/Data Type Conversion1'
     *  DataTypeConversion: '<S8>/Data Type Conversion2'
     *  Product: '<S8>/Product'
     *  Product: '<S8>/Product1'
     *  Product: '<S8>/Product2'
     *  Sum: '<S8>/Sum'
     */
    tmp = (uint32_T)(uint16_T)(((uint32_T)(uint16_T)((uint32_T)rtb_Switch1_a *
      microwave_P.ONES_PLACE_Value) + (uint16_T)((uint32_T)rtb_Switch1_d *
      microwave_P.TENS_PLACE_Value)) + (uint16_T)((uint32_T)rtb_Switch1 *
      microwave_P.MINUTES_PLACE_Value)) * microwave_P.STEPS_PER_SECOND_Value;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    microwave_B.Product = (uint16_T)tmp;

    /* End of Product: '<S3>/Product' */
  } else {
    if (microwave_DW.KEYPAD_PROCESSING_MODE) {
      /* Disable for Outport: '<S3>/STEPS_TO_COOK' */
      microwave_B.Product = microwave_P.STEPS_TO_COOK_Y0;
      microwave_DW.KEYPAD_PROCESSING_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* Chart: '<S1>/mode_logic' incorporates:
   *  Inport: '<Root>/DOOR_CLOSED'
   */
  /* Gateway: microwave_inner/mode_logic */
  /* During: microwave_inner/mode_logic */
  if (microwave_DW.is_active_c1_microwave == 0U) {
    /* Entry: microwave_inner/mode_logic */
    microwave_DW.is_active_c1_microwave = 1U;

    /* Entry Internal: microwave_inner/mode_logic */
    /* Transition: '<S7>:5' */
    if (microwave_DW.is_c1_microwave != microwave_IN_SETUP) {
      microwave_DW.is_c1_microwave = microwave_IN_SETUP;

      /* Outport: '<Root>/MODE' */
      /* Entry 'SETUP': '<S7>:1' */
      microwave_Y.MODE = 1U;
      microwave_B.steps_remaining = microwave_B.Product;
    }
  } else {
    switch (microwave_DW.is_c1_microwave) {
     case microwave_IN_RUNNING:
      /* During 'RUNNING': '<S7>:4' */
      if (microwave_B.steps_remaining <= 0) {
        /* Transition: '<S7>:13' */
        /* Transition: '<S7>:6' */
        /* Exit Internal 'RUNNING': '<S7>:4' */
        microwave_DW.is_RUNNING = microwave_IN_NO_ACTIVE_CHILD;
        microwave_DW.is_c1_microwave = microwave_IN_SETUP;

        /* Outport: '<Root>/MODE' */
        /* Entry 'SETUP': '<S7>:1' */
        microwave_Y.MODE = 1U;
        microwave_B.steps_remaining = microwave_B.Product;
      } else {
        switch (microwave_DW.is_RUNNING) {
         case microwave_IN_COOKING:
          /* During 'COOKING': '<S7>:2' */
          if (microwave_B.steps_remaining > 0) {
            /* Transition: '<S7>:9' */
            microwave_B.steps_remaining--;
            microwave_DW.is_RUNNING = microwave_IN_COOKING;

            /* Outport: '<Root>/MODE' */
            /* Entry 'COOKING': '<S7>:2' */
            microwave_Y.MODE = 2U;
          } else {
            if (rtb_LogicalOperator1_j || (!microwave_U.DOOR_CLOSED)) {
              /* Transition: '<S7>:8' */
              microwave_DW.is_RUNNING = microwave_IN_SUSPENDED;

              /* Outport: '<Root>/MODE' */
              /* Entry 'SUSPENDED': '<S7>:3' */
              microwave_Y.MODE = 3U;
            }
          }
          break;

         case microwave_IN_SUSPENDED:
          /* During 'SUSPENDED': '<S7>:3' */
          if (rtb_LogicalOperator1_j) {
            /* Transition: '<S7>:14' */
            /* Transition: '<S7>:6' */
            microwave_DW.is_RUNNING = microwave_IN_NO_ACTIVE_CHILD;
            microwave_DW.is_c1_microwave = microwave_IN_SETUP;

            /* Outport: '<Root>/MODE' */
            /* Entry 'SETUP': '<S7>:1' */
            microwave_Y.MODE = 1U;
            microwave_B.steps_remaining = microwave_B.Product;
          } else {
            if (rtb_LogicalOperator1 && microwave_U.DOOR_CLOSED) {
              /* Transition: '<S7>:7' */
              microwave_DW.is_RUNNING = microwave_IN_COOKING;

              /* Outport: '<Root>/MODE' */
              /* Entry 'COOKING': '<S7>:2' */
              microwave_Y.MODE = 2U;
            }
          }
          break;

         default:
          microwave_DW.is_RUNNING = microwave_IN_NO_ACTIVE_CHILD;
          break;
        }
      }
      break;

     case microwave_IN_SETUP:
      /* During 'SETUP': '<S7>:1' */
      /* Transition: '<S7>:15' */
      microwave_B.steps_remaining = microwave_B.Product;
      if (rtb_LogicalOperator1 && (microwave_B.steps_remaining > 0)) {
        /* Transition: '<S7>:16' */
        microwave_DW.is_c1_microwave = microwave_IN_RUNNING;

        /* Entry Internal 'RUNNING': '<S7>:4' */
        /* Transition: '<S7>:12' */
        if (microwave_U.DOOR_CLOSED) {
          /* Transition: '<S7>:10' */
          if (microwave_DW.is_RUNNING != microwave_IN_COOKING) {
            microwave_DW.is_RUNNING = microwave_IN_COOKING;

            /* Outport: '<Root>/MODE' */
            /* Entry 'COOKING': '<S7>:2' */
            microwave_Y.MODE = 2U;
          }
        } else {
          /* Transition: '<S7>:11' */
          if (microwave_DW.is_RUNNING != microwave_IN_SUSPENDED) {
            microwave_DW.is_RUNNING = microwave_IN_SUSPENDED;

            /* Outport: '<Root>/MODE' */
            /* Entry 'SUSPENDED': '<S7>:3' */
            microwave_Y.MODE = 3U;
          }
        }
      }
      break;

     default:
      microwave_DW.is_c1_microwave = microwave_IN_NO_ACTIVE_CHILD;
      break;
    }
  }

  /* End of Chart: '<S1>/mode_logic' */

  /* Product: '<S25>/Divide' incorporates:
   *  Constant: '<Root>/STEPS_PER_SECOND'
   */
  rtb_Sum1 = (uint16_T)(microwave_P.STEPS_PER_SECOND_Value == (uint32_T)0 ?
                        MAX_uint32_T : (uint32_T)microwave_B.steps_remaining /
                        microwave_P.STEPS_PER_SECOND_Value);

  /* Product: '<S23>/Divide' incorporates:
   *  Constant: '<S6>/SECONDS_IN_MINUTE'
   */
  rtb_Divide = (uint16_T)(microwave_P.SECONDS_IN_MINUTE_Value == (uint32_T)0 ?
    MAX_uint32_T : (uint32_T)rtb_Sum1 / microwave_P.SECONDS_IN_MINUTE_Value);

  /* Outport: '<Root>/LEFT_DIGIT' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   */
  microwave_Y.LEFT_DIGIT = (uint8_T)rtb_Divide;

  /* Sum: '<S23>/Sum1' incorporates:
   *  Constant: '<S6>/SECONDS_IN_MINUTE'
   *  Product: '<S23>/Divide2'
   */
  rtb_Sum1 -= (uint16_T)((uint32_T)rtb_Divide *
    microwave_P.SECONDS_IN_MINUTE_Value);

  /* Product: '<S24>/Divide' incorporates:
   *  Constant: '<S6>/TENS_OF_SECONDS'
   */
  rtb_Divide = (uint16_T)(microwave_P.TENS_OF_SECONDS_Value == (uint32_T)0 ?
    MAX_uint32_T : (uint32_T)rtb_Sum1 / microwave_P.TENS_OF_SECONDS_Value);

  /* Outport: '<Root>/MIDDLE_DIGIT' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion1'
   */
  microwave_Y.MIDDLE_DIGIT = (uint8_T)rtb_Divide;

  /* Sum: '<S24>/Sum1' incorporates:
   *  Constant: '<S6>/TENS_OF_SECONDS'
   *  Product: '<S24>/Divide2'
   */
  rtb_Sum1 -= (uint16_T)((uint32_T)rtb_Divide *
    microwave_P.TENS_OF_SECONDS_Value);

  /* Outport: '<Root>/RIGHT_DIGIT' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion2'
   */
  microwave_Y.RIGHT_DIGIT = (uint8_T)rtb_Sum1;

  /* Update for Atomic SubSystem: '<S1>/LE Detector12' */
  /* Update for UnitDelay: '<S5>/Unit Delay' incorporates:
   *  Inport: '<Root>/KP_START'
   */
  microwave_DW.UnitDelay_DSTATE = microwave_U.KP_START;

  /* End of Update for SubSystem: '<S1>/LE Detector12' */

  /* Update for Atomic SubSystem: '<S1>/LE Detector1' */
  /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
   *  Inport: '<Root>/KP_CLEAR'
   */
  microwave_DW.UnitDelay_DSTATE_i = microwave_U.KP_CLEAR;

  /* End of Update for SubSystem: '<S1>/LE Detector1' */

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  Constant: '<S2>/COOKING_MODE'
   *  RelationalOperator: '<S2>/Relational Operator2'
   */
  microwave_DW.UnitDelay2_DSTATE = (microwave_P.COOKING_MODE_Value ==
    microwave_Y.MODE);

  /* Update for Enabled SubSystem: '<S1>/KEYPAD_PROCESSING' incorporates:
   *  Update for EnablePort: '<S3>/Enable'
   */
  if (microwave_DW.KEYPAD_PROCESSING_MODE) {
    /* Update for UnitDelay: '<S3>/Unit Delay Middle Digit' */
    microwave_DW.UnitDelayMiddleDigit_DSTATE = rtb_Switch1_d;

    /* Update for Atomic SubSystem: '<S11>/LE Detector0' */
    /* Update for UnitDelay: '<S13>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_0'
     */
    microwave_DW.UnitDelay_DSTATE_o = microwave_U.KP_0;

    /* End of Update for SubSystem: '<S11>/LE Detector0' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector1' */
    /* Update for UnitDelay: '<S14>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_1'
     */
    microwave_DW.UnitDelay_DSTATE_p = microwave_U.KP_1;

    /* End of Update for SubSystem: '<S11>/LE Detector1' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector2' */
    /* Update for UnitDelay: '<S15>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_2'
     */
    microwave_DW.UnitDelay_DSTATE_k = microwave_U.KP_2;

    /* End of Update for SubSystem: '<S11>/LE Detector2' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector4' */
    /* Update for UnitDelay: '<S17>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_3'
     */
    microwave_DW.UnitDelay_DSTATE_n = microwave_U.KP_3;

    /* End of Update for SubSystem: '<S11>/LE Detector4' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector3' */
    /* Update for UnitDelay: '<S16>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_4'
     */
    microwave_DW.UnitDelay_DSTATE_is = microwave_U.KP_4;

    /* End of Update for SubSystem: '<S11>/LE Detector3' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector5' */
    /* Update for UnitDelay: '<S18>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_5'
     */
    microwave_DW.UnitDelay_DSTATE_e = microwave_U.KP_5;

    /* End of Update for SubSystem: '<S11>/LE Detector5' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector7' */
    /* Update for UnitDelay: '<S20>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_6'
     */
    microwave_DW.UnitDelay_DSTATE_j = microwave_U.KP_6;

    /* End of Update for SubSystem: '<S11>/LE Detector7' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector6' */
    /* Update for UnitDelay: '<S19>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_7'
     */
    microwave_DW.UnitDelay_DSTATE_m = microwave_U.KP_7;

    /* End of Update for SubSystem: '<S11>/LE Detector6' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector8' */
    /* Update for UnitDelay: '<S21>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_8'
     */
    microwave_DW.UnitDelay_DSTATE_f = microwave_U.KP_8;

    /* End of Update for SubSystem: '<S11>/LE Detector8' */

    /* Update for Atomic SubSystem: '<S11>/LE Detector9' */
    /* Update for UnitDelay: '<S22>/Unit Delay' incorporates:
     *  Inport: '<Root>/KP_9'
     */
    microwave_DW.UnitDelay_DSTATE_d = microwave_U.KP_9;

    /* End of Update for SubSystem: '<S11>/LE Detector9' */

    /* Update for UnitDelay: '<S3>/Unit Delay Left Digit' */
    microwave_DW.UnitDelayLeftDigit_DSTATE = rtb_Switch1;

    /* Update for UnitDelay: '<S3>/Unit Delay Right Digit' */
    microwave_DW.UnitDelayRightDigit_DSTATE = rtb_Switch1_a;
  }

  /* End of Update for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(microwave_M->rtwLogInfo, (&microwave_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(microwave_M)!=-1) &&
        !((rtmGetTFinal(microwave_M)-microwave_M->Timing.taskTime0) >
          microwave_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(microwave_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++microwave_M->Timing.clockTick0)) {
    ++microwave_M->Timing.clockTickH0;
  }

  microwave_M->Timing.taskTime0 = microwave_M->Timing.clockTick0 *
    microwave_M->Timing.stepSize0 + microwave_M->Timing.clockTickH0 *
    microwave_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void microwave_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)microwave_M, 0,
                sizeof(RT_MODEL_microwave_T));
  rtmSetTFinal(microwave_M, -1);
  microwave_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    microwave_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(microwave_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(microwave_M->rtwLogInfo, (NULL));
    rtliSetLogT(microwave_M->rtwLogInfo, "tout");
    rtliSetLogX(microwave_M->rtwLogInfo, "");
    rtliSetLogXFinal(microwave_M->rtwLogInfo, "");
    rtliSetSigLog(microwave_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(microwave_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(microwave_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(microwave_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(microwave_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &microwave_Y.LEFT_DIGIT,
        &microwave_Y.MIDDLE_DIGIT,
        &microwave_Y.RIGHT_DIGIT,
        &microwave_Y.MODE
      };

      rtliSetLogYSignalPtrs(microwave_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        1,
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1,
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        1,
        1,
        1,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0,
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL),
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4,
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_UINT8,
        SS_UINT8,
        SS_UINT8,
        SS_UINT8
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0,
        0,
        0
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "",
        "",
        "",
        "" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "microwave/LEFT_DIGIT",
        "microwave/MIDDLE_DIGIT",
        "microwave/RIGHT_DIGIT",
        "microwave/MODE" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          4,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(microwave_M->rtwLogInfo, rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
      rt_LoggedCurrentSignalDimensions[2] = &rt_LoggedOutputWidths[2];
      rt_LoggedCurrentSignalDimensions[3] = &rt_LoggedOutputWidths[3];
    }

    rtliSetLogY(microwave_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &microwave_B), 0,
                sizeof(B_microwave_T));

  /* states (dwork) */
  (void) memset((void *)&microwave_DW, 0,
                sizeof(DW_microwave_T));

  /* external inputs */
  (void) memset((void *)&microwave_U, 0,
                sizeof(ExtU_microwave_T));

  /* external outputs */
  (void) memset((void *)&microwave_Y, 0,
                sizeof(ExtY_microwave_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(microwave_M->rtwLogInfo, 0.0, rtmGetTFinal
    (microwave_M), microwave_M->Timing.stepSize0, (&rtmGetErrorStatus
    (microwave_M)));

  /* InitializeConditions for Enabled SubSystem: '<S1>/KEYPAD_PROCESSING' */
  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Middle Digit' */
  microwave_DW.UnitDelayMiddleDigit_DSTATE =
    microwave_P.UnitDelayMiddleDigit_InitialCon;

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector0' */
  /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_o = microwave_P.UnitDelay_InitialCondition;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector0' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector1' */
  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_p = microwave_P.UnitDelay_InitialCondition_c;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector1' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector2' */
  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_k = microwave_P.UnitDelay_InitialCondition_ck;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector2' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector4' */
  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_n = microwave_P.UnitDelay_InitialCondition_l;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector4' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector3' */
  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_is = microwave_P.UnitDelay_InitialCondition_n;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector3' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector5' */
  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_e = microwave_P.UnitDelay_InitialCondition_n3;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector5' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector7' */
  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_j = microwave_P.UnitDelay_InitialCondition_p;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector7' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector6' */
  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_m = microwave_P.UnitDelay_InitialCondition_lr;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector6' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector8' */
  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_f = microwave_P.UnitDelay_InitialCondition_f;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector8' */

  /* InitializeConditions for Atomic SubSystem: '<S11>/LE Detector9' */
  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_d = microwave_P.UnitDelay_InitialCondition_fu;

  /* End of InitializeConditions for SubSystem: '<S11>/LE Detector9' */

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Left Digit' */
  microwave_DW.UnitDelayLeftDigit_DSTATE =
    microwave_P.UnitDelayLeftDigit_InitialCondi;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Right Digit' */
  microwave_DW.UnitDelayRightDigit_DSTATE =
    microwave_P.UnitDelayRightDigit_InitialCond;

  /* End of InitializeConditions for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* Start for Enabled SubSystem: '<S1>/KEYPAD_PROCESSING' */
  /* VirtualOutportStart for Outport: '<S3>/STEPS_TO_COOK' */
  microwave_B.Product = microwave_P.STEPS_TO_COOK_Y0;

  /* End of Start for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* InitializeConditions for Atomic SubSystem: '<S1>/LE Detector12' */
  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE = microwave_P.UnitDelay_InitialCondition_d;

  /* End of InitializeConditions for SubSystem: '<S1>/LE Detector12' */

  /* InitializeConditions for Atomic SubSystem: '<S1>/LE Detector1' */
  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  microwave_DW.UnitDelay_DSTATE_i = microwave_P.UnitDelay_InitialCondition_g;

  /* End of InitializeConditions for SubSystem: '<S1>/LE Detector1' */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  microwave_DW.UnitDelay2_DSTATE = microwave_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for Chart: '<S1>/mode_logic' */
  microwave_DW.is_RUNNING = microwave_IN_NO_ACTIVE_CHILD;
  microwave_DW.is_active_c1_microwave = 0U;
  microwave_DW.is_c1_microwave = microwave_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for Outport: '<Root>/MODE' incorporates:
   *  InitializeConditions for Chart: '<S1>/mode_logic'
   */
  microwave_Y.MODE = 0U;

  /* InitializeConditions for Chart: '<S1>/mode_logic' */
  microwave_B.steps_remaining = 0U;
}

/* Model terminate function */
void microwave_terminate(void)
{
  /* (no terminate code required) */
}
