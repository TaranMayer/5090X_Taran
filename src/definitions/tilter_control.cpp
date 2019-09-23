#include "main.h"
#include "tilter_control.h"
#include "motors_setup.h"

void tilter_fwd() {
	Tilter.move_velocity(-10);
}
void tilter_rev() {
	Tilter.move_velocity(100);
}
void tilter_set_out() {
	Tilter.move_absolute(120, 10);
}
void tilter_set_in() {
	Tilter.move_absolute(0, 100);
}
void stop_tilter() {
	Tilter.move_velocity(0);
}
