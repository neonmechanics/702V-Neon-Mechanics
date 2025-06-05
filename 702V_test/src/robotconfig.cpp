#include "vex.h"

using namespace vex;
// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Controller1;
motor leftfront = motor(PORT12, ratio6_1, true);
motor leftrear = motor(PORT1, ratio6_1, true);
motor leftrear_stacked = motor(PORT11, ratio6_1, false);
motor rightfront = motor(PORT19, ratio6_1, false);
motor rightrear = motor(PORT10, ratio6_1, false);
motor rightrear_stacked = motor(PORT20, ratio6_1, true);
inertial InertialSensor = inertial(PORT7);
motor_group left_drive = motor_group(leftfront, leftrear, leftrear_stacked);
motor_group right_drive = motor_group(rightfront, rightrear, rightrear_stacked);
void vexcodeInit( void ) {
  // nothing to initialize
}