/*
 * microwave.h
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
#ifndef RTW_HEADER_microwave_h_
#define RTW_HEADER_microwave_h_
#ifndef microwave_COMMON_INCLUDES_
# define microwave_COMMON_INCLUDES_
#include <float.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#endif                                 /* microwave_COMMON_INCLUDES_ */

#include "microwave_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  uint16_T steps_remaining;            /* '<S1>/mode_logic' */
  uint16_T Product;                    /* '<S3>/Product' */
} B_microwave_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T UnitDelayMiddleDigit_DSTATE; /* '<S3>/Unit Delay Middle Digit' */
  uint8_T UnitDelayLeftDigit_DSTATE;   /* '<S3>/Unit Delay Left Digit' */
  uint8_T UnitDelayRightDigit_DSTATE;  /* '<S3>/Unit Delay Right Digit' */
  boolean_T UnitDelay2_DSTATE;         /* '<S1>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE;          /* '<S5>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_i;        /* '<S4>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_d;        /* '<S22>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_f;        /* '<S21>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_j;        /* '<S20>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_m;        /* '<S19>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e;        /* '<S18>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S17>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_is;       /* '<S16>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_k;        /* '<S15>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_p;        /* '<S14>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_o;        /* '<S13>/Unit Delay' */
  uint8_T is_active_c1_microwave;      /* '<S1>/mode_logic' */
  uint8_T is_c1_microwave;             /* '<S1>/mode_logic' */
  uint8_T is_RUNNING;                  /* '<S1>/mode_logic' */
  boolean_T KEYPAD_PROCESSING_MODE;    /* '<S1>/KEYPAD_PROCESSING' */
} DW_microwave_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T KP_START;                  /* '<Root>/KP_START' */
  boolean_T KP_CLEAR;                  /* '<Root>/KP_CLEAR' */
  boolean_T KP_0;                      /* '<Root>/KP_0' */
  boolean_T KP_1;                      /* '<Root>/KP_1' */
  boolean_T KP_2;                      /* '<Root>/KP_2' */
  boolean_T KP_3;                      /* '<Root>/KP_3' */
  boolean_T KP_4;                      /* '<Root>/KP_4' */
  boolean_T KP_5;                      /* '<Root>/KP_5' */
  boolean_T KP_6;                      /* '<Root>/KP_6' */
  boolean_T KP_7;                      /* '<Root>/KP_7' */
  boolean_T KP_8;                      /* '<Root>/KP_8' */
  boolean_T KP_9;                      /* '<Root>/KP_9' */
  boolean_T DOOR_CLOSED;               /* '<Root>/DOOR_CLOSED' */
} ExtU_microwave_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T LEFT_DIGIT;                  /* '<Root>/LEFT_DIGIT' */
  uint8_T MIDDLE_DIGIT;                /* '<Root>/MIDDLE_DIGIT' */
  uint8_T RIGHT_DIGIT;                 /* '<Root>/RIGHT_DIGIT' */
  uint8_T MODE;                        /* '<Root>/MODE' */
} ExtY_microwave_T;

