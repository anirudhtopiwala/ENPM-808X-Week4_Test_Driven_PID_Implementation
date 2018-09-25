/**
 * Copyright 2018 Anirudh Topiwala
 *
 * @file    Controller_PID.hpp
 * @author  Anirudh Topiwala (anirudhtopiwala)
 * @date    9/23/2018
 * @version 1.0
 *
 * @brief   Controller_PID test .
 *
 * @section DESCRIPTION
 *
 * This is a test for Controller_PID class and its methods .
 */

#include <gtest/gtest.h>
#include <math.h>
#include <stdio.h>
#include <memory>
#include "Controller_PID.hpp"

Controller_PID control(1, 0, 0, 0.0);

/**
*@brief Test Compute Function for a pure P controller
*/
TEST(Controller_PIDTest, test_compute_kp) {
  EXPECT_EQ(control.compute(5.0, 7.0), 4.0);
}
/**
*@brief Test to check if dt is 0
*/
TEST(Controller_PIDTest, test_check_dt) {
  EXPECT_EQ(std::isnan(control.compute(5.0,7.0)), 1);
}
