#include "motors_setup.h"
#include "main.h"



pros::Controller  Controller1(pros::E_CONTROLLER_MASTER);
pros::Controller Controller2(pros::E_CONTROLLER_PARTNER);


pros::Motor FL(1);
pros::Motor BL(2);
pros::Motor FR(3);
pros::Motor BR(4);
pros::Motor Intake_Left(15);
pros::Motor Intake_Right(14);
pros::Motor Arm(12);
pros::Motor Tilter(13);
