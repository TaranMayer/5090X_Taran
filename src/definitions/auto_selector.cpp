#include "main.h"
#include "auto_selector.h"
#include "sensors.h"
#include "functions_assorted.h"


int min_auto_2 = 12;
int min_auto_3 = 250;
int min_auto_4 = 475;
int min_auto_5 = 800;
int min_auto_6 = 1100;
int min_auto_7 = 1350;
int min_auto_8 = 1650;
int min_auto_9 = 1900;
int min_auto_10 = 2150;
int min_auto_11 = 2400;
int min_auto_12 = 2675;
int min_auto_13 = 3000;
int min_auto_14 = 3300;
int min_auto_15 = 3800;
int min_auto_16 = 4095;

int max_auto_1 = 12;
int max_auto_2 = 250;
int max_auto_3 = 475;
int max_auto_4 = 800;
int max_auto_5 = 1100;
int max_auto_6 = 1350;
int max_auto_7 = 1650;
int max_auto_8 = 1900;
int max_auto_9 = 2150;
int max_auto_10 = 2400;
int max_auto_11 = 2675;
int max_auto_12 = 3000;
int max_auto_13 = 3300;
int max_auto_14 = 3800;
int max_auto_15 = 4094;









//

void auto_startup(){                                        


}

void find_number() {
	if (pluggedIn == 1) {
		if (pot.get_value() <= max_auto_1) {
			number = 1;
		}
		else if (pot.get_value() > min_auto_2 && pot.get_value() <= max_auto_2 && (pot.get_value() < 40 || pot.get_value() > 60)) {
			number = 2;
		}
		else if (pot.get_value() > min_auto_3 && pot.get_value() <= max_auto_3) {
			number = 3;
		}
		else if (pot.get_value() > min_auto_4 && pot.get_value() <= max_auto_4) {
			number = 4;
		}
		else if (pot.get_value() > min_auto_5 && pot.get_value() <= max_auto_5) {
			number = 5;
		}
		else if (pot.get_value() > min_auto_6 && pot.get_value() <= max_auto_6) {
			number = 6;
		}
		else if (pot.get_value() > min_auto_7 && pot.get_value() <= max_auto_7) {
			number = 7;
		}
		else if (pot.get_value() > min_auto_8 && pot.get_value() <= max_auto_8) {
			number = 8;
		}
		else if (pot.get_value() > min_auto_9 && pot.get_value() <= max_auto_9) {
			number = 9;
		}
		else if (pot.get_value() > min_auto_10 && pot.get_value() <= max_auto_10) {
			number = 10;
		}
		else if (pot.get_value() > min_auto_11 && pot.get_value() <= max_auto_11) {
			number = 11;
		}
		else if (pot.get_value() > min_auto_12 && pot.get_value() <= max_auto_12) {
			number = 12;
		}
		else if (pot.get_value() > min_auto_13 && pot.get_value() <= max_auto_13) {
			number = 13;
		}
		else if (pot.get_value() > min_auto_14 && pot.get_value() <= max_auto_14) {
			number = 14;
		}
		else if (pot.get_value() > min_auto_15 && pot.get_value() < max_auto_15) {
			number = 15;
		}
		else if (pot.get_value() >= min_auto_16) {
			number = 16;
		}
	}
	else {
		number = 0;
	}

	printf("Pot Value: %d   Plugged In: %d   Number: %d \n", pot.get_value(), pluggedIn, number);

}

void get_plugged_in() {
	if ((pot.get_value() != intial_pot && pot.get_value() != intial_pot + 1 && pot.get_value() != intial_pot + 2 && pot.get_value() != intial_pot - 1 && pot.get_value() != intial_pot - 2) || (pot.get_value() < 40 || pot.get_value() > 60)) {
		pluggedIn = 1;
	}
}





