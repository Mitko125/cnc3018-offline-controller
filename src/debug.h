#pragma once

#include <Arduino.h>

//#define USB_SERIAL

#ifdef USB_SERIAL
#define LOGF(...)   do{SerialUSB.printf(__VA_ARGS__);}while(0)
#define LOGLN(...)  do{SerialUSB.println(__VA_ARGS__);}while(0)
#else
#define LOGF(...)
#define LOGLN(...)
#endif
