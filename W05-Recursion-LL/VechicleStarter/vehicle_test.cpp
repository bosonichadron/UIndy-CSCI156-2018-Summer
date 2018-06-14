/*    @file vehicle_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the classes in the vehicle.h file:
			Bicycle, Car, Truck, Airplane
*/

#include "gtest/gtest.h"

#include "vehicle.h"

TEST(car,name){
  Car a;
  a.setName("Olds");
  EXPECT_EQ(a.getName(), "Olds");
}

// Insert more tests here
