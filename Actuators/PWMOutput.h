/*
 * Copyright (c) 2012 Timo Kerstan.  All right reserved.
 *
 * This file is part of Aquaduino.
 *
 * Aquaduino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Aquaduino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Aquaduino.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PWMOUTPUT_H_
#define PWMOUTPUT_H_

#include <Framework/Actuator.h>

class PWMOutput: public Actuator
{
private:
    int pin;
    int onValue;
    int offValue;
    float dutyCycle;
public:
    PWMOutput(const char* name);
    virtual void on();
    virtual void off();
    virtual int8_t isOn();
    virtual int8_t supportsPWM();
    virtual void setPWM(float dutyCycle);
    virtual float getPWM();

};
#endif /* PWMOUTPUT_H_ */
