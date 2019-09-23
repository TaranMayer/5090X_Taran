#include "main.h"
#include "motors_setup.h"
#include "intake_control.h"
#include "tilter_control.h"
#include "arm_control.h"
#include "drive.h"
#include "piston_puncher_of_death.h"
#include "sensors.h"
#include "auto_selector.h"
#include "variables.h"
#include "functions_assorted.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().	
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */


void opcontrol() {

	while (true) {

		tank();
		BL = leftSpeed;
		FL = leftSpeed;
		
		FR = rightSpeed;
		BR = rightSpeed;

		//Death Puncher Control
		{
			if (Controller1.get_digital_new_press(E_CONTROLLER_DIGITAL_A)) {
				doThePunchey();
			}
		}

		//Intake Control
		{

			if (Controller1.get_digital_new_press(E_CONTROLLER_DIGITAL_R1)) {

				if (intake_state != 2) {
					fullSpeedIn();
				}
				else {
					intake_stop();
				}
			}
			else if (Controller1.get_digital_new_press(E_CONTROLLER_DIGITAL_R2)) {

				if (intake_state != -2) {
					fullSpeedOut();
				}
				else {
					intake_stop();
				}

			}
			else if (Controller1.get_digital_new_press(E_CONTROLLER_DIGITAL_L1)) {

				if (intake_state != 1) {
					halfSpeedIn();
				}
				else {
					intake_stop();
				}

			}
			else if (Controller1.get_digital_new_press(E_CONTROLLER_DIGITAL_L2)) {

				if (intake_state != -1) {
					halfSpeedOut();
				}
				else {
					intake_stop();
				}

			}
		}

		//Tilter Control
		{
			if (Controller2.get_digital(E_CONTROLLER_DIGITAL_L1)) {
				tilter_fwd();
			}
			else if (Controller2.get_digital(E_CONTROLLER_DIGITAL_L2)) {
				tilter_rev();
			}
			else {
				stop_tilter();
			}
		}

		//Arm Control
		{
			if (Controller2.get_digital(E_CONTROLLER_DIGITAL_R1)) {
				arm_up();
			}
			else if (Controller2.get_digital(E_CONTROLLER_DIGITAL_R2)) {
				arm_down();
			}
			else
			{ 
				arm_stop();
			}
		}



			
		get_plugged_in();
			
		find_number();
			
		/*display_new_setup();*/
		
		pros::delay(10);
	}
}
