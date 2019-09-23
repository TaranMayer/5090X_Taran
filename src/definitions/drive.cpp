#include "main.h"
#include "drive.h"
#include "motors_setup.h"


//true = arcade
//false	= tank

bool driveMode = false;
int leftSpeed;
int rightSpeed;

void arcade() {
	//PUT ARCADE CODE HERE
}

void tank() { //Zeke, I'm coding this one as you said I could
	/*if (Controller1.get_analog(ANALOG_LEFT_Y) >= 10) {
		leftSpeed = ((Controller1.get_analog(ANALOG_LEFT_Y) - 10)*(Controller1.get_analog(ANALOG_LEFT_Y) - 10)*(Controller1.get_analog(ANALOG_LEFT_Y) - 10)) / 3640;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) <= 10) {
		leftSpeed = ((Controller1.get_analog(ANALOG_LEFT_Y) + 10)*(Controller1.get_analog(ANALOG_LEFT_Y) - 10)*(Controller1.get_analog(ANALOG_LEFT_Y) - 10)) / 3640;
	}
	else {
		leftSpeed = 0;
	}

	if (Controller1.get_analog(ANALOG_RIGHT_Y) >= 10) {
		rightSpeed = ((Controller1.get_analog(ANALOG_RIGHT_Y) - 10)*(Controller1.get_analog(ANALOG_RIGHT_Y) - 10)*(Controller1.get_analog(ANALOG_RIGHT_Y) - 10)) / 3640;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) <= 10) {
		rightSpeed = ((Controller1.get_analog(ANALOG_RIGHT_Y) + 10)*(Controller1.get_analog(ANALOG_RIGHT_Y) - 10)*(Controller1.get_analog(ANALOG_RIGHT_Y) - 10)) / 3640;
	}
	else {
		rightSpeed = 0;
	}*/


	if (Controller1.get_analog(ANALOG_LEFT_Y) >= 50) {
		leftSpeed = (Controller1.get_analog(ANALOG_LEFT_Y))*3.6 - 160;
	}
	else if(Controller1.get_analog(ANALOG_LEFT_Y) <= -50) {
		leftSpeed = (Controller1.get_analog(ANALOG_LEFT_Y))*3.6 - 160;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) >= 0 && Controller1.get_analog(ANALOG_LEFT_Y)< 10) {
		leftSpeed = 0;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) <= 0 && Controller1.get_analog(ANALOG_LEFT_Y) > -10) {
		leftSpeed = 0;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) >= 10 && Controller1.get_analog(ANALOG_LEFT_Y) < 50) {
		leftSpeed = 20;
	}
	else if (Controller1.get_analog(ANALOG_LEFT_Y) <= 0 && Controller1.get_analog(ANALOG_LEFT_Y) > -50) {
		leftSpeed = 20;
	}

	if (Controller1.get_analog(ANALOG_RIGHT_Y) >= 50) {
		rightSpeed = (Controller1.get_analog(ANALOG_RIGHT_Y))*3.6 - 160;
	}
	else if (Controller1.get_analog(ANALOG_RIGHT_Y) <= -50) {
		rightSpeed = (Controller1.get_analog(ANALOG_RIGHT_Y))*3.6 - 160;
	}
	else if (Controller1.get_analog(ANALOG_RIGHT_Y) >= 0 && Controller1.get_analog(ANALOG_RIGHT_Y) < 10) {
		rightSpeed = 0;
	}
	else if (Controller1.get_analog(ANALOG_RIGHT_Y) <= 0 && Controller1.get_analog(ANALOG_RIGHT_Y) > -10) {
		rightSpeed = 0;
	}
	else if (Controller1.get_analog(ANALOG_RIGHT_Y) >= 10 && Controller1.get_analog(ANALOG_RIGHT_Y) < 50) {
		rightSpeed = 20;
	}
	else if (Controller1.get_analog(ANALOG_RIGHT_Y) <= 0 && Controller1.get_analog(ANALOG_RIGHT_Y) > -50) {
		rightSpeed = 20;
	}


}