/* Parameters (auto storage) */
struct P_microwave_T_ {
  uint16_T STEPS_TO_COOK_Y0;           /* Computed Parameter: STEPS_TO_COOK_Y0
                                        * Referenced by: '<S3>/STEPS_TO_COOK'
                                        */
  uint16_T MINUTES_PLACE_Value;        /* Computed Parameter: MINUTES_PLACE_Value
                                        * Referenced by: '<S8>/MINUTES_PLACE'
                                        */
  uint16_T ONES_PLACE_Value;           /* Computed Parameter: ONES_PLACE_Value
                                        * Referenced by: '<S8>/ONES_PLACE'
                                        */
  uint16_T TENS_PLACE_Value;           /* Computed Parameter: TENS_PLACE_Value
                                        * Referenced by: '<S8>/TENS_PLACE'
                                        */
  uint16_T STEPS_PER_SECOND_Value;     /* Computed Parameter: STEPS_PER_SECOND_Value
                                        * Referenced by: '<Root>/STEPS_PER_SECOND'
                                        */
  uint16_T SECONDS_IN_MINUTE_Value;    /* Computed Parameter: SECONDS_IN_MINUTE_Value
                                        * Referenced by: '<S6>/SECONDS_IN_MINUTE'
                                        */
  uint16_T TENS_OF_SECONDS_Value;      /* Computed Parameter: TENS_OF_SECONDS_Value
                                        * Referenced by: '<S6>/TENS_OF_SECONDS'
                                        */
  uint8_T NO_PRESS3_Value;             /* Computed Parameter: NO_PRESS3_Value
                                        * Referenced by: '<S9>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value;             /* Computed Parameter: NO_PRESS1_Value
                                        * Referenced by: '<S9>/NO_PRESS1'
                                        */
  uint8_T NO_PRESS3_Value_f;           /* Computed Parameter: NO_PRESS3_Value_f
                                        * Referenced by: '<S10>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value_c;           /* Computed Parameter: NO_PRESS1_Value_c
                                        * Referenced by: '<S10>/NO_PRESS1'
                                        */
  uint8_T NO_PRESS_Value;              /* Computed Parameter: NO_PRESS_Value
                                        * Referenced by: '<S11>/NO_PRESS'
                                        */
  uint8_T NINE_PRESSED_Value;          /* Computed Parameter: NINE_PRESSED_Value
                                        * Referenced by: '<S11>/NINE_PRESSED'
                                        */
  uint8_T EIGHT_PRESSED_Value;         /* Computed Parameter: EIGHT_PRESSED_Value
                                        * Referenced by: '<S11>/EIGHT_PRESSED'
                                        */
  uint8_T SEVEN_PRESSED_Value;         /* Computed Parameter: SEVEN_PRESSED_Value
                                        * Referenced by: '<S11>/SEVEN_PRESSED'
                                        */
  uint8_T SIX_PRESSED_Value;           /* Computed Parameter: SIX_PRESSED_Value
                                        * Referenced by: '<S11>/SIX_PRESSED'
                                        */
  uint8_T FIVE_PRESSED_Value;          /* Computed Parameter: FIVE_PRESSED_Value
                                        * Referenced by: '<S11>/FIVE_PRESSED'
                                        */
  uint8_T FOUR_PRESSED_Value;          /* Computed Parameter: FOUR_PRESSED_Value
                                        * Referenced by: '<S11>/FOUR_PRESSED'
                                        */
  uint8_T THREE_PRESSED_Value;         /* Computed Parameter: THREE_PRESSED_Value
                                        * Referenced by: '<S11>/THREE_PRESSED'
                                        */
  uint8_T TWO_PRESSED_Value;           /* Computed Parameter: TWO_PRESSED_Value
                                        * Referenced by: '<S11>/TWO_PRESSED'
                                        */
  uint8_T ONE_PRESSED_Value;           /* Computed Parameter: ONE_PRESSED_Value
                                        * Referenced by: '<S11>/ONE_PRESSED'
                                        */
  uint8_T ZERO_PRESSED_Value;          /* Computed Parameter: ZERO_PRESSED_Value
                                        * Referenced by: '<S11>/ZERO_PRESSED'
                                        */
  uint8_T NO_PRESS3_Value_n;           /* Computed Parameter: NO_PRESS3_Value_n
                                        * Referenced by: '<S12>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value_i;           /* Computed Parameter: NO_PRESS1_Value_i
                                        * Referenced by: '<S12>/NO_PRESS1'
                                        */
  uint8_T UnitDelayMiddleDigit_InitialCon;/* Computed Parameter: UnitDelayMiddleDigit_InitialCon
                                           * Referenced by: '<S3>/Unit Delay Middle Digit'
                                           */
  uint8_T UnitDelayLeftDigit_InitialCondi;/* Computed Parameter: UnitDelayLeftDigit_InitialCondi
                                           * Referenced by: '<S3>/Unit Delay Left Digit'
                                           */
  uint8_T UnitDelayRightDigit_InitialCond;/* Computed Parameter: UnitDelayRightDigit_InitialCond
                                           * Referenced by: '<S3>/Unit Delay Right Digit'
                                           */
  uint8_T COOKING_MODE_Value;          /* Computed Parameter: COOKING_MODE_Value
                                        * Referenced by: '<S2>/COOKING_MODE'
                                        */
  boolean_T UnitDelay_InitialCondition;/* Expression: false
                                        * Referenced by: '<S13>/Unit Delay'
                                        */
  boolean_T UnitDelay_InitialCondition_c;/* Expression: false
                                          * Referenced by: '<S14>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_ck;/* Expression: false
                                           * Referenced by: '<S15>/Unit Delay'
                                           */
  boolean_T UnitDelay_InitialCondition_n;/* Expression: false
                                          * Referenced by: '<S16>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_l;/* Expression: false
                                          * Referenced by: '<S17>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_n3;/* Expression: false
                                           * Referenced by: '<S18>/Unit Delay'
                                           */
  boolean_T UnitDelay_InitialCondition_lr;/* Expression: false
                                           * Referenced by: '<S19>/Unit Delay'
                                           */
  boolean_T UnitDelay_InitialCondition_p;/* Expression: false
                                          * Referenced by: '<S20>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_f;/* Expression: false
                                          * Referenced by: '<S21>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_fu;/* Expression: false
                                           * Referenced by: '<S22>/Unit Delay'
                                           */
  boolean_T UnitDelay_InitialCondition_g;/* Expression: false
                                          * Referenced by: '<S4>/Unit Delay'
                                          */
  boolean_T UnitDelay_InitialCondition_d;/* Expression: false
                                          * Referenced by: '<S5>/Unit Delay'
                                          */
  boolean_T UnitDelay2_InitialCondition;/* Expression: true
                                         * Referenced by: '<S1>/Unit Delay2'
                                         */
};

/* Real-time Model Data Structure */
struct tag_RTM_microwave_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_microwave_T microwave_P;

/* Block signals (auto storage) */
extern B_microwave_T microwave_B;

/* Block states (auto storage) */
extern DW_microwave_T microwave_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_microwave_T microwave_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_microwave_T microwave_Y;

/* Model entry point functions */
extern void microwave_initialize(void);
extern void microwave_step(void);
extern void microwave_terminate(void);

/* Real-time Model object */
extern RT_MODEL_microwave_T *const microwave_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'microwave'
 * '<S1>'   : 'microwave/microwave_inner'
 * '<S2>'   : 'microwave/microwave_inner/IS_MODE_SETUP1'
 * '<S3>'   : 'microwave/microwave_inner/KEYPAD_PROCESSING'
 * '<S4>'   : 'microwave/microwave_inner/LE Detector1'
 * '<S5>'   : 'microwave/microwave_inner/LE Detector12'
 * '<S6>'   : 'microwave/microwave_inner/TIME_ON_DISPLAY'
 * '<S7>'   : 'microwave/microwave_inner/mode_logic'
 * '<S8>'   : 'microwave/microwave_inner/KEYPAD_PROCESSING/DIGITS_TO_TIME'
 * '<S9>'   : 'microwave/microwave_inner/KEYPAD_PROCESSING/LEFT_DIGIT'
 * '<S10>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/MIDDLE_DIGIT'
 * '<S11>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS'
 * '<S12>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/RIGHT_DIGIT'
 * '<S13>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector0'
 * '<S14>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector1'
 * '<S15>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector2'
 * '<S16>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector3'
 * '<S17>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector4'
 * '<S18>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector5'
 * '<S19>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector6'
 * '<S20>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector7'
 * '<S21>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector8'
 * '<S22>'  : 'microwave/microwave_inner/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector9'
 * '<S23>'  : 'microwave/microwave_inner/TIME_ON_DISPLAY/SECONDS_TO_MINUTES'
 * '<S24>'  : 'microwave/microwave_inner/TIME_ON_DISPLAY/SECONDS_TO_TENS'
 * '<S25>'  : 'microwave/microwave_inner/TIME_ON_DISPLAY/STEPS_TO_SECONDS'
 */
#endif                                 /* RTW_HEADER_microwave_h_ */
