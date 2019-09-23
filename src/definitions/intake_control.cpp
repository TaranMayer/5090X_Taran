#include "main.h"
#include "intake_control.h"
#include "motors_setup.h"





void fullSpeedIn() {
	intake_state = 2;
	Intake_Left.move_voltage(12000);
	Intake_Right.move_voltage(-12000);
}
void fullSpeedOut() {
	intake_state = -2;
	Intake_Left.move_voltage(-12000);
	Intake_Right.move_voltage(12000);
}
void halfSpeedIn() {
	intake_state = 1;
	Intake_Left.move_velocity(20);
	Intake_Right.move_velocity(-20);
}
void halfSpeedOut() {
	intake_state = -1;
	Intake_Left.move_velocity(-20);
	Intake_Right.move_velocity(20);
}
void intake_stop() {
	intake_state = 0;
	Intake_Left.move_velocity(0);
	Intake_Right.move_velocity(0);
}

