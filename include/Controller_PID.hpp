// Copyright 2018 Anirudh Topiwala
/**
 *
 * @file    Controller_PID.hpp
 * @author  Anirudh Topiwala
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
 * @brief      PID Controller Class
 */
class Controller_PID {
 private:
  double Kp = 0.0;
  double Kd = 0.0;
  double Ki = 0.0;
  double dt = 0.0;

 public:
  /**
   * @brief Class constructor to initialize  with default values
   */
  Controller_PID();
  /**
   * @brief Constructor to initialize  with user defined values
   */
  Controller_PID(double Kp, double Ki, double Kd, double dt);

  /**
   * @brief This method computes the new velocity using current and reference velocities as inputs
   */
  double compute(double reference_vel, double current_vel);

  ~Controller_PID();
};

#endif  // INCLUDE_CONTROLLER_PID_HPP_
