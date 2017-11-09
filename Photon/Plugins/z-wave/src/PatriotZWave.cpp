/******************************************************************
PatriotZWave plugin

Features:
- Control Z-Wave devices

http://www.github.com/rlisle/Patriot

Written by Ron Lisle

BSD license, check license.txt for more information.
All text above must be included in any redistribution.

Changelog:
2017-11-09: Initial files
******************************************************************/

class ZWave : public Device
{
public:
    /**
     * Constructor
     */
    ZWave(String port);

private:
    String     _port;
};

#include "PatriotSwitch.h"

extern String publishNameVariable;

/**
 * Constructor
 * @param portName String name of the USB port with the UZB adapter.
 */
ZWave::ZWave(String portName)
{
    // Nothing to do yet
}

/**
 * loop()
 * This is called repeatedly to allow device to do its work.
 */
void ZWave::loop()
{
    // Nothing to do yet
}


/**
 * notify()
 * Publish state changes
 */
void ZWave::notify()
{
    String pubString = "ZWave whatever...";
    Serial.println(pubString);
    Particle.publish(publishNameVariable, pubString, 60, PRIVATE);
}
