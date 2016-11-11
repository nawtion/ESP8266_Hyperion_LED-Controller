#include "misc/LoggerInit.h"

LoggerInit::LoggerInit(long baud) { 
  Log.init(LOGLEVEL, baud);
  //Serial.setDebugOutput(true);
}

