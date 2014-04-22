/*
 * File: microwave_combined.c
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

/* Named constants for Stateflow: '<S6>/mode_logic' */
#define microwave_co_IN_NO_ACTIVE_CHILD (0U)
#define microwave_combined_IN_COOKING  (1U)
#define microwave_combined_IN_RUNNING  (1U)
#define microwave_combined_IN_SETUP    (2U)
#define microwave_combined_IN_SUSPENDED (2U)

/* Block signals (auto storage) */
BlockIO_microwave_combined microwave_combined_B;

/* Block states (auto storage) */
D_Work_microwave_combined microwave_combined_DWork;

/* External inputs (root inport signals with auto storage) */
ExternalInputs_microwave_combin microwave_combined_U;

/* External outputs (root outports fed by signals with auto storage) */
ExternalOutputs_microwave_combi microwave_combined_Y;

/* Real-time model */
RT_MODEL_microwave_combined microwave_combined_M_;
RT_MODEL_microwave_combined *microwave_combined_M = &microwave_combined_M_;

/*
 * Output and update for atomic system:
 *    '<S23>/IMPLIES'
 *    '<S23>/IMPLIES1'
 *    '<S24>/IMPLIES'
 *    '<S24>/IMPLIES1'
 *    '<S25>/IMPLIES'
 *    '<S26>/IMPLIES'
 *    '<S26>/IMPLIES1'
 *    '<S27>/IMPLIES'
 *    '<S28>/IMPLIES'
 *    '<S28>/IMPLIES1'
 * ...
 */
void microwave_combined_IMPLIES(boolean_T rtu_A, boolean_T rtu_B,
  rtB_IMPLIES_microwave_combined *localB)
{
  /* Logic: '<S38>/OR' incorporates:
   *  Logic: '<S38>/NOT'
   */
  localB->OR = ((!rtu_A) || rtu_B);
}

