// Scheduler.h"
// Version 1.02




// ==========================================
// Place these macros in the xx_it.c file
// in the following sections...


// in the Private Variables (PV) section: 
#define SCHEDULER_VAR \
uint16_t ten_mS_Counter = TEN_mS_SEED;\
uint8_t ten_mS_Flag = false;\
\
uint16_t twentyfive_mS_Counter = TWENTYFIVE_mS_SEED;\
uint8_t twentyfive_mS_Flag = false;\
\
uint16_t hundred_mS_Counter = ONEHUNDRED_mS_SEED;\
uint8_t hundred_mS_Flag = false;\
\
uint16_t one_S_Counter = ONE_S_SEED;\
uint8_t one_S_Flag = false;\



// in the SysTick Handler "IRQn 1" section: 
#define SCHEDULER_CODE \
  ten_mS_Counter--;\
  if (ten_mS_Counter == 0) {\
    ten_mS_Flag = true;\
    ten_mS_Counter = TEN_mS_SEED;\
  }\
\
  twentyfive_mS_Counter--;\
  if (twentyfive_mS_Counter == 0) {\
    twentyfive_mS_Flag = true;\
    twentyfive_mS_Counter = TWENTYFIVE_mS_SEED;\
  }\
\
  hundred_mS_Counter--;\
  if (hundred_mS_Counter == 0) {\
    hundred_mS_Flag = true;\
    hundred_mS_Counter = ONEHUNDRED_mS_SEED;\
  }\
\
  one_S_Counter--;\
  if (one_S_Counter == 0) {\
    one_S_Flag = true;\
    one_S_Counter = ONE_S_SEED;\
  }\


// ======================================
// add to xxx_it.c (not as comments)

// in the Private Define (PD) section:
    
//// scheduler stuff
//#define TEN_mS_SEED         10
//#define TWENTYFIVE_mS_SEED  25
//#define ONEHUNDRED_mS_SEED  100
//#define ONE_S_SEED          1000
    
    
// ======================================
// add to main.c (not as comments)

// in the Private Variable (PV) section:

//// scheduler stuff
//extern uint8_t ten_mS_Flag;
//extern uint8_t twentyfive_mS_Flag;
//extern uint8_t hundred_mS_Flag;
//extern uint8_t one_S_Flag;

// In the main loop section (just before "USER CODE END WHILE"

//    //---------------------------------
//    // 10mS Tasks 
//    if (ten_mS_Flag) {
//      ten_mS_Flag = false;
//
//    }  // end of 10mS Tasks
//    //---------------------------------
//
//    
//    //---------------------------------
//    // 25mS Tasks 
//    if (twentyfive_mS_Flag) {
//      twentyfive_mS_Flag = false;
//
//    }  // end of 25mS Tasks
//    //---------------------------------
//
//    
//    //---------------------------------
//    // 100mS Tasks 
//    if (hundred_mS_Flag) {
//      hundred_mS_Flag = false;
//
//    }  // end of 100mS Tasks
//    //---------------------------------
//
//    
//    //---------------------------------
//    // 1 Sec Tasks 
//    if (one_S_Flag) {
//      one_S_Flag = false;
//      
//    } // end of 1Sec Tasks
//    //---------------------------------
//
//    
//    //---------------------------------
//    // Every time through the loop
//    
//    // end Every time through the loop
//    //---------------------------------
//    
    


#define SCHEDULER_EXTERN