// Auton LVGL Code


	//void auto_1() {
	//	
	//}
	//void auto_2() {

	//	
	//	
	//}
	//void auto_3() {
	//	
	//	
	//}
	//void auto_4() {
	//	
	//	
	//}
	//void auto_5() {

	//}
	//void auto_6() {

	//}
	//void auto_7() {

	//}
	//void auto_8() {

	//}
	//void auto_9() {

	//}
	//void auto_10() {

	//}
	//void auto_11() {

	//}
	//void auto_12() {

	//}
	//void auto_13() {

	//}
	//void auto_14() {

	//}
	//void auto_15() {

	//}
	//void auto_16() {

	//}
	//void auto_null() {
	//	lv_label_set_text(desc_title, "#e5ff00 Auton Routine Not Set#");
	//	lv_label_set_text(desc_body, "");
	//}

	void display_new_setup(void*) {

		lv_obj_t * img2 = lv_img_create(lv_scr_act(), NULL);
		lv_img_set_src(img2, &robot_pic);

		lv_obj_t* desc_title = lv_obj_create(lv_scr_act(), NULL);
		lv_obj_t* desc_body = lv_obj_create(lv_scr_act(), NULL);

		while (true)
		{
			if (number == 1) {
				move(img2, 12, 49);
				lv_obj_align(desc_title, NULL, LV_ALIGN_IN_TOP_LEFT, 290, 10);
				lv_label_set_text(desc_title, "#ff0000 Auton Routine 1#");
				lv_label_set_text(desc_body, "Scores _ #ff9900 orange# cubes \nScores _ #24c400 green# cubes\nScores _ #8c00bf purple# cubes\n\nPlaces _ #ff9900 orange# cubes \nPlaces _ #24c400 green# cubes\nPlaces _ #8c00bf purple# cubes");
			}
			else if (number == 2) {
				lv_obj_align(desc_title, NULL, LV_ALIGN_IN_TOP_LEFT, 290, 10);
				lv_label_set_text(desc_title, "#ff0000 Auton Routine 2#");
				lv_label_set_text(desc_body, "Scores _ #ff9900 orange# cubes \nScores _ #24c400 green# cubes\nScores _ #8c00bf purple# cubes\n\nPlaces _ #ff9900 orange# cubes \nPlaces _ #24c400 green# cubes\nPlaces _ #8c00bf purple# cubes");
			}
			else if (number == 3) {
				move(img2, 192, 49);
				lv_obj_align(desc_title, NULL, LV_ALIGN_IN_TOP_LEFT, 290, 10);
				lv_label_set_text(desc_title, "#0000ff Auton Routine 3#");
				lv_label_set_text(desc_body, "Scores _ #ff9900 orange# cubes \nScores _ #24c400 green# cubes\nScores _ #8c00bf purple# cubes\n\nPlaces _ #ff9900 orange# cubes \nPlaces _ #24c400 green# cubes\nPlaces _ #8c00bf purple# cubes");
			}
			else if (number == 4) {
				move(img2, 192, 154);
				lv_obj_align(desc_title, NULL, LV_ALIGN_IN_TOP_LEFT, 290, 10);
				lv_label_set_text(desc_title, "#0000ff Auton Routine 4#");
				lv_label_set_text(desc_body, "Scores _ #ff9900 orange# cubes \nScores _ #24c400 green# cubes\nScores _ #8c00bf purple# cubes\n\nPlaces _ #ff9900 orange# cubes \nPlaces _ #24c400 green# cubes\nPlaces _ #8c00bf purple# cubes");
			}
			else if (number == 0) {
				move(img2, 500, 500);

				lv_obj_align(desc_title, NULL, LV_ALIGN_IN_TOP_LEFT, 260, 10);
				lv_obj_align(desc_body, NULL, LV_ALIGN_IN_TOP_LEFT, 260, 40);

				lv_label_set_recolor(desc_title, true);
				lv_label_set_recolor(desc_body, true);
				lv_label_set_text(desc_title, "#e5ff00 Auton Routine Not Set#");
				lv_label_set_text(desc_body, "Nothing");
			}
			else {
				lv_label_set_recolor(desc_title, true);
				lv_label_set_recolor(desc_body, true);
				lv_label_set_text(desc_title, "#e5ff00 Auton Routine Not Set#");
				lv_label_set_text(desc_body, "Ya done goofed");
			}

			pros::delay(20);
		}

		
	}

