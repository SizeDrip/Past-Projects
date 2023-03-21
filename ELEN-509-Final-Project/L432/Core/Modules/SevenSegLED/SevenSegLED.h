// SevenSegLED.h


#ifndef _SEVEN_SEG_LED_H_
#define _SEVEN_SEG_LED_H_

//=====================================
// Includes
#include "main.h"
#include <stdint.h>


// typedefs, structs, and enums
typedef enum _dp_status_ {
  NoDp,
  LeftDp,
  RightDp,
  BothDp
} dp_status_t;

typedef enum _display_blank_ {
  NotBlank,
  Blank
} display_blank_t;

// defines


// private modular variables


// public variables


// public function prototypes
void InitSevenSegDisplay(void);
void ParseToDigits(uint8_t _value, dp_status_t _dpStatus, display_blank_t _blank);
void UpdateDisplay(void);



#endif