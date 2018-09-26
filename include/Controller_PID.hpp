// Copyright 2018 Anirudh Topiwala
/**
 *
 * @file    Controller_PID.hpp
 * @author  Anirudh Topiwala
 * @author  Part 1 : Anirudh Topiwala (Driver) , Bharat Mathur (Navigator)
 * @date    9/23/2018
 * @version 1.0
 *
 * @brief   Controller_PID class.
 *
 * @section DESCRIPTION
 *
 * This hpp file defines the class and methods for a PID Controller.
 */

#ifndef INCLUDE_CONTROLLER_PID_HPP_
#define INCLUDE_CONTROLLER_PID_HPP_

#include <iostream>

/**
 * @brief      PID Controller Class, initialization of gain values
 * and sampling time.
 *
 * @param1 Kp is the proportional gain constant
 * @param1 Kd is the derivative gain constant
 * @param1 Ki is the integral gain constant
 * @param1 dt is the sampling time
 */
class Controller_PID {
 private:
  double Kp = 1.0;
  double Kd = 0.0;
  double Ki = 0.0;
  double dt = 0.5;

 public:
  /**
   * @brief Class constructor to initialize  with default values
   */
  Controller_PID();
  /**
   * @brief Constructor to initialize  with user defined values
   *
   * @param1 Kp is the user defined proportional gain constant
   * @param1 Kd is the user defined derivative gain constant
   * @param1 Ki is the user defined integral gain constant
   * @param1 dt is the user defined sampling time
   *
   */
  Controller_PID(double Kp, double Ki, double Kd, double dt);
  /**
   * @brief This method computes the new velocity using current and reference velocities as inputs
   *
   * @Param1 referece_vel is the target velocity which needs to be achieved.
   * @param2 current_vel is the current velocity
   */
  double compute(double reference_vel, double current_vel);
  /**
   * @brief This method returns the sampling time dt
   */
  double returndt();

  ~Controller_PID();
};

#endif  // INCLUDE_CONTROLLER_PID_HPP_
