// "Copyright [2018] <Anirudh Topiwala>"
/**
 * @file    main.cpp
 * @author  Anirudh Topiwala (anirudhtopiwala)
 * @date    9/23/2018
 * @version 1.0
 *
 * @brief   Controller_PID class.
 *
 * @section DESCRIPTION
 *
 * This program uses methods of Controller_PID class to implement a PID controller.
 */

#include <iostream>
#include "Controller_PID.hpp"

/**
 * @brief Constructs the Controller_PID class object with default values
 */
Controller_PID::Controller_PID() {
}

/**
 * @brief Constructs the PidController object with user defined values
 * @Param1: userkp is the value of kp entered by user
 * @Param2: userkd is the value of kp entered by user
 * @Param3: userki is the value of kp entered by user
 * @Param4: userdt is the value of dt or sample time entered by user
 */
Controller_PID::Controller_PID(double userKp, double userKi, double userKd,
                               double userdt) {
}
/**
 * @brief Computes the velocity based on target and actual velocity
 * @Param1 referece_vel is the target velocity which needs to be achieved.
 * @param2 current_vel is the current velocity
 */
double Controller_PID::compute(double reference_vel, double current_vel) {
  return 0.0;
}

/**
 * @brief Destructor for Controller_PID class object
 */
Controller_PID::~Controller_PID() {
}
