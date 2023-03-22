// Number Conversions
// ASCII_number.c
//


// includes
#include "ASCII_numbers.h"


// modular variables


// external variables



// Code
uint8_t ConvertASCII2UINT16(const char * numstring, uint8_t _len, const char _terminator, volatile uint16_t * _number)
{
  uint8_t i;
  uint8_t error;
  uint8_t done;
  uint16_t value;
  
  
  error = 0;
  i = 0;
  value = 0;
  done = false;
  
  while ((i< _len) && (done != true) && (error == 0)) {
    if ((numstring[i] >= '0') && (numstring[i] <= '9') || (numstring[i] == ' ')) { // consider numerals as valid
      if (numstring[i] != ' ') {
        value *=10;
        value += (numstring[i] - 0x30);
      }
      i++;
      if ((numstring[i] == _terminator) || (numstring[i] == 0)) {
        done = true;
      }
    }
    else
      error = 1;
  }
  
  if (error == 0) {
    *_number = value;
  }
  
  return error;
}
