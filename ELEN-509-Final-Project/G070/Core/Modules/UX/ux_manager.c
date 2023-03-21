// ux_manager.c


#include "main.h"
#include "ux_manager.h"
#include <stdio.h>

// ----------------------------
// private defines


// ----------------------------
// Global Constants


// ----------------------------
// Modular Constants


// ----------------------------
// global variables
// Screens
ui_screen currentScreen;
ui_screen lastScreen;

// Display-wrapped values
// format seq (numeric): {<format string>, <error message>, <Xpos>, <Ypos>, <valid?>, <init value>}
DWfloat counter = {"%5.2f", "---", 0, 0, true, 0};
DWint8_t buttons = {"0x0%X", "---", 0, 0, true, 0};

// format seq (string): {<format string>,  <error message>, <Xpos>, <Ypos>, <valid?>, "<init value>"
DWstring25 displayMessage = {"%s", "...", 0, 0, false, ""};

DWchar gpsIcon = {"%c", ".", 0, 0, true, '-'};

// ----------------------------
// modular variables


// ----------------------------
// module prototypes
void SetupScreen(ui_screen _screenNo);



// ***************
// Start Of Code
// ***************
// Screen switching utility that manages pre-, post-, and screen switch conditions
void SwitchScreens(ui_screen screen_no)
{
  lastScreen = currentScreen;

  
#pragma diag_suppress= Pa149
  // what must be done before current screen is switched out
  switch (lastScreen) {
  }
  
  
  // what must be done before screen is switched in
  switch (screen_no) {
  }
#pragma diag_warning= Pa149
  
  // Switch the screens
  switch (screen_no) {
  case SPLASH:
    // clear the screen from the previos dispayed data
    SSD1306_Clear();
    // Put up the "persistant" info (like data labels)
    SSD1306_GotoXY (0,20);
    SSD1306_Puts ("ELEN509", &Font_11x18, SSD1306_COLOR_WHITE);
    break;
  case SHOW_COUNT_N_BUTTONS:
    SSD1306_Clear();
    SSD1306_GotoXY (0,0);
    SSD1306_Puts ("Cnt n Btns", &Font_11x18, SSD1306_COLOR_WHITE);
    SSD1306_GotoXY (0, 20);
    SSD1306_Puts ("Value: ", &Font_11x18, SSD1306_COLOR_WHITE);
    counter.xPos = 65;
    counter.yPos = 20;
    SSD1306_GotoXY (0, 41);
    SSD1306_Puts ("Butn:", &Font_11x18, SSD1306_COLOR_WHITE);
    buttons.xPos = 65;
    buttons.yPos = 41;
    gpsIcon.xPos =110;
    gpsIcon.yPos =1;
    
    break;
  }
  
  // Send a screen update (note this does not update the live data)
  SSD1306_UpdateScreen(); //display

  currentScreen = screen_no;
  
#pragma diag_suppress= Pa149
  // what must be done after screen is switched in
  switch (currentScreen) {
  }
#pragma diag_warning= Pa149
  
}



#pragma diag_suppress= Pa149
void SetupScreen(ui_screen _screenNo)
{
  switch (_screenNo) {
  }
}
#pragma diag_warning= Pa149



// ============= Begin kbd section =================
// *** UX Keycode processor
// *** This is a context sensitive keycode processor. There is a 
// *** non-context sensitive keycode processor in the keyboard handler file.
// *** 
// *** This one should be used if there are screens and the function
// *** of the keys changes based on the screen showing or system status.

// *** Typically only one of these two functions is used.
// ***
// =================================================

// Context-sensitive keyboard processor
uint8_t ProcessKeyCodeInContext (uint16_t key_code)
{
  switch (currentScreen) {
  case  SPLASH:
    switch (key_code) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    }
    break;
  case  SHOW_COUNT_N_BUTTONS:
    switch (key_code) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    }
    break;
  }
  
  return true;
}

// ============== End kbd section ==================




// Live screen updates!!!
void UpdateScreenValues(void)
{
  char displayString[25];
  
  switch (currentScreen) {
  case SPLASH:
    // Nothing to do here
    break;
  case SHOW_COUNT_N_BUTTONS:
    SSD1306_GotoXY(counter.xPos, counter.yPos);
    if (counter.valid) {
      sprintf(displayString, counter.format, counter.data);
      SSD1306_Puts(displayString, &Font_11x18, SSD1306_COLOR_WHITE);
    }
    else
      SSD1306_Puts(counter.invalidMsg, &Font_11x18, SSD1306_COLOR_WHITE);

    SSD1306_GotoXY(buttons.xPos, buttons.yPos);
    if (buttons.valid) {
      sprintf(displayString, buttons.format, buttons.data);
      SSD1306_Puts(displayString, &Font_11x18, SSD1306_COLOR_WHITE);
    }
    else
      SSD1306_Puts(buttons.invalidMsg, &Font_11x18, SSD1306_COLOR_WHITE);

    SSD1306_GotoXY(gpsIcon.xPos, gpsIcon.yPos);
    if (gpsIcon.valid) {
      sprintf(displayString, gpsIcon.format, gpsIcon.data);
      SSD1306_Puts(displayString, &Font_11x18, SSD1306_COLOR_WHITE);
    }
    else
      SSD1306_Puts(gpsIcon.invalidMsg, &Font_11x18, SSD1306_COLOR_WHITE);
    break;
  }
  SSD1306_UpdateScreen(); //display
}


