#ifndef Config_h
#define Config_h

#include "../../misc/BaseHeader.h"

#include <EEPROM.h>

#include "../static/ConfigStatic.h"
#include "../dynamic/ConfigStructures.h"

class Config {
  public:
    static ConfigStruct *getConfig(void);
    static void saveConfig();
    static void loadStaticConfig(void);
    static byte *cfg2ip(ConfigIP ip);
    static ConfigIP ip2cfg(const byte ip[4]);
    static void logConfig(void);
  private:
    static void initConfig(void);
    static ConfigStruct _cfgStruct;
    static boolean _cfgLoaded;
};

#endif
