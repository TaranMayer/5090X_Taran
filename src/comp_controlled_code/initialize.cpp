#include "main.h"
#include "motors_setup.h"
#include "sensors.h"
#include "auto_selector.h"
#include "C:\Users\Taran Mayer\Desktop\5090X_Main_Codebase\include\gif-pros\gifclass.hpp"

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void run_splash(void*) {
	lv_obj_t * img1 = lv_img_create(lv_scr_act(), NULL);
	lv_img_set_src(img1, &t_t_field);
	lv_obj_align(img1, NULL, LV_ALIGN_IN_TOP_LEFT, 990, 990);


	lv_obj_t* obj = lv_obj_create(lv_scr_act(), NULL);
	lv_obj_set_size(obj, 240, 240);
	lv_obj_set_style(obj, &lv_style_transp);
	lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);

	Gif gif("/usd/radioactive.gif", obj, Gif::Transparency::automatic);
	pros::delay(400);
	lv_obj_align(img1, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);
	auto_startup();
	pros::delay(1000);
	lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 990, 990);
}

void initialize() {	

	Task splash_task(run_splash, nullptr, "run_splash");
	Task lvgl_setup_task(display_new_setup, nullptr, "display_new_setup");

	pot.calibrate();

	FR.set_reversed(true);
	BR.set_reversed(true);


	Tilter.tare_position();
	Tilter.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	Arm.tare_position();
	Arm.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	Tilter.set_gearing(pros::E_MOTOR_GEARSET_36);
	Intake_Left.set_gearing(E_MOTOR_GEARSET_36);
	Intake_Right.set_gearing(E_MOTOR_GEARSET_36);
	Arm.set_gearing(E_MOTOR_GEARSET_36);


	auto_startup();
	



}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {

}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {


}
