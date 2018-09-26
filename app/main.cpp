// "Copyright [2018] <Anirudh Topiwala>"
/**
 * @file    main.cpp
 * @author  Anirudh Topiwala (anirudhtopiwala)
 * @author  Part 1 : Anirudh Topiwala (Driver) , Bharat Mathur (Navigator)
 *
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
  Controller_PID control(1.0, 1.0, 1.0, 1.0);
  return 0;
}
