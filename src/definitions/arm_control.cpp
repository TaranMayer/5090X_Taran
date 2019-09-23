#include "arm_control.h"
#include "main.h"
#include "motors_setup.h"

void arm_up() {
	Arm.move_velocity(100);
}
void arm_down() {
	Arm.move_velocity(-100);
}
void set_down() {
	Tilter.move_absolute(20,100);
	Arm.move_absolute(0, 100);
}
void set_low() {
	Tilter.move_absolute(20,100);
	Arm.move_absolute(1080,100);
}
void set_high() {
	Tilter.move_absolute(20,100);
	Arm.move_absolute(1440, 100);
}
void arm_stop() {
	Arm.move_velocity(0);
}