/* Model step function */
void microwave_combined_step(void)
{
  /* local block i/o variables */
  boolean_T rtb_RelationalOperator2_m;
  boolean_T rtb_RelationalOperator2_h;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_AND;
  boolean_T rtb_RelationalOperator2_b;
  boolean_T rtb_RelationalOperator2_l;
  boolean_T rtb_NOT_o;
  boolean_T rtb_OR_m;
  boolean_T rtb_NOT1;
  boolean_T rtb_RelationalOperator2_lz;
  boolean_T rtb_NOT_m;
  boolean_T rtb_OR_ef;
  boolean_T rtb_RelationalOperator2_kq;
  boolean_T rtb_AND_k;
  boolean_T rtb_RelationalOperator2_c5;
  boolean_T rtb_OR_c;
  boolean_T rtb_RelationalOperator2_kt;
  boolean_T rtb_RelationalOperator_e;
  boolean_T rtb_OR_f;
  boolean_T rtb_OR_l;
  boolean_T rtb_RelationalOperator_a;
  boolean_T rtb_AND_f;
  boolean_T rtb_OR_i;
  boolean_T rtb_RelationalOperator2_mq;
  boolean_T rtb_AND_o;
  boolean_T rtb_RelationalOperator2_ec;
  boolean_T rtb_RelationalOperator2_i5;
  boolean_T rtb_RelationalOperator2_l5;
  boolean_T rtb_RelationalOperator_o;
  boolean_T rtb_RelationalOperator2_iv;
  boolean_T rtb_RelationalOperator2_gf;
  boolean_T rtb_RelationalOperator2_nb;
  boolean_T rtb_RelationalOperator2_jc;
  boolean_T rtb_NOT_b;
  boolean_T rtb_LogicalOperator1_f;
  uint16_T rtb_Sum1;
  uint16_T rtb_Divide;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_LogicalOperator2_b;
  boolean_T rtb_LogicalOperator2_ex;
  boolean_T rtb_LogicalOperator2_az;
  boolean_T rtb_LogicalOperator2_p;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_LogicalOperator2_l;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator2_a;
  boolean_T rtb_LogicalOperator2_d;
  uint8_T rtb_Switch14_j;
  uint8_T rtb_Switch14_l;
  uint8_T rtb_Switch9;
  int32_T tmp;
  uint32_T tmp_0;

  /* Outputs for atomic SubSystem: '<S1>/LE Detector12' */

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Inport: '<Root>/KP_START'
   *  Logic: '<S5>/Logical Operator2'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  rtb_LogicalOperator1 = (microwave_combined_U.KP_START &&
    (!microwave_combined_DWork.UnitDelay_DSTATE_f));

  /* Update for UnitDelay: '<S5>/Unit Delay' incorporates:
   *  Update for Inport: '<Root>/KP_START'
   */
  microwave_combined_DWork.UnitDelay_DSTATE_f = microwave_combined_U.KP_START;

  /* end of Outputs for SubSystem: '<S1>/LE Detector12' */

  /* Outputs for atomic SubSystem: '<S1>/LE Detector1' */

  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  Inport: '<Root>/KP_CLEAR'
   *  Logic: '<S4>/Logical Operator2'
   *  UnitDelay: '<S4>/Unit Delay'
   */
  rtb_LogicalOperator1_f = (microwave_combined_U.KP_CLEAR &&
    (!microwave_combined_DWork.UnitDelay_DSTATE_b));

  /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
   *  Update for Inport: '<Root>/KP_CLEAR'
   */
  microwave_combined_DWork.UnitDelay_DSTATE_b = microwave_combined_U.KP_CLEAR;

  /* end of Outputs for SubSystem: '<S1>/LE Detector1' */

  /* Outputs for enable SubSystem: '<S1>/KEYPAD_PROCESSING' incorporates:
   *  EnablePort: '<S3>/Enable'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  if (microwave_combined_DWork.UnitDelay2_DSTATE) {
    if (!microwave_combined_DWork.KEYPAD_PROCESSING_MODE) {
      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Middle Digit' */
      microwave_combined_DWork.UnitDelayMiddleDigit_DSTATE =
        microwave_combined_P.UnitDelayMiddleDigit_X0;

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector0' */

      /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_jm =
        microwave_combined_P.UnitDelay_X0_p;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector0' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector1' */

      /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_a =
        microwave_combined_P.UnitDelay_X0_d;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector1' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector2' */

      /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_c4 =
        microwave_combined_P.UnitDelay_X0_l;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector2' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector4' */

      /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_e =
        microwave_combined_P.UnitDelay_X0_e;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector4' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector3' */

      /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_g =
        microwave_combined_P.UnitDelay_X0_g;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector3' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector5' */

      /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_c =
        microwave_combined_P.UnitDelay_X0_n;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector5' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector7' */

      /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_p3 =
        microwave_combined_P.UnitDelay_X0_eo;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector7' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector6' */

      /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_nc =
        microwave_combined_P.UnitDelay_X0_f;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector6' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector8' */

      /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_j =
        microwave_combined_P.UnitDelay_X0_o;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector8' */

      /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector9' */

      /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
      microwave_combined_DWork.UnitDelay_DSTATE_p =
        microwave_combined_P.UnitDelay_X0_a;

      /* end of InitializeConditions for SubSystem: '<S11>/LE Detector9' */

      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Left Digit' */
      microwave_combined_DWork.UnitDelayLeftDigit_DSTATE =
        microwave_combined_P.UnitDelayLeftDigit_X0;

      /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Right Digit' */
      microwave_combined_DWork.UnitDelayRightDigit_DSTATE =
        microwave_combined_P.UnitDelayRightDigit_X0;
      microwave_combined_DWork.KEYPAD_PROCESSING_MODE = TRUE;
    }

    /* Outputs for atomic SubSystem: '<S11>/LE Detector0' */

    /* Logic: '<S13>/Logical Operator2' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
    rtb_LogicalOperator2_b = !microwave_combined_DWork.UnitDelay_DSTATE_jm;

    /* Update for UnitDelay: '<S13>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_0'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_jm = microwave_combined_U.KP_0;

    /* end of Outputs for SubSystem: '<S11>/LE Detector0' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector1' */

    /* Logic: '<S14>/Logical Operator2' incorporates:
     *  UnitDelay: '<S14>/Unit Delay'
     */
    rtb_LogicalOperator2_ex = !microwave_combined_DWork.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S14>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_1'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_a = microwave_combined_U.KP_1;

    /* end of Outputs for SubSystem: '<S11>/LE Detector1' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector2' */

    /* Logic: '<S15>/Logical Operator2' incorporates:
     *  UnitDelay: '<S15>/Unit Delay'
     */
    rtb_LogicalOperator2_az = !microwave_combined_DWork.UnitDelay_DSTATE_c4;

    /* Update for UnitDelay: '<S15>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_2'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_c4 = microwave_combined_U.KP_2;

    /* end of Outputs for SubSystem: '<S11>/LE Detector2' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector4' */

    /* Logic: '<S17>/Logical Operator2' incorporates:
     *  UnitDelay: '<S17>/Unit Delay'
     */
    rtb_LogicalOperator2_p = !microwave_combined_DWork.UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S17>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_3'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_e = microwave_combined_U.KP_3;

    /* end of Outputs for SubSystem: '<S11>/LE Detector4' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector3' */

    /* Logic: '<S16>/Logical Operator2' incorporates:
     *  UnitDelay: '<S16>/Unit Delay'
     */
    rtb_LogicalOperator2_k = !microwave_combined_DWork.UnitDelay_DSTATE_g;

    /* Update for UnitDelay: '<S16>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_4'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_g = microwave_combined_U.KP_4;

    /* end of Outputs for SubSystem: '<S11>/LE Detector3' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector5' */

    /* Logic: '<S18>/Logical Operator2' incorporates:
     *  UnitDelay: '<S18>/Unit Delay'
     */
    rtb_LogicalOperator2_c = !microwave_combined_DWork.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S18>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_5'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_c = microwave_combined_U.KP_5;

    /* end of Outputs for SubSystem: '<S11>/LE Detector5' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector7' */

    /* Logic: '<S20>/Logical Operator2' incorporates:
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_LogicalOperator2_l = !microwave_combined_DWork.UnitDelay_DSTATE_p3;

    /* Update for UnitDelay: '<S20>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_6'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_p3 = microwave_combined_U.KP_6;

    /* end of Outputs for SubSystem: '<S11>/LE Detector7' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector6' */

    /* Logic: '<S19>/Logical Operator2' incorporates:
     *  UnitDelay: '<S19>/Unit Delay'
     */
    rtb_LogicalOperator2_e = !microwave_combined_DWork.UnitDelay_DSTATE_nc;

    /* Update for UnitDelay: '<S19>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_7'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_nc = microwave_combined_U.KP_7;

    /* end of Outputs for SubSystem: '<S11>/LE Detector6' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector8' */

    /* Logic: '<S21>/Logical Operator2' incorporates:
     *  UnitDelay: '<S21>/Unit Delay'
     */
    rtb_LogicalOperator2_a = !microwave_combined_DWork.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S21>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_8'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_j = microwave_combined_U.KP_8;

    /* end of Outputs for SubSystem: '<S11>/LE Detector8' */

    /* Outputs for atomic SubSystem: '<S11>/LE Detector9' */

    /* Logic: '<S22>/Logical Operator2' incorporates:
     *  UnitDelay: '<S22>/Unit Delay'
     */
    rtb_LogicalOperator2_d = !microwave_combined_DWork.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S22>/Unit Delay' incorporates:
     *  Update for Inport: '<Root>/KP_9'
     */
    microwave_combined_DWork.UnitDelay_DSTATE_p = microwave_combined_U.KP_9;

    /* end of Outputs for SubSystem: '<S11>/LE Detector9' */

    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/ZERO_PRESSED'
     *  Inport: '<Root>/KP_0'
     *  Logic: '<S13>/Logical Operator1'
     */
    if (microwave_combined_U.KP_0 && rtb_LogicalOperator2_b) {
      rtb_Switch9 = microwave_combined_P.ZERO_PRESSED_Value;
    } else {
      /* Switch: '<S11>/Switch1' incorporates:
       *  Constant: '<S11>/ONE_PRESSED'
       *  Inport: '<Root>/KP_1'
       *  Logic: '<S14>/Logical Operator1'
       */
      if (microwave_combined_U.KP_1 && rtb_LogicalOperator2_ex) {
        rtb_Switch9 = microwave_combined_P.ONE_PRESSED_Value;
      } else {
        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S11>/TWO_PRESSED'
         *  Inport: '<Root>/KP_2'
         *  Logic: '<S15>/Logical Operator1'
         */
        if (microwave_combined_U.KP_2 && rtb_LogicalOperator2_az) {
          rtb_Switch9 = microwave_combined_P.TWO_PRESSED_Value;
        } else {
          /* Switch: '<S11>/Switch3' incorporates:
           *  Constant: '<S11>/THREE_PRESSED'
           *  Inport: '<Root>/KP_3'
           *  Logic: '<S17>/Logical Operator1'
           */
          if (microwave_combined_U.KP_3 && rtb_LogicalOperator2_p) {
            rtb_Switch9 = microwave_combined_P.THREE_PRESSED_Value;
          } else {
            /* Switch: '<S11>/Switch4' incorporates:
             *  Constant: '<S11>/FOUR_PRESSED'
             *  Inport: '<Root>/KP_4'
             *  Logic: '<S16>/Logical Operator1'
             */
            if (microwave_combined_U.KP_4 && rtb_LogicalOperator2_k) {
              rtb_Switch9 = microwave_combined_P.FOUR_PRESSED_Value;
            } else {
              /* Switch: '<S11>/Switch5' incorporates:
               *  Constant: '<S11>/FIVE_PRESSED'
               *  Inport: '<Root>/KP_5'
               *  Logic: '<S18>/Logical Operator1'
               */
              if (microwave_combined_U.KP_5 && rtb_LogicalOperator2_c) {
                rtb_Switch9 = microwave_combined_P.FIVE_PRESSED_Value;
              } else {
                /* Switch: '<S11>/Switch6' incorporates:
                 *  Constant: '<S11>/SIX_PRESSED'
                 *  Inport: '<Root>/KP_6'
                 *  Logic: '<S20>/Logical Operator1'
                 */
                if (microwave_combined_U.KP_6 && rtb_LogicalOperator2_l) {
                  rtb_Switch9 = microwave_combined_P.SIX_PRESSED_Value;
                } else {
                  /* Switch: '<S11>/Switch7' incorporates:
                   *  Constant: '<S11>/SEVEN_PRESSED'
                   *  Inport: '<Root>/KP_7'
                   *  Logic: '<S19>/Logical Operator1'
                   */
                  if (microwave_combined_U.KP_7 && rtb_LogicalOperator2_e) {
                    rtb_Switch9 = microwave_combined_P.SEVEN_PRESSED_Value;
                  } else {
                    /* Switch: '<S11>/Switch8' incorporates:
                     *  Constant: '<S11>/EIGHT_PRESSED'
                     *  Inport: '<Root>/KP_8'
                     *  Logic: '<S21>/Logical Operator1'
                     */
                    if (microwave_combined_U.KP_8 && rtb_LogicalOperator2_a) {
                      rtb_Switch9 = microwave_combined_P.EIGHT_PRESSED_Value;
                    } else {
                      /* Switch: '<S11>/Switch9' incorporates:
                       *  Constant: '<S11>/NINE_PRESSED'
                       *  Constant: '<S11>/NO_PRESS'
                       *  Inport: '<Root>/KP_9'
                       *  Logic: '<S22>/Logical Operator1'
                       */
                      if (microwave_combined_U.KP_9 && rtb_LogicalOperator2_d) {
                        rtb_Switch9 = microwave_combined_P.NINE_PRESSED_Value;
                      } else {
                        rtb_Switch9 = microwave_combined_P.NO_PRESS_Value;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/NO_PRESS1'
     *  Inport: '<Root>/KP_CLEAR'
     */
    if (microwave_combined_U.KP_CLEAR) {
      rtb_Switch14_j = microwave_combined_P.NO_PRESS1_Value;
    } else {
      /* Switch: '<S9>/Switch14' incorporates:
       *  Constant: '<S9>/NO_PRESS3'
       *  RelationalOperator: '<S9>/Relational Operator2'
       *  UnitDelay: '<S3>/Unit Delay Left Digit'
       *  UnitDelay: '<S3>/Unit Delay Middle Digit'
       */
      if (rtb_Switch9 <= microwave_combined_P.NO_PRESS3_Value) {
        rtb_Switch14_j = microwave_combined_DWork.UnitDelayMiddleDigit_DSTATE;
      } else {
        rtb_Switch14_j = microwave_combined_DWork.UnitDelayLeftDigit_DSTATE;
      }
    }

    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/NO_PRESS1'
     *  Inport: '<Root>/KP_CLEAR'
     */
    if (microwave_combined_U.KP_CLEAR) {
      rtb_Switch14_l = microwave_combined_P.NO_PRESS1_Value_m;
    } else {
      /* Switch: '<S10>/Switch14' incorporates:
       *  Constant: '<S10>/NO_PRESS3'
       *  RelationalOperator: '<S10>/Relational Operator2'
       *  UnitDelay: '<S3>/Unit Delay Middle Digit'
       *  UnitDelay: '<S3>/Unit Delay Right Digit'
       */
      if (rtb_Switch9 <= microwave_combined_P.NO_PRESS3_Value_n) {
        rtb_Switch14_l = microwave_combined_DWork.UnitDelayRightDigit_DSTATE;
      } else {
        rtb_Switch14_l = microwave_combined_DWork.UnitDelayMiddleDigit_DSTATE;
      }
    }

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S12>/NO_PRESS1'
     *  Inport: '<Root>/KP_CLEAR'
     */
    if (microwave_combined_U.KP_CLEAR) {
      rtb_Switch9 = microwave_combined_P.NO_PRESS1_Value_mo;
    } else {
      /* Switch: '<S12>/Switch14' incorporates:
       *  Constant: '<S12>/NO_PRESS3'
       *  RelationalOperator: '<S12>/Relational Operator2'
       *  UnitDelay: '<S3>/Unit Delay Right Digit'
       */
      if (!(rtb_Switch9 <= microwave_combined_P.NO_PRESS3_Value_d)) {
        rtb_Switch9 = microwave_combined_DWork.UnitDelayRightDigit_DSTATE;
      }
    }

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
    tmp_0 = (uint32_T)(uint16_T)(((uint32_T)(uint16_T)((uint32_T)rtb_Switch9 *
      (uint32_T)microwave_combined_P.ONES_PLACE_Value) + (uint32_T)(uint16_T)
      ((uint32_T)rtb_Switch14_l * (uint32_T)
       microwave_combined_P.TENS_PLACE_Value)) + (uint32_T)(uint16_T)((uint32_T)
      rtb_Switch14_j * (uint32_T)microwave_combined_P.MINUTES_PLACE_Value)) *
      (uint32_T)microwave_combined_P.STEPS_PER_SECOND_Value;
    if (tmp_0 > 65535U) {
      tmp_0 = 65535U;
    }

    microwave_combined_B.Product = (uint16_T)tmp_0;

    /* Update for UnitDelay: '<S3>/Unit Delay Middle Digit' */
    microwave_combined_DWork.UnitDelayMiddleDigit_DSTATE = rtb_Switch14_l;

    /* Update for UnitDelay: '<S3>/Unit Delay Left Digit' */
    microwave_combined_DWork.UnitDelayLeftDigit_DSTATE = rtb_Switch14_j;

    /* Update for UnitDelay: '<S3>/Unit Delay Right Digit' */
    microwave_combined_DWork.UnitDelayRightDigit_DSTATE = rtb_Switch9;
  } else {
    if ((int32_T)microwave_combined_DWork.KEYPAD_PROCESSING_MODE) {
      /* Disable for Outport: '<S3>/STEPS_TO_COOK' */
      microwave_combined_B.Product = microwave_combined_P.STEPS_TO_COOK_Y0;
      microwave_combined_DWork.KEYPAD_PROCESSING_MODE = FALSE;
    }
  }

  /* end of Outputs for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* Stateflow: '<S6>/mode_logic' incorporates:
   *  Inport: '<Root>/DOOR_CLOSED'
   */
  /* Gateway: microwave/Subsystem/mode_logic */
  /* During: microwave/Subsystem/mode_logic */
  if (microwave_combined_DWork.is_active_c2_microwave_combined == 0) {
    /* Entry: microwave/Subsystem/mode_logic */
    microwave_combined_DWork.is_active_c2_microwave_combined = 1U;

    /* Transition: '<S37>:5' */
    /* Entry 'SETUP': '<S37>:1' */
    if (microwave_combined_DWork.is_c2_microwave_combined !=
        microwave_combined_IN_SETUP) {
      microwave_combined_DWork.is_c2_microwave_combined =
        microwave_combined_IN_SETUP;
      microwave_combined_B.mode = 1U;
      microwave_combined_B.steps_remaining = microwave_combined_B.Product;
    }
  } else {
    switch (microwave_combined_DWork.is_c2_microwave_combined) {
     case microwave_combined_IN_RUNNING:
      /* During 'RUNNING': '<S37>:4' */
      if (microwave_combined_DWork.is_c2_microwave_combined ==
          microwave_combined_IN_RUNNING) {
        if (microwave_combined_B.steps_remaining <= 0) {
          /* Transition: '<S37>:13' */
          /* Transition: '<S37>:6' */
          /* Exit 'COOKING': '<S37>:2' */
          microwave_combined_DWork.is_RUNNING = (uint8_T)
            microwave_co_IN_NO_ACTIVE_CHILD;

          /* Exit 'SUSPENDED': '<S37>:3' */
          /* Exit 'RUNNING': '<S37>:4' */
          /* Entry 'SETUP': '<S37>:1' */
          microwave_combined_DWork.is_c2_microwave_combined =
            microwave_combined_IN_SETUP;
          microwave_combined_B.mode = 1U;
          microwave_combined_B.steps_remaining = microwave_combined_B.Product;
        } else {
          switch (microwave_combined_DWork.is_RUNNING) {
           case microwave_combined_IN_COOKING:
            /* During 'COOKING': '<S37>:2' */
            if (microwave_combined_B.steps_remaining > 0) {
              /* Transition: '<S37>:9' */
              /* Exit 'COOKING': '<S37>:2' */
              microwave_combined_B.steps_remaining = (uint16_T)
                (microwave_combined_B.steps_remaining - 1);

              /* Entry 'COOKING': '<S37>:2' */
              microwave_combined_DWork.is_RUNNING =
                microwave_combined_IN_COOKING;
              microwave_combined_B.mode = 2U;
            } else {
              if (rtb_LogicalOperator1_f || (!microwave_combined_U.DOOR_CLOSED))
              {
                /* Transition: '<S37>:8' */
                /* Exit 'COOKING': '<S37>:2' */
                /* Entry 'SUSPENDED': '<S37>:3' */
                microwave_combined_DWork.is_RUNNING =
                  microwave_combined_IN_SUSPENDED;
                microwave_combined_B.mode = 3U;
              }
            }
            break;

           case microwave_combined_IN_SUSPENDED:
            /* During 'SUSPENDED': '<S37>:3' */
            if (rtb_LogicalOperator1_f) {
              /* Transition: '<S37>:14' */
              /* Transition: '<S37>:6' */
              /* Exit 'SUSPENDED': '<S37>:3' */
              microwave_combined_DWork.is_RUNNING = (uint8_T)
                microwave_co_IN_NO_ACTIVE_CHILD;

              /* Exit 'RUNNING': '<S37>:4' */
              /* Entry 'SETUP': '<S37>:1' */
              microwave_combined_DWork.is_c2_microwave_combined =
                microwave_combined_IN_SETUP;
              microwave_combined_B.mode = 1U;
              microwave_combined_B.steps_remaining =
                microwave_combined_B.Product;
            } else {
              if (rtb_LogicalOperator1 && microwave_combined_U.DOOR_CLOSED) {
                /* Transition: '<S37>:7' */
                /* Exit 'SUSPENDED': '<S37>:3' */
                /* Entry 'COOKING': '<S37>:2' */
                microwave_combined_DWork.is_RUNNING =
                  microwave_combined_IN_COOKING;
                microwave_combined_B.mode = 2U;
              }
            }
            break;

           default:
            microwave_combined_DWork.is_RUNNING = (uint8_T)
              microwave_co_IN_NO_ACTIVE_CHILD;
            break;
          }
        }
      }
      break;

     case microwave_combined_IN_SETUP:
      /* During 'SETUP': '<S37>:1' */
      /* Transition: '<S37>:15' */
      microwave_combined_B.steps_remaining = microwave_combined_B.Product;
      if (rtb_LogicalOperator1 && (microwave_combined_B.steps_remaining > 0)) {
        /* Transition: '<S37>:16' */
        /* Exit 'SETUP': '<S37>:1' */
        /* Entry 'RUNNING': '<S37>:4' */
        microwave_combined_DWork.is_c2_microwave_combined =
          microwave_combined_IN_RUNNING;

        /* Transition: '<S37>:12' */
        if (microwave_combined_U.DOOR_CLOSED) {
          /* Transition: '<S37>:10' */
          /* Entry 'COOKING': '<S37>:2' */
          if (microwave_combined_DWork.is_RUNNING !=
              microwave_combined_IN_COOKING) {
            microwave_combined_DWork.is_RUNNING = microwave_combined_IN_COOKING;
            microwave_combined_B.mode = 2U;
          }
        } else {
          /* Transition: '<S37>:11' */
          /* Entry 'SUSPENDED': '<S37>:3' */
          if (microwave_combined_DWork.is_RUNNING !=
              microwave_combined_IN_SUSPENDED) {
            microwave_combined_DWork.is_RUNNING =
              microwave_combined_IN_SUSPENDED;
            microwave_combined_B.mode = 3U;
          }
        }
      }
      break;

     default:
      microwave_combined_DWork.is_c2_microwave_combined = (uint8_T)
        microwave_co_IN_NO_ACTIVE_CHILD;
      break;
    }
  }

  /* Product: '<S108>/Divide' incorporates:
   *  Constant: '<Root>/STEPS_PER_SECOND'
   */
  tmp = microwave_combined_P.STEPS_PER_SECOND_Value;
  rtb_Sum1 = (uint16_T)((uint32_T)tmp == (uint32_T)0 ? MAX_uint32_T : (uint32_T)
                        microwave_combined_B.steps_remaining / (uint32_T)tmp);

  /* Product: '<S106>/Divide' incorporates:
   *  Constant: '<S7>/SECONDS_IN_MINUTE'
   */
  tmp = microwave_combined_P.SECONDS_IN_MINUTE_Value;
  rtb_Divide = (uint16_T)((uint32_T)tmp == (uint32_T)0 ? MAX_uint32_T :
    (uint32_T)rtb_Sum1 / (uint32_T)tmp);

  /* Outport: '<Root>/LEFT_DIGIT' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   */
  microwave_combined_Y.LEFT_DIGIT = (uint8_T)rtb_Divide;

  /* Sum: '<S106>/Sum1' incorporates:
   *  Constant: '<S7>/SECONDS_IN_MINUTE'
   *  Product: '<S106>/Divide2'
   */
  rtb_Sum1 -= (uint16_T)((uint32_T)rtb_Divide * (uint32_T)
    microwave_combined_P.SECONDS_IN_MINUTE_Value);

  /* Product: '<S107>/Divide' incorporates:
   *  Constant: '<S7>/TENS_OF_SECONDS'
   */
  tmp = microwave_combined_P.TENS_OF_SECONDS_Value;
  rtb_Divide = (uint16_T)((uint32_T)tmp == (uint32_T)0 ? MAX_uint32_T :
    (uint32_T)rtb_Sum1 / (uint32_T)tmp);

  /* Outport: '<Root>/MIDDLE_DIGIT' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion1'
   */
  microwave_combined_Y.MIDDLE_DIGIT = (uint8_T)rtb_Divide;

  /* Sum: '<S107>/Sum1' incorporates:
   *  Constant: '<S7>/TENS_OF_SECONDS'
   *  Product: '<S107>/Divide2'
   */
  rtb_Sum1 -= (uint16_T)((uint32_T)rtb_Divide * (uint32_T)
    microwave_combined_P.TENS_OF_SECONDS_Value);

  /* Outport: '<Root>/RIGHT_DIGIT' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion2'
   */
  microwave_combined_Y.RIGHT_DIGIT = (uint8_T)rtb_Sum1;

  /* Outport: '<Root>/MODE' */
  microwave_combined_Y.MODE = microwave_combined_B.mode;

  /* Outputs for atomic SubSystem: '<S6>/Cooking_Implies_Door_Closed' */

  /* RelationalOperator: '<S47>/Relational Operator2' incorporates:
   *  Constant: '<S47>/COOKING_MODE'
   */
  rtb_RelationalOperator2_iv = (microwave_combined_P.COOKING_MODE_Value_f ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S25>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_iv,
    microwave_combined_U.DOOR_CLOSED, &microwave_combined_B.IMPLIES_m);

  /* end of Outputs for SubSystem: '<S25>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Cooking_Implies_Door_Closed' */

  /* Outport: '<Root>/S1' */
  microwave_combined_Y.S1 = microwave_combined_B.IMPLIES_m.OR;

  /* UnitDelay: '<S6>/Unit _Delay_Mode' */
  rtb_Switch9 = microwave_combined_DWork.Unit_Delay_Mode_DSTATE;

  /* Outputs for atomic SubSystem: '<S6>/Clear_Implies_Not_Cooking' */

  /* RelationalOperator: '<S40>/Relational Operator2' incorporates:
   *  Constant: '<S40>/COOKING_MODE'
   */
  rtb_RelationalOperator2_jc = (microwave_combined_P.COOKING_MODE_Value ==
    microwave_combined_DWork.Unit_Delay_Mode_DSTATE);

  /* Logic: '<S23>/NOT' incorporates:
   *  Constant: '<S41>/COOKING_MODE'
   *  RelationalOperator: '<S41>/Relational Operator2'
   */
  rtb_NOT_b = !(microwave_combined_P.COOKING_MODE_Value_h ==
                microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S23>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_LogicalOperator1_f, rtb_NOT_b,
    &microwave_combined_B.IMPLIES1);

  /* end of Outputs for SubSystem: '<S23>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S23>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_jc,
    microwave_combined_B.IMPLIES1.OR, &microwave_combined_B.IMPLIES);

  /* end of Outputs for SubSystem: '<S23>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Clear_Implies_Not_Cooking' */

  /* Outport: '<Root>/S2' */
  microwave_combined_Y.S2 = microwave_combined_B.IMPLIES.OR;

  /* Outputs for atomic SubSystem: '<S6>/Init_Mode_Is_Setup' */

  /* Logic: '<S29>/OR' incorporates:
   *  Constant: '<S61>/COOKING_MODE'
   *  Outport: '<Root>/R1'
   *  RelationalOperator: '<S61>/Relational Operator2'
   *  UnitDelay: '<S29>/Unit Delay'
   */
  microwave_combined_Y.R1 = (microwave_combined_DWork.UnitDelay_DSTATE_n ||
    (microwave_combined_P.COOKING_MODE_Value_ny == microwave_combined_B.mode));

  /* Update for UnitDelay: '<S29>/Unit Delay' incorporates:
   *  Constant: '<S29>/True'
   */
  microwave_combined_DWork.UnitDelay_DSTATE_n = microwave_combined_P.True_Value;

  /* end of Outputs for SubSystem: '<S6>/Init_Mode_Is_Setup' */

  /* Outputs for atomic SubSystem: '<S6>/Start_Implies_Running' */

  /* Logic: '<S32>/AND' incorporates:
   *  Constant: '<S32>/Zero'
   *  RelationalOperator: '<S32>/Relational Operator'
   */
  rtb_AND_k = (rtb_LogicalOperator1 && (microwave_combined_B.Product >
    microwave_combined_P.Zero_Value_l));

  /* RelationalOperator: '<S75>/Relational Operator2' incorporates:
   *  Constant: '<S75>/COOKING_MODE'
   */
  rtb_RelationalOperator2_c5 = (microwave_combined_P.COOKING_MODE_Value_c ==
    rtb_Switch9);

  /* Logic: '<S74>/OR' incorporates:
   *  Constant: '<S76>/COOKING_MODE'
   *  Constant: '<S77>/COOKING_MODE'
   *  RelationalOperator: '<S76>/Relational Operator2'
   *  RelationalOperator: '<S77>/Relational Operator2'
   */
  rtb_OR_c = ((microwave_combined_P.COOKING_MODE_Value_fp ==
               microwave_combined_B.mode) ||
              (microwave_combined_P.COOKING_MODE_Value_nqc ==
               microwave_combined_B.mode));

  /* Outputs for atomic SubSystem: '<S32>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_AND_k, rtb_OR_c,
    &microwave_combined_B.IMPLIES1_b3);

  /* end of Outputs for SubSystem: '<S32>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S32>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_c5,
    microwave_combined_B.IMPLIES1_b3.OR, &microwave_combined_B.IMPLIES_i);

  /* end of Outputs for SubSystem: '<S32>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Start_Implies_Running' */

  /* Outport: '<Root>/R2' */
  microwave_combined_Y.R2 = microwave_combined_B.IMPLIES_i.OR;

  /* Outputs for atomic SubSystem: '<S6>/Start_Running_With_Door_Closed_Implies_Cooking' */

  /* Logic: '<S33>/NOT' incorporates:
   *  Constant: '<S84>/COOKING_MODE'
   *  Constant: '<S85>/COOKING_MODE'
   *  Logic: '<S82>/OR'
   *  RelationalOperator: '<S84>/Relational Operator2'
   *  RelationalOperator: '<S85>/Relational Operator2'
   *  UnitDelay: '<S33>/Unit Delay'
   */
  rtb_NOT_m = !((microwave_combined_P.COOKING_MODE_Value_ke ==
                 microwave_combined_DWork.UnitDelay_DSTATE) ||
                (microwave_combined_P.COOKING_MODE_Value_o ==
                 microwave_combined_DWork.UnitDelay_DSTATE));

  /* Logic: '<S83>/OR' incorporates:
   *  Constant: '<S86>/COOKING_MODE'
   *  Constant: '<S87>/COOKING_MODE'
   *  RelationalOperator: '<S86>/Relational Operator2'
   *  RelationalOperator: '<S87>/Relational Operator2'
   */
  rtb_OR_ef = ((microwave_combined_P.COOKING_MODE_Value_ev ==
                microwave_combined_B.mode) ||
               (microwave_combined_P.COOKING_MODE_Value_on ==
                microwave_combined_B.mode));

  /* RelationalOperator: '<S81>/Relational Operator2' incorporates:
   *  Constant: '<S81>/COOKING_MODE'
   */
  rtb_RelationalOperator2_kq = (microwave_combined_P.COOKING_MODE_Value_pk ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S33>/IMPLIES2' */
  microwave_combined_IMPLIES(microwave_combined_U.DOOR_CLOSED,
    rtb_RelationalOperator2_kq, &microwave_combined_B.IMPLIES2);

  /* end of Outputs for SubSystem: '<S33>/IMPLIES2' */

  /* Outputs for atomic SubSystem: '<S33>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_OR_ef, microwave_combined_B.IMPLIES2.OR,
    &microwave_combined_B.IMPLIES1_m);

  /* end of Outputs for SubSystem: '<S33>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S33>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_NOT_m, microwave_combined_B.IMPLIES1_m.OR,
    &microwave_combined_B.IMPLIES_bx);

  /* end of Outputs for SubSystem: '<S33>/IMPLIES' */

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE = microwave_combined_B.mode;

  /* end of Outputs for SubSystem: '<S6>/Start_Running_With_Door_Closed_Implies_Cooking' */

  /* Outport: '<Root>/R3' */
  microwave_combined_Y.R3 = microwave_combined_B.IMPLIES_bx.OR;

  /* Outputs for atomic SubSystem: '<S6>/Start_Running_With_Door_Open_Implies_Suspended' */

  /* Logic: '<S34>/NOT' incorporates:
   *  Constant: '<S94>/COOKING_MODE'
   *  Constant: '<S95>/COOKING_MODE'
   *  Logic: '<S91>/OR'
   *  RelationalOperator: '<S94>/Relational Operator2'
   *  RelationalOperator: '<S95>/Relational Operator2'
   */
  rtb_NOT_o = !((microwave_combined_P.COOKING_MODE_Value_m3 == rtb_Switch9) ||
                (microwave_combined_P.COOKING_MODE_Value_nw == rtb_Switch9));

  /* Logic: '<S92>/OR' incorporates:
   *  Constant: '<S96>/COOKING_MODE'
   *  Constant: '<S97>/COOKING_MODE'
   *  RelationalOperator: '<S96>/Relational Operator2'
   *  RelationalOperator: '<S97>/Relational Operator2'
   */
  rtb_OR_m = ((microwave_combined_P.COOKING_MODE_Value_cm ==
               microwave_combined_B.mode) ||
              (microwave_combined_P.COOKING_MODE_Value_mg ==
               microwave_combined_B.mode));

  /* Logic: '<S34>/NOT1' incorporates:
   *  Inport: '<Root>/DOOR_CLOSED'
   */
  rtb_NOT1 = !microwave_combined_U.DOOR_CLOSED;

  /* RelationalOperator: '<S93>/Relational Operator2' incorporates:
   *  Constant: '<S93>/COOKING_MODE'
   */
  rtb_RelationalOperator2_lz = (microwave_combined_P.COOKING_MODE_Value_l ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S34>/IMPLIES2' */
  microwave_combined_IMPLIES(rtb_NOT1, rtb_RelationalOperator2_lz,
    &microwave_combined_B.IMPLIES2_c);

  /* end of Outputs for SubSystem: '<S34>/IMPLIES2' */

  /* Outputs for atomic SubSystem: '<S34>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_OR_m, microwave_combined_B.IMPLIES2_c.OR,
    &microwave_combined_B.IMPLIES1_i);

  /* end of Outputs for SubSystem: '<S34>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S34>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_NOT_o, microwave_combined_B.IMPLIES1_i.OR,
    &microwave_combined_B.IMPLIES_dk);

  /* end of Outputs for SubSystem: '<S34>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Start_Running_With_Door_Open_Implies_Suspended' */

  /* Outport: '<Root>/R4' */
  microwave_combined_Y.R4 = microwave_combined_B.IMPLIES_dk.OR;

  /* UnitDelay: '<S6>/Unit _Delay_Steps_Remaining' */
  rtb_Sum1 = microwave_combined_DWork.Unit_Delay_Steps_Remaining_DSTA;

  /* Outputs for atomic SubSystem: '<S6>/Done_Cooking_Implies_Setup' */

  /* Logic: '<S27>/AND' incorporates:
   *  Constant: '<S27>/Zero'
   *  Constant: '<S55>/COOKING_MODE'
   *  Constant: '<S56>/COOKING_MODE'
   *  Logic: '<S53>/OR'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  RelationalOperator: '<S55>/Relational Operator2'
   *  RelationalOperator: '<S56>/Relational Operator2'
   */
  rtb_AND_o = (((microwave_combined_P.COOKING_MODE_Value_fm == rtb_Switch9) ||
                (microwave_combined_P.COOKING_MODE_Value_i == rtb_Switch9)) &&
               (microwave_combined_DWork.Unit_Delay_Steps_Remaining_DSTA <=
                microwave_combined_P.Zero_Value));

  /* RelationalOperator: '<S54>/Relational Operator2' incorporates:
   *  Constant: '<S54>/COOKING_MODE'
   */
  rtb_RelationalOperator2_ec = (microwave_combined_P.COOKING_MODE_Value_ff ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S27>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_AND_o, rtb_RelationalOperator2_ec,
    &microwave_combined_B.IMPLIES_j);

  /* end of Outputs for SubSystem: '<S27>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Done_Cooking_Implies_Setup' */

  /* Outport: '<Root>/R5' */
  microwave_combined_Y.R5 = microwave_combined_B.IMPLIES_j.OR;

  /* Outputs for atomic SubSystem: '<S6>/Door_Open_Or_Clear_Implies_Suspended' */

  /* Logic: '<S28>/AND' incorporates:
   *  Constant: '<S28>/Zero'
   *  Constant: '<S59>/COOKING_MODE'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  RelationalOperator: '<S59>/Relational Operator2'
   */
  rtb_AND_f = ((microwave_combined_P.COOKING_MODE_Value_n == rtb_Switch9) &&
               (rtb_Sum1 > microwave_combined_P.Zero_Value_c));

  /* Logic: '<S28>/OR' incorporates:
   *  Inport: '<Root>/DOOR_CLOSED'
   *  Logic: '<S28>/NOT'
   */
  rtb_OR_i = ((!microwave_combined_U.DOOR_CLOSED) || rtb_LogicalOperator1_f);

  /* RelationalOperator: '<S60>/Relational Operator2' incorporates:
   *  Constant: '<S60>/COOKING_MODE'
   */
  rtb_RelationalOperator2_mq = (microwave_combined_P.COOKING_MODE_Value_m ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S28>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_OR_i, rtb_RelationalOperator2_mq,
    &microwave_combined_B.IMPLIES1_n);

  /* end of Outputs for SubSystem: '<S28>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S28>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_AND_f, microwave_combined_B.IMPLIES1_n.OR,
    &microwave_combined_B.IMPLIES_a);

  /* end of Outputs for SubSystem: '<S28>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Door_Open_Or_Clear_Implies_Suspended' */

  /* Outport: '<Root>/R6' */
  microwave_combined_Y.R6 = microwave_combined_B.IMPLIES_a.OR;

  /* Outputs for atomic SubSystem: '<S6>/Clear_While_Suspended_Implies_Setup' */

  /* RelationalOperator: '<S45>/Relational Operator2' incorporates:
   *  Constant: '<S45>/COOKING_MODE'
   */
  rtb_RelationalOperator2_gf = (microwave_combined_P.COOKING_MODE_Value_j ==
    rtb_Switch9);

  /* RelationalOperator: '<S44>/Relational Operator2' incorporates:
   *  Constant: '<S44>/COOKING_MODE'
   */
  rtb_RelationalOperator2_nb = (microwave_combined_P.COOKING_MODE_Value_jf ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S24>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_LogicalOperator1_f, rtb_RelationalOperator2_nb,
    &microwave_combined_B.IMPLIES1_d);

  /* end of Outputs for SubSystem: '<S24>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S24>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_gf,
    microwave_combined_B.IMPLIES1_d.OR, &microwave_combined_B.IMPLIES_k);

  /* end of Outputs for SubSystem: '<S24>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Clear_While_Suspended_Implies_Setup' */

  /* Outport: '<Root>/R7' */
  microwave_combined_Y.R7 = microwave_combined_B.IMPLIES_k.OR;

  /* Outputs for atomic SubSystem: '<S6>/Start_While_Suspended_Implies_Cooking' */

  /* Logic: '<S35>/AND' incorporates:
   *  Inport: '<Root>/DOOR_CLOSED'
   *  Logic: '<S35>/NOT'
   */
  rtb_AND = (rtb_LogicalOperator1 && microwave_combined_U.DOOR_CLOSED &&
             (!rtb_LogicalOperator1_f));

  /* RelationalOperator: '<S101>/Relational Operator2' incorporates:
   *  Constant: '<S101>/COOKING_MODE'
   */
  rtb_RelationalOperator2_b = (microwave_combined_P.COOKING_MODE_Value_pd ==
    rtb_Switch9);

  /* RelationalOperator: '<S100>/Relational Operator2' incorporates:
   *  Constant: '<S100>/COOKING_MODE'
   */
  rtb_RelationalOperator2_l = (microwave_combined_P.COOKING_MODE_Value_bk ==
    microwave_combined_B.mode);

  /* Outputs for atomic SubSystem: '<S35>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_AND, rtb_RelationalOperator2_l,
    &microwave_combined_B.IMPLIES1_nm);

  /* end of Outputs for SubSystem: '<S35>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S35>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_b,
    microwave_combined_B.IMPLIES1_nm.OR, &microwave_combined_B.IMPLIES_e);

  /* end of Outputs for SubSystem: '<S35>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Start_While_Suspended_Implies_Cooking' */

  /* Outport: '<Root>/R8' */
  microwave_combined_Y.R8 = microwave_combined_B.IMPLIES_e.OR;

  /* Outputs for atomic SubSystem: '<S6>/Setup_Implies_Steps_Remaining_Equal_Steps_To_Cook' */

  /* RelationalOperator: '<S71>/Relational Operator2' incorporates:
   *  Constant: '<S71>/COOKING_MODE'
   */
  rtb_RelationalOperator2_kt = (microwave_combined_P.COOKING_MODE_Value_nq ==
    microwave_combined_B.mode);

  /* RelationalOperator: '<S31>/Relational Operator' */
  rtb_RelationalOperator_e = (microwave_combined_B.steps_remaining ==
    microwave_combined_B.Product);

  /* Outputs for atomic SubSystem: '<S31>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_kt,
    rtb_RelationalOperator_e, &microwave_combined_B.IMPLIES_d);

  /* end of Outputs for SubSystem: '<S31>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Setup_Implies_Steps_Remaining_Equal_Steps_To_Cook' */

  /* Outport: '<Root>/R9' */
  microwave_combined_Y.R9 = microwave_combined_B.IMPLIES_d.OR;

  /* Outputs for atomic SubSystem: '<S6>/Running_Implies_Steps_Remaining_Decrease' */

  /* Logic: '<S64>/OR' incorporates:
   *  Constant: '<S66>/COOKING_MODE'
   *  Constant: '<S67>/COOKING_MODE'
   *  RelationalOperator: '<S66>/Relational Operator2'
   *  RelationalOperator: '<S67>/Relational Operator2'
   */
  rtb_OR_f = ((microwave_combined_P.COOKING_MODE_Value_e == rtb_Switch9) ||
              (microwave_combined_P.COOKING_MODE_Value_b == rtb_Switch9));

  /* Logic: '<S65>/OR' incorporates:
   *  Constant: '<S68>/COOKING_MODE'
   *  Constant: '<S69>/COOKING_MODE'
   *  RelationalOperator: '<S68>/Relational Operator2'
   *  RelationalOperator: '<S69>/Relational Operator2'
   */
  rtb_OR_l = ((microwave_combined_P.COOKING_MODE_Value_a ==
               microwave_combined_B.mode) ||
              (microwave_combined_P.COOKING_MODE_Value_k ==
               microwave_combined_B.mode));

  /* RelationalOperator: '<S30>/Relational Operator' */
  rtb_RelationalOperator_a = (microwave_combined_B.steps_remaining <= rtb_Sum1);

  /* Outputs for atomic SubSystem: '<S30>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_OR_l, rtb_RelationalOperator_a,
    &microwave_combined_B.IMPLIES1_p);

  /* end of Outputs for SubSystem: '<S30>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S30>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_OR_f, microwave_combined_B.IMPLIES1_p.OR,
    &microwave_combined_B.IMPLIES_b);

  /* end of Outputs for SubSystem: '<S30>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Running_Implies_Steps_Remaining_Decrease' */

  /* Outport: '<Root>/R10' */
  microwave_combined_Y.R10 = microwave_combined_B.IMPLIES_b.OR;

  /* Outputs for atomic SubSystem: '<S6>/Cooking_Implies_Steps_Remaining_Decrement' */

  /* RelationalOperator: '<S50>/Relational Operator2' incorporates:
   *  Constant: '<S50>/COOKING_MODE'
   */
  rtb_RelationalOperator2_i5 = (microwave_combined_P.COOKING_MODE_Value_p ==
    rtb_Switch9);

  /* RelationalOperator: '<S51>/Relational Operator2' incorporates:
   *  Constant: '<S51>/COOKING_MODE'
   */
  rtb_RelationalOperator2_l5 = (microwave_combined_P.COOKING_MODE_Value_fw ==
    microwave_combined_B.mode);

  /* RelationalOperator: '<S26>/Relational Operator' incorporates:
   *  Constant: '<S26>/One'
   *  Sum: '<S26>/Add'
   */
  rtb_RelationalOperator_o = ((uint16_T)((uint32_T)
    microwave_combined_B.steps_remaining + (uint32_T)
    microwave_combined_P.One_Value) == rtb_Sum1);

  /* Outputs for atomic SubSystem: '<S26>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_l5,
    rtb_RelationalOperator_o, &microwave_combined_B.IMPLIES1_b);

  /* end of Outputs for SubSystem: '<S26>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S26>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_i5,
    microwave_combined_B.IMPLIES1_b.OR, &microwave_combined_B.IMPLIES_o);

  /* end of Outputs for SubSystem: '<S26>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Cooking_Implies_Steps_Remaining_Decrement' */

  /* Outport: '<Root>/R11' */
  microwave_combined_Y.R11 = microwave_combined_B.IMPLIES_o.OR;

  /* Outputs for atomic SubSystem: '<S6>/Suspended_Implies_Steps_Remaining_Stay_Same' */

  /* RelationalOperator: '<S104>/Relational Operator2' incorporates:
   *  Constant: '<S104>/COOKING_MODE'
   */
  rtb_RelationalOperator2_m = (microwave_combined_P.COOKING_MODE_Value_oe ==
    rtb_Switch9);

  /* RelationalOperator: '<S105>/Relational Operator2' incorporates:
   *  Constant: '<S105>/COOKING_MODE'
   */
  rtb_RelationalOperator2_h = (microwave_combined_P.COOKING_MODE_Value_m2 ==
    microwave_combined_B.mode);

  /* RelationalOperator: '<S36>/Relational Operator' */
  rtb_RelationalOperator = (microwave_combined_B.steps_remaining == rtb_Sum1);

  /* Outputs for atomic SubSystem: '<S36>/IMPLIES1' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_h, rtb_RelationalOperator,
    &microwave_combined_B.IMPLIES1_c);

  /* end of Outputs for SubSystem: '<S36>/IMPLIES1' */

  /* Outputs for atomic SubSystem: '<S36>/IMPLIES' */
  microwave_combined_IMPLIES(rtb_RelationalOperator2_m,
    microwave_combined_B.IMPLIES1_c.OR, &microwave_combined_B.IMPLIES_c);

  /* end of Outputs for SubSystem: '<S36>/IMPLIES' */

  /* end of Outputs for SubSystem: '<S6>/Suspended_Implies_Steps_Remaining_Stay_Same' */

  /* Outport: '<Root>/R12' */
  microwave_combined_Y.R12 = microwave_combined_B.IMPLIES_c.OR;

  /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
   *  Constant: '<S2>/COOKING_MODE'
   *  RelationalOperator: '<S2>/Relational Operator2'
   */
  microwave_combined_DWork.UnitDelay2_DSTATE =
    (microwave_combined_P.COOKING_MODE_Value_aj == microwave_combined_B.mode);

  /* Update for UnitDelay: '<S6>/Unit _Delay_Mode' */
  microwave_combined_DWork.Unit_Delay_Mode_DSTATE = microwave_combined_B.mode;

  /* Update for UnitDelay: '<S6>/Unit _Delay_Steps_Remaining' */
  microwave_combined_DWork.Unit_Delay_Steps_Remaining_DSTA =
    microwave_combined_B.steps_remaining;
}

/* Model initialize function */
void microwave_combined_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(microwave_combined_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &microwave_combined_B), 0,
                sizeof(BlockIO_microwave_combined));

  /* states (dwork) */
  (void) memset((void *)&microwave_combined_DWork, 0,
                sizeof(D_Work_microwave_combined));

  /* external inputs */
  (void) memset((void *)&microwave_combined_U, 0,
                sizeof(ExternalInputs_microwave_combin));

  /* external outputs */
  (void) memset((void *)&microwave_combined_Y, 0,
                sizeof(ExternalOutputs_microwave_combi));

  /* Start for enable SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Middle Digit' */
  microwave_combined_DWork.UnitDelayMiddleDigit_DSTATE =
    microwave_combined_P.UnitDelayMiddleDigit_X0;

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector0' */

  /* InitializeConditions for UnitDelay: '<S13>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_jm =
    microwave_combined_P.UnitDelay_X0_p;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector0' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector1' */

  /* InitializeConditions for UnitDelay: '<S14>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_a =
    microwave_combined_P.UnitDelay_X0_d;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector1' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector2' */

  /* InitializeConditions for UnitDelay: '<S15>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_c4 =
    microwave_combined_P.UnitDelay_X0_l;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector2' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector4' */

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_e =
    microwave_combined_P.UnitDelay_X0_e;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector4' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector3' */

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_g =
    microwave_combined_P.UnitDelay_X0_g;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector3' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector5' */

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_c =
    microwave_combined_P.UnitDelay_X0_n;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector5' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector7' */

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_p3 =
    microwave_combined_P.UnitDelay_X0_eo;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector7' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector6' */

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_nc =
    microwave_combined_P.UnitDelay_X0_f;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector6' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector8' */

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_j =
    microwave_combined_P.UnitDelay_X0_o;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector8' */

  /* InitializeConditions for atomic SubSystem: '<S11>/LE Detector9' */

  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_p =
    microwave_combined_P.UnitDelay_X0_a;

  /* end of InitializeConditions for SubSystem: '<S11>/LE Detector9' */

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Left Digit' */
  microwave_combined_DWork.UnitDelayLeftDigit_DSTATE =
    microwave_combined_P.UnitDelayLeftDigit_X0;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay Right Digit' */
  microwave_combined_DWork.UnitDelayRightDigit_DSTATE =
    microwave_combined_P.UnitDelayRightDigit_X0;

  /* VirtualOutportStart for Outport: '<S3>/STEPS_TO_COOK' */
  microwave_combined_B.Product = microwave_combined_P.STEPS_TO_COOK_Y0;

  /* end of Start for SubSystem: '<S1>/KEYPAD_PROCESSING' */

  /* InitializeConditions for atomic SubSystem: '<S1>/LE Detector12' */

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_f =
    microwave_combined_P.UnitDelay_X0_an;

  /* end of InitializeConditions for SubSystem: '<S1>/LE Detector12' */

  /* InitializeConditions for atomic SubSystem: '<S1>/LE Detector1' */

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_b =
    microwave_combined_P.UnitDelay_X0_b;

  /* end of InitializeConditions for SubSystem: '<S1>/LE Detector1' */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  microwave_combined_DWork.UnitDelay2_DSTATE =
    microwave_combined_P.UnitDelay2_X0;

  /* InitializeConditions for Stateflow: '<S6>/mode_logic' */
  microwave_combined_DWork.is_RUNNING = 0U;
  microwave_combined_DWork.is_active_c2_microwave_combined = 0U;
  microwave_combined_DWork.is_c2_microwave_combined = 0U;
  microwave_combined_B.mode = 0U;
  microwave_combined_B.steps_remaining = 0U;

  /* InitializeConditions for UnitDelay: '<S6>/Unit _Delay_Mode' */
  microwave_combined_DWork.Unit_Delay_Mode_DSTATE =
    microwave_combined_P.Unit_Delay_Mode_X0;

  /* InitializeConditions for atomic SubSystem: '<S6>/Init_Mode_Is_Setup' */

  /* InitializeConditions for UnitDelay: '<S29>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE_n =
    microwave_combined_P.UnitDelay_X0_i;

  /* end of InitializeConditions for SubSystem: '<S6>/Init_Mode_Is_Setup' */

  /* InitializeConditions for atomic SubSystem: '<S6>/Start_Running_With_Door_Closed_Implies_Cooking' */

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay' */
  microwave_combined_DWork.UnitDelay_DSTATE = microwave_combined_P.UnitDelay_X0;

  /* end of InitializeConditions for SubSystem: '<S6>/Start_Running_With_Door_Closed_Implies_Cooking' */

  /* InitializeConditions for UnitDelay: '<S6>/Unit _Delay_Steps_Remaining' */
  microwave_combined_DWork.Unit_Delay_Steps_Remaining_DSTA =
    microwave_combined_P.Unit_Delay_Steps_Remaining_X0;
}

/* Model terminate function */
void microwave_combined_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
