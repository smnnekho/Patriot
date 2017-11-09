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
#pragma once

#include "Particle.h"
#include "device.h"

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
