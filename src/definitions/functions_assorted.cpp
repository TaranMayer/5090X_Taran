#include "main.h"
#include "functions_assorted.h"

void move(lv_obj_t *obj, int x, int y) {
	lv_obj_align(obj, NULL, LV_ALIGN_IN_TOP_LEFT, x, y);
}