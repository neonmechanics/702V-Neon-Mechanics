#include "odom.h"
#include "vex.h"
#include "types.h"
Pose getpos(void) {
float leftpos = left_drive.position(degrees)/ 360.0 * M_PI * 3.25;
float rightpos = right_drive.position(degrees)/360.0 * M_PI * 3.25;
float pos = prevpos - (leftpos + rightpos) / 2.0;
float angle = prevangle - InertialSensor.rotation(degrees);
float delta_pos = prevpos - pos;
}