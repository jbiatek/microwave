/*
 * File: microwave_combined.h
 *
 * Real-Time Workshop code generated for Simulink model microwave_combined.
 *
 * Model version                        : 1.132
 * Real-Time Workshop file version      : 7.6  (R2010b)  03-Aug-2010
 * Real-Time Workshop file generated on : Thu Jan 30 09:26:06 2014
 * TLC version                          : 7.6 (Jul 13 2010)
 * C/C++ source code generated on       : Thu Jan 30 09:26:06 2014
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_microwave_combined_h_
#define RTW_HEADER_microwave_combined_h_
#ifndef microwave_combined_COMMON_INCLUDES_
# define microwave_combined_COMMON_INCLUDES_
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#endif                                 /* microwave_combined_COMMON_INCLUDES_ */

#include "microwave_combined_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S23>/IMPLIES' */
typedef struct {
  boolean_T OR;                        /* '<S38>/OR' */
} rtB_IMPLIES_microwave_combined;

/* Block signals (auto storage) */
typedef struct {
  uint16_T steps_remaining;            /* '<S6>/mode_logic' */
  uint16_T Product;                    /* '<S3>/Product' */
  uint8_T mode;                        /* '<S6>/mode_logic' */
  rtB_IMPLIES_microwave_combined IMPLIES1_c;/* '<S36>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_c;/* '<S36>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_nm;/* '<S35>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_e;/* '<S35>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES2_c;/* '<S34>/IMPLIES2' */
  rtB_IMPLIES_microwave_combined IMPLIES1_i;/* '<S34>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_dk;/* '<S34>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES2;/* '<S33>/IMPLIES2' */
  rtB_IMPLIES_microwave_combined IMPLIES1_m;/* '<S33>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_bx;/* '<S33>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_b3;/* '<S32>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_i;/* '<S32>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES_d;/* '<S31>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_p;/* '<S30>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_b;/* '<S30>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_n;/* '<S28>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_a;/* '<S28>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES_j;/* '<S27>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_b;/* '<S26>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_o;/* '<S26>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES_m;/* '<S25>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1_d;/* '<S24>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES_k;/* '<S24>/IMPLIES' */
  rtB_IMPLIES_microwave_combined IMPLIES1;/* '<S23>/IMPLIES1' */
  rtB_IMPLIES_microwave_combined IMPLIES;/* '<S23>/IMPLIES' */
} BlockIO_microwave_combined;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint16_T Unit_Delay_Steps_Remaining_DSTA;/* '<S6>/Unit _Delay_Steps_Remaining' */
  uint8_T Unit_Delay_Mode_DSTATE;      /* '<S6>/Unit _Delay_Mode' */
  uint8_T UnitDelay_DSTATE;            /* '<S33>/Unit Delay' */
  uint8_T UnitDelayMiddleDigit_DSTATE; /* '<S3>/Unit Delay Middle Digit' */
  uint8_T UnitDelayLeftDigit_DSTATE;   /* '<S3>/Unit Delay Left Digit' */
  uint8_T UnitDelayRightDigit_DSTATE;  /* '<S3>/Unit Delay Right Digit' */
  boolean_T UnitDelay2_DSTATE;         /* '<S1>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S29>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_f;        /* '<S5>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_b;        /* '<S4>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_p;        /* '<S22>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_j;        /* '<S21>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_p3;       /* '<S20>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_nc;       /* '<S19>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_c;        /* '<S18>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e;        /* '<S17>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_g;        /* '<S16>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_c4;       /* '<S15>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_a;        /* '<S14>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_jm;       /* '<S13>/Unit Delay' */
  uint8_T is_active_c2_microwave_combined;/* '<S6>/mode_logic' */
  uint8_T is_c2_microwave_combined;    /* '<S6>/mode_logic' */
  uint8_T is_RUNNING;                  /* '<S6>/mode_logic' */
  boolean_T KEYPAD_PROCESSING_MODE;    /* '<S1>/KEYPAD_PROCESSING' */
} D_Work_microwave_combined;

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
} ExternalInputs_microwave_combin;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T LEFT_DIGIT;                  /* '<Root>/LEFT_DIGIT' */
  uint8_T MIDDLE_DIGIT;                /* '<Root>/MIDDLE_DIGIT' */
  uint8_T RIGHT_DIGIT;                 /* '<Root>/RIGHT_DIGIT' */
  uint8_T MODE;                        /* '<Root>/MODE' */
  boolean_T S1;                        /* '<Root>/S1' */
  boolean_T S2;                        /* '<Root>/S2' */
  boolean_T R1;                        /* '<Root>/R1' */
  boolean_T R2;                        /* '<Root>/R2' */
  boolean_T R3;                        /* '<Root>/R3' */
  boolean_T R4;                        /* '<Root>/R4' */
  boolean_T R5;                        /* '<Root>/R5' */
  boolean_T R6;                        /* '<Root>/R6' */
  boolean_T R7;                        /* '<Root>/R7' */
  boolean_T R8;                        /* '<Root>/R8' */
  boolean_T R9;                        /* '<Root>/R9' */
  boolean_T R10;                       /* '<Root>/R10' */
  boolean_T R11;                       /* '<Root>/R11' */
  boolean_T R12;                       /* '<Root>/R12' */
} ExternalOutputs_microwave_combi;

