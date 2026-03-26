#include  "subsystems.hpp"
//#include  "controls.hpp"

//Piston Port Definitions
pros::adi::DigitalOut testPiston ('A');

//Define Initial States
bool testInitialState = false;

//Ensure Piston Variables Start In Initial States
bool testCurrent = testInitialState;


void resetPistons(){
    testState(testInitialState);
}

void testToggle(){
    testCurrent = !testCurrent;
    testState(testCurrent);
}

void testState(bool state){
testPiston.set_value(state);
testCurrent = state;
}

void pistonControl(){
    if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)){
        testToggle();
    }
}