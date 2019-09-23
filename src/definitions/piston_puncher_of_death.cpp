#include "main.h"
#include "piston_puncher_of_death.h"

//Definitions for the enemy-brain disabling device


pros::ADIDigitalOut brain_puncher(1);

void doThePunchey() {
	brain_puncher.set_value(true);
	pros::delay(80);
	brain_puncher.set_value(false);
}