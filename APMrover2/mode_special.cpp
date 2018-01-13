#include "mode.h"
#include "Rover.h"

void ModeSpecial::update()
{
    // Do Nothing: Search for MavLink Command
    g2.motors.set_throttle(0.0f);
    g2.motors.set_steering(0.0f);

    // hold mode never reverses
    rover.set_reverse(false);
}
