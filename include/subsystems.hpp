#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

void resetPistons();
void pistonControl();


void testToggle();
void testState();
extern pros::adi::DigitalOut pistonTest;