/* Parameters (auto storage) */
struct Parameters_microwave_combined_ {
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
  uint16_T One_Value;                  /* Computed Parameter: One_Value
                                        * Referenced by: '<S26>/One'
                                        */
  uint16_T Zero_Value;                 /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S27>/Zero'
                                        */
  uint16_T Zero_Value_c;               /* Computed Parameter: Zero_Value_c
                                        * Referenced by: '<S28>/Zero'
                                        */
  uint16_T Zero_Value_l;               /* Computed Parameter: Zero_Value_l
                                        * Referenced by: '<S32>/Zero'
                                        */
  uint16_T STEPS_PER_SECOND_Value;     /* Computed Parameter: STEPS_PER_SECOND_Value
                                        * Referenced by: '<Root>/STEPS_PER_SECOND'
                                        */
  uint16_T SECONDS_IN_MINUTE_Value;    /* Computed Parameter: SECONDS_IN_MINUTE_Value
                                        * Referenced by: '<S7>/SECONDS_IN_MINUTE'
                                        */
  uint16_T TENS_OF_SECONDS_Value;      /* Computed Parameter: TENS_OF_SECONDS_Value
                                        * Referenced by: '<S7>/TENS_OF_SECONDS'
                                        */
  uint16_T Unit_Delay_Steps_Remaining_X0;/* Computed Parameter: Unit_Delay_Steps_Remaining_X0
                                          * Referenced by: '<S6>/Unit _Delay_Steps_Remaining'
                                          */
  uint8_T NO_PRESS3_Value;             /* Computed Parameter: NO_PRESS3_Value
                                        * Referenced by: '<S9>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value;             /* Computed Parameter: NO_PRESS1_Value
                                        * Referenced by: '<S9>/NO_PRESS1'
                                        */
  uint8_T NO_PRESS3_Value_n;           /* Computed Parameter: NO_PRESS3_Value_n
                                        * Referenced by: '<S10>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value_m;           /* Computed Parameter: NO_PRESS1_Value_m
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
  uint8_T NO_PRESS3_Value_d;           /* Computed Parameter: NO_PRESS3_Value_d
                                        * Referenced by: '<S12>/NO_PRESS3'
                                        */
  uint8_T NO_PRESS1_Value_mo;          /* Computed Parameter: NO_PRESS1_Value_mo
                                        * Referenced by: '<S12>/NO_PRESS1'
                                        */
  uint8_T UnitDelayMiddleDigit_X0;     /* Computed Parameter: UnitDelayMiddleDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Middle Digit'
                                        */
  uint8_T UnitDelayLeftDigit_X0;       /* Computed Parameter: UnitDelayLeftDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Left Digit'
                                        */
  uint8_T UnitDelayRightDigit_X0;      /* Computed Parameter: UnitDelayRightDigit_X0
                                        * Referenced by: '<S3>/Unit Delay Right Digit'
                                        */
  uint8_T COOKING_MODE_Value;          /* Computed Parameter: COOKING_MODE_Value
                                        * Referenced by: '<S40>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_h;        /* Computed Parameter: COOKING_MODE_Value_h
                                        * Referenced by: '<S41>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_j;        /* Computed Parameter: COOKING_MODE_Value_j
                                        * Referenced by: '<S45>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_jf;       /* Computed Parameter: COOKING_MODE_Value_jf
                                        * Referenced by: '<S44>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_f;        /* Computed Parameter: COOKING_MODE_Value_f
                                        * Referenced by: '<S47>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_p;        /* Computed Parameter: COOKING_MODE_Value_p
                                        * Referenced by: '<S50>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_fw;       /* Computed Parameter: COOKING_MODE_Value_fw
                                        * Referenced by: '<S51>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_fm;       /* Computed Parameter: COOKING_MODE_Value_fm
                                        * Referenced by: '<S55>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_i;        /* Computed Parameter: COOKING_MODE_Value_i
                                        * Referenced by: '<S56>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_ff;       /* Computed Parameter: COOKING_MODE_Value_ff
                                        * Referenced by: '<S54>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_n;        /* Computed Parameter: COOKING_MODE_Value_n
                                        * Referenced by: '<S59>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_m;        /* Computed Parameter: COOKING_MODE_Value_m
                                        * Referenced by: '<S60>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_ny;       /* Computed Parameter: COOKING_MODE_Value_ny
                                        * Referenced by: '<S61>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_e;        /* Computed Parameter: COOKING_MODE_Value_e
                                        * Referenced by: '<S66>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_b;        /* Computed Parameter: COOKING_MODE_Value_b
                                        * Referenced by: '<S67>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_a;        /* Computed Parameter: COOKING_MODE_Value_a
                                        * Referenced by: '<S68>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_k;        /* Computed Parameter: COOKING_MODE_Value_k
                                        * Referenced by: '<S69>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_nq;       /* Computed Parameter: COOKING_MODE_Value_nq
                                        * Referenced by: '<S71>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_c;        /* Computed Parameter: COOKING_MODE_Value_c
                                        * Referenced by: '<S75>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_fp;       /* Computed Parameter: COOKING_MODE_Value_fp
                                        * Referenced by: '<S76>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_nqc;      /* Computed Parameter: COOKING_MODE_Value_nqc
                                        * Referenced by: '<S77>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_ke;       /* Computed Parameter: COOKING_MODE_Value_ke
                                        * Referenced by: '<S84>/COOKING_MODE'
                                        */
  uint8_T UnitDelay_X0;                /* Computed Parameter: UnitDelay_X0
                                        * Referenced by: '<S33>/Unit Delay'
                                        */
  uint8_T COOKING_MODE_Value_o;        /* Computed Parameter: COOKING_MODE_Value_o
                                        * Referenced by: '<S85>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_ev;       /* Computed Parameter: COOKING_MODE_Value_ev
                                        * Referenced by: '<S86>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_on;       /* Computed Parameter: COOKING_MODE_Value_on
                                        * Referenced by: '<S87>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_pk;       /* Computed Parameter: COOKING_MODE_Value_pk
                                        * Referenced by: '<S81>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_m3;       /* Computed Parameter: COOKING_MODE_Value_m3
                                        * Referenced by: '<S94>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_nw;       /* Computed Parameter: COOKING_MODE_Value_nw
                                        * Referenced by: '<S95>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_cm;       /* Computed Parameter: COOKING_MODE_Value_cm
                                        * Referenced by: '<S96>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_mg;       /* Computed Parameter: COOKING_MODE_Value_mg
                                        * Referenced by: '<S97>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_l;        /* Computed Parameter: COOKING_MODE_Value_l
                                        * Referenced by: '<S93>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_pd;       /* Computed Parameter: COOKING_MODE_Value_pd
                                        * Referenced by: '<S101>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_bk;       /* Computed Parameter: COOKING_MODE_Value_bk
                                        * Referenced by: '<S100>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_oe;       /* Computed Parameter: COOKING_MODE_Value_oe
                                        * Referenced by: '<S104>/COOKING_MODE'
                                        */
  uint8_T COOKING_MODE_Value_m2;       /* Computed Parameter: COOKING_MODE_Value_m2
                                        * Referenced by: '<S105>/COOKING_MODE'
                                        */
  uint8_T Unit_Delay_Mode_X0;          /* Computed Parameter: Unit_Delay_Mode_X0
                                        * Referenced by: '<S6>/Unit _Delay_Mode'
                                        */
  uint8_T COOKING_MODE_Value_aj;       /* Computed Parameter: COOKING_MODE_Value_aj
                                        * Referenced by: '<S2>/COOKING_MODE'
                                        */
  boolean_T UnitDelay_X0_p;            /* Expression: false
                                        * Referenced by: '<S13>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_d;            /* Expression: false
                                        * Referenced by: '<S14>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_l;            /* Expression: false
                                        * Referenced by: '<S15>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_g;            /* Expression: false
                                        * Referenced by: '<S16>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_e;            /* Expression: false
                                        * Referenced by: '<S17>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_n;            /* Expression: false
                                        * Referenced by: '<S18>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_f;            /* Expression: false
                                        * Referenced by: '<S19>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_eo;           /* Expression: false
                                        * Referenced by: '<S20>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_o;            /* Expression: false
                                        * Referenced by: '<S21>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_a;            /* Expression: false
                                        * Referenced by: '<S22>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_b;            /* Expression: false
                                        * Referenced by: '<S4>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_an;           /* Expression: false
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  boolean_T UnitDelay_X0_i;            /* Computed Parameter: UnitDelay_X0_i
                                        * Referenced by: '<S29>/Unit Delay'
                                        */
  boolean_T True_Value;                /* Computed Parameter: True_Value
                                        * Referenced by: '<S29>/True'
                                        */
  boolean_T UnitDelay2_X0;             /* Expression: true
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_microwave_combined {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern Parameters_microwave_combined microwave_combined_P;

/* Block signals (auto storage) */
extern BlockIO_microwave_combined microwave_combined_B;

/* Block states (auto storage) */
extern D_Work_microwave_combined microwave_combined_DWork;

/* External inputs (root inport signals with auto storage) */
extern ExternalInputs_microwave_combin microwave_combined_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExternalOutputs_microwave_combi microwave_combined_Y;

/* Model entry point functions */
extern void microwave_combined_initialize(boolean_T firstTime);
extern void microwave_combined_step(void);
extern void microwave_combined_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_microwave_combined *microwave_combined_M;

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
 * '<Root>' : microwave_combined
 * '<S1>'   : microwave_combined/microwave
 * '<S2>'   : microwave_combined/microwave/IS_MODE_SETUP1
 * '<S3>'   : microwave_combined/microwave/KEYPAD_PROCESSING
 * '<S4>'   : microwave_combined/microwave/LE Detector1
 * '<S5>'   : microwave_combined/microwave/LE Detector12
 * '<S6>'   : microwave_combined/microwave/Subsystem
 * '<S7>'   : microwave_combined/microwave/TIME_ON_DISPLAY
 * '<S8>'   : microwave_combined/microwave/KEYPAD_PROCESSING/DIGITS_TO_TIME
 * '<S9>'   : microwave_combined/microwave/KEYPAD_PROCESSING/LEFT_DIGIT
 * '<S10>'  : microwave_combined/microwave/KEYPAD_PROCESSING/MIDDLE_DIGIT
 * '<S11>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS
 * '<S12>'  : microwave_combined/microwave/KEYPAD_PROCESSING/RIGHT_DIGIT
 * '<S13>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector0
 * '<S14>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector1
 * '<S15>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector2
 * '<S16>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector3
 * '<S17>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector4
 * '<S18>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector5
 * '<S19>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector6
 * '<S20>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector7
 * '<S21>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector8
 * '<S22>'  : microwave_combined/microwave/KEYPAD_PROCESSING/PROCESS_KEYPAD_INPUTS/LE Detector9
 * '<S23>'  : microwave_combined/microwave/Subsystem/Clear_Implies_Not_Cooking
 * '<S24>'  : microwave_combined/microwave/Subsystem/Clear_While_Suspended_Implies_Setup
 * '<S25>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Door_Closed
 * '<S26>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Steps_Remaining_Decrement
 * '<S27>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup
 * '<S28>'  : microwave_combined/microwave/Subsystem/Door_Open_Or_Clear_Implies_Suspended
 * '<S29>'  : microwave_combined/microwave/Subsystem/Init_Mode_Is_Setup
 * '<S30>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease
 * '<S31>'  : microwave_combined/microwave/Subsystem/Setup_Implies_Steps_Remaining_Equal_Steps_To_Cook
 * '<S32>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running
 * '<S33>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking
 * '<S34>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended
 * '<S35>'  : microwave_combined/microwave/Subsystem/Start_While_Suspended_Implies_Cooking
 * '<S36>'  : microwave_combined/microwave/Subsystem/Suspended_Implies_Steps_Remaining_Stay_Same
 * '<S37>'  : microwave_combined/microwave/Subsystem/mode_logic
 * '<S38>'  : microwave_combined/microwave/Subsystem/Clear_Implies_Not_Cooking/IMPLIES
 * '<S39>'  : microwave_combined/microwave/Subsystem/Clear_Implies_Not_Cooking/IMPLIES1
 * '<S40>'  : microwave_combined/microwave/Subsystem/Clear_Implies_Not_Cooking/IS_MODE_COOKING
 * '<S41>'  : microwave_combined/microwave/Subsystem/Clear_Implies_Not_Cooking/IS_MODE_COOKING1
 * '<S42>'  : microwave_combined/microwave/Subsystem/Clear_While_Suspended_Implies_Setup/IMPLIES
 * '<S43>'  : microwave_combined/microwave/Subsystem/Clear_While_Suspended_Implies_Setup/IMPLIES1
 * '<S44>'  : microwave_combined/microwave/Subsystem/Clear_While_Suspended_Implies_Setup/IS_MODE_SETUP
 * '<S45>'  : microwave_combined/microwave/Subsystem/Clear_While_Suspended_Implies_Setup/IS_MODE_SUSPENDED
 * '<S46>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Door_Closed/IMPLIES
 * '<S47>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Door_Closed/IS_MODE_COOKING
 * '<S48>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Steps_Remaining_Decrement/IMPLIES
 * '<S49>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Steps_Remaining_Decrement/IMPLIES1
 * '<S50>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Steps_Remaining_Decrement/IS_MODE_COOKING
 * '<S51>'  : microwave_combined/microwave/Subsystem/Cooking_Implies_Steps_Remaining_Decrement/IS_MODE_COOKING1
 * '<S52>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup/IMPLIES
 * '<S53>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup/IS_MODE_RUNNING
 * '<S54>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup/IS_MODE_SETUP
 * '<S55>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup/IS_MODE_RUNNING/IS_MODE_COOKING
 * '<S56>'  : microwave_combined/microwave/Subsystem/Done_Cooking_Implies_Setup/IS_MODE_RUNNING/IS_MODE_SUSPENDED
 * '<S57>'  : microwave_combined/microwave/Subsystem/Door_Open_Or_Clear_Implies_Suspended/IMPLIES
 * '<S58>'  : microwave_combined/microwave/Subsystem/Door_Open_Or_Clear_Implies_Suspended/IMPLIES1
 * '<S59>'  : microwave_combined/microwave/Subsystem/Door_Open_Or_Clear_Implies_Suspended/IS_MODE_COOKING
 * '<S60>'  : microwave_combined/microwave/Subsystem/Door_Open_Or_Clear_Implies_Suspended/IS_MODE_SUSPENDED
 * '<S61>'  : microwave_combined/microwave/Subsystem/Init_Mode_Is_Setup/IS_MODE_SETUP
 * '<S62>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IMPLIES
 * '<S63>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IMPLIES1
 * '<S64>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING
 * '<S65>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING1
 * '<S66>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING/IS_MODE_COOKING
 * '<S67>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING/IS_MODE_SUSPENDED
 * '<S68>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING1/IS_MODE_COOKING
 * '<S69>'  : microwave_combined/microwave/Subsystem/Running_Implies_Steps_Remaining_Decrease/IS_MODE_RUNNING1/IS_MODE_SUSPENDED
 * '<S70>'  : microwave_combined/microwave/Subsystem/Setup_Implies_Steps_Remaining_Equal_Steps_To_Cook/IMPLIES
 * '<S71>'  : microwave_combined/microwave/Subsystem/Setup_Implies_Steps_Remaining_Equal_Steps_To_Cook/IS_MODE_SETUP
 * '<S72>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IMPLIES
 * '<S73>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IMPLIES1
 * '<S74>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IS_MODE_RUNNING
 * '<S75>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IS_MODE_SETUP
 * '<S76>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IS_MODE_RUNNING/IS_MODE_COOKING
 * '<S77>'  : microwave_combined/microwave/Subsystem/Start_Implies_Running/IS_MODE_RUNNING/IS_MODE_SUSPENDED
 * '<S78>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IMPLIES
 * '<S79>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IMPLIES1
 * '<S80>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IMPLIES2
 * '<S81>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_COOKING
 * '<S82>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING1
 * '<S83>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING2
 * '<S84>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING1/IS_MODE_COOKING
 * '<S85>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING1/IS_MODE_SUSPENDED
 * '<S86>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING2/IS_MODE_COOKING
 * '<S87>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Closed_Implies_Cooking/IS_MODE_RUNNING2/IS_MODE_SUSPENDED
 * '<S88>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IMPLIES
 * '<S89>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IMPLIES1
 * '<S90>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IMPLIES2
 * '<S91>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING1
 * '<S92>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING2
 * '<S93>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_SUSPENDED
 * '<S94>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING1/IS_MODE_COOKING
 * '<S95>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING1/IS_MODE_SUSPENDED
 * '<S96>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING2/IS_MODE_COOKING
 * '<S97>'  : microwave_combined/microwave/Subsystem/Start_Running_With_Door_Open_Implies_Suspended/IS_MODE_RUNNING2/IS_MODE_SUSPENDED
 * '<S98>'  : microwave_combined/microwave/Subsystem/Start_While_Suspended_Implies_Cooking/IMPLIES
 * '<S99>'  : microwave_combined/microwave/Subsystem/Start_While_Suspended_Implies_Cooking/IMPLIES1
 * '<S100>' : microwave_combined/microwave/Subsystem/Start_While_Suspended_Implies_Cooking/IS_MODE_COOKING
 * '<S101>' : microwave_combined/microwave/Subsystem/Start_While_Suspended_Implies_Cooking/IS_MODE_SUSPENDED
 * '<S102>' : microwave_combined/microwave/Subsystem/Suspended_Implies_Steps_Remaining_Stay_Same/IMPLIES
 * '<S103>' : microwave_combined/microwave/Subsystem/Suspended_Implies_Steps_Remaining_Stay_Same/IMPLIES1
 * '<S104>' : microwave_combined/microwave/Subsystem/Suspended_Implies_Steps_Remaining_Stay_Same/IS_MODE_SUSPENDED
 * '<S105>' : microwave_combined/microwave/Subsystem/Suspended_Implies_Steps_Remaining_Stay_Same/IS_MODE_SUSPENDED1
 * '<S106>' : microwave_combined/microwave/TIME_ON_DISPLAY/SECONDS_TO_MINUTES
 * '<S107>' : microwave_combined/microwave/TIME_ON_DISPLAY/SECONDS_TO_TENS
 * '<S108>' : microwave_combined/microwave/TIME_ON_DISPLAY/STEPS_TO_SECONDS
 */
#endif                                 /* RTW_HEADER_microwave_combined_h_ */

/*
 * File trailer for Real-Time Workshop generated code.
 *
 * [EOF]
 */
