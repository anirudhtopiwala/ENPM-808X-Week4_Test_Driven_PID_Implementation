// "Copyright [2018] <Anirudh Topiwala>"
/**
 * @file    main.cpp
 * @author  Anirudh Topiwala (anirudhtopiwala)
 * @author  Part 1 : Anirudh Topiwala (Driver) , Bharat Mathur (Navigator)
 * @date    9/23/2018
 * @version 1.0
 *
 * @brief   Code to run Controller_PID class.
 *
 * @section DESCRIPTION
 *
 * This program uses Controller_PID class and its method to implement a PID controller.
 */

#include <iostream>
#include <memory>
#include "Controller_PID.hpp"

/**
 * @brief Main function
 *
 * @return Program execution status
 */
int main() {
  /**
   * Create an object for class Controller_PID and call the compute method.
   */
  // stores desired velocity, proportional gain
  double setVelocity, kp, ki, kd, dt;

  // integral gain, differential gain and time step.
  std::cout
      << "Please enter the desired proportional gain, integral gain,"
          " differential gain and time-step: ";
  std::cin >> kp >> ki >> kd >> dt;
  // accepts parameter values and stores in the corresponding variables.
  std::cout << "\n Enter the desired velocity in m/s: ";
  std::cin >> setVelocity;  // accepts desired velocity.

  // create object of class Controller_PID
  std::shared_ptr<Controller_PID> myPID;
  myPID = std::make_shared < Controller_PID > (kp, ki, kd, dt);
  double newVelocity = myPID->compute(setVelocity, 5.0);
  // call the compute method to get the calculated velocity.

  // Output the calculated velocity
  std::cout << "New velocity is: " << newVelocity << " m/s" << std::endl;
  return 0;
}
