// ux_manager.h



#ifndef UX_MGR
#define UX_MGR

// ----------------------------
// includes
#include <stdint.h>
#include "ssd1306.h"


// ----------------------------
// typedefs
typedef enum  Screens_{
  SPLASH,
  SHOW_COUNT_N_BUTTONS,
//  NUMBER_OF_SCREENS
} ui_screen;


typedef struct DWuint8_t_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  uint8_t data;
} DWuint8_t;


typedef struct DWint8_t_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  int8_t data;
} DWint8_t;


typedef struct DWuint16_t_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  uint16_t data;
} DWuint16_t;


typedef struct DWint16_t_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  int16_t data;
} DWint16_t;


typedef struct DWstring25_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  char data[26];
} DWstring25;


typedef struct DWfloat_
{
  char format[10];
  char invalidMsg[4];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  float data;
} DWfloat;


typedef struct DWchar_
{
  char format[10];
  char invalidMsg[2];
  uint16_t xPos;
  uint16_t yPos;
  uint8_t valid;
  char data;
} DWchar;



// ----------------------------
// Global variables
// live screen data variables
extern ui_screen screenNumber;

extern DWfloat counter;
extern DWstring25 displayMessage;
extern DWchar gpsIcon;

// ----------------------------
// Global Constants


// ----------------------------
// Public function prototypes
void SwitchScreens(ui_screen screen_no);
uint8_t ProcessKeyCodeInContext (uint16_t key_code);
void UpdateScreenValues(void);
uint8_t GetKeycode(void);

#endif