// "Copyright [2018] <Anirudh Topiwala>"
/**
 * @file    main.cpp
 * @author  Anirudh Topiwala (anirudhtopiwala)
 * @author  Part 1 : Anirudh Topiwala (Driver) , Bharat Mathur (Navigator)
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
 *
 * @Param1: kp_input is the value of kp entered by user
 * @Param2: kd_input is the value of kp entered by user
 * @Param3: ki_input is the value of kp entered by user
 * @Param4: dt_input is the value of dt or sample time entered by user
 */
Controller_PID::Controller_PID(double Kp_input, double Ki_input,
                               double Kd_input, double dt_input) {
  // assign the user entered parameter values to the variables
  Kp = Kp_input;
  Ki = Ki_input;
  Kd = Kd_input;
  dt = dt_input;
  std::cout << "User defined parameter values are " << "Kp:" << Kp << " Kd:"
            << Kd << " Ki:" << Ki << " dt:" << dt << std::endl;
}

/**
 * @brief Computes the velocity based on target and actual velocity
 *
 * @Param1 referece_vel is the target velocity which needs to be achieved.
 * @param2 current_vel is the current velocity
 */
double Controller_PID::compute(double reference_vel, double current_vel) {
  double velocityDifference = reference_vel - current_vel;  // compute the velocity difference
  double calculatedVelocity = 0;
  if (dt > 0) {
    // compute the new velocity
    calculatedVelocity = (Kp * velocityDifference)
        + (Ki * velocityDifference * dt) + (Kd * velocityDifference / dt);
  } else {
    std::cout
        << "Time step has to be a non-negative value. Output velocity set to 0.";
    calculatedVelocity = 0;
  }
  return calculatedVelocity;
}

/**
 * @brief Method to return dt
 */
double Controller_PID::returndt() {
  return dt;
}

/**
 * @brief Destructor for Controller_PID class object
 */
Controller_PID::~Controller_PID() {
}
