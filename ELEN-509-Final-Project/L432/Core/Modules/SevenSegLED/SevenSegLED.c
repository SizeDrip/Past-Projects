// SevenSegLED.c

// includes
#include "SevenSegLED.h"


// modular variables
uint8_t segmentNumber = 0;
uint8_t digitToggle = 0;

uint8_t digit1Value = 0;
uint8_t digit2Value = 0;
uint8_t digit1Segments = 0;
uint8_t digit2Segments = 0;
const uint8_t Num_2_Seg[16] = {0xFC, 0x60, 0xDA, 0xF2, 0x66, 0xB6, 0xBE, 0xE0, 0xFE, 0xF6, 0xEE, 0x3E, 0x9C, 0x7A, 0x9E, 0x8E};


// external variables


//***************************
// Code Start

void InitSevenSegDisplay(void)
{
  // reset digit drives...
  HAL_GPIO_WritePin(Digit_1, Digit_OFF);
  HAL_GPIO_WritePin(Digit_2, Digit_OFF);

  // ...and segment drives
  HAL_GPIO_WritePin(Seg_A, Seg_OFF);
  HAL_GPIO_WritePin(Seg_B, Seg_OFF);
  HAL_GPIO_WritePin(Seg_C, Seg_OFF);
  HAL_GPIO_WritePin(Seg_D, Seg_OFF);
  HAL_GPIO_WritePin(Seg_E, Seg_OFF);
  HAL_GPIO_WritePin(Seg_F, Seg_OFF);
  HAL_GPIO_WritePin(Seg_G, Seg_OFF);
  HAL_GPIO_WritePin(Seg_DP, Seg_OFF);
}


void ParseToDigits(uint8_t _value, dp_status_t _dpStatus, display_blank_t _blank)
{
  if (_blank == NotBlank) {
    digit2Value = _value % 16;
    digit1Value = _value / 16;
    
    digit1Segments = Num_2_Seg[digit1Value];
    digit2Segments = Num_2_Seg[digit2Value];
  }
  else {
    digit1Segments = 0x00;
    digit2Segments = 0x00;
  }
  
  switch (_dpStatus) {
  case 0: // no DP
    break;
  case 1: // dp first digit
    digit1Segments |= 0x01;
    break;
  case 2: // dp second digit
    digit2Segments |= 0x01;
    break;
  case 3: // dp both digits
    digit1Segments |= 0x01;
    digit2Segments |= 0x01;
    break;
  default:
    break;
  }
}


void UpdateDisplay(void)
{
  uint8_t mask = 0x80;
  static uint8_t activeDigit = 0;
  
  activeDigit ^= 1;
  
  if (activeDigit == 1) {
    HAL_GPIO_WritePin(Digit_2, Digit_OFF);
                      
    HAL_GPIO_WritePin(Seg_A, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_B, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_C, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_D, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_E, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_F, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_G, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_DP, (digit1Segments & mask) ? Seg_ON : Seg_OFF);
    
    HAL_GPIO_WritePin(Digit_1, Digit_ON);
  }
  else {
    HAL_GPIO_WritePin(Digit_1, Digit_OFF);

    HAL_GPIO_WritePin(Seg_A, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_B, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_C, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_D, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_E, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_F, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_G, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    mask >>= 1;
    HAL_GPIO_WritePin(Seg_DP, (digit2Segments & mask) ? Seg_ON : Seg_OFF);
    
    HAL_GPIO_WritePin(Digit_2, Digit_ON);
  }  
}
