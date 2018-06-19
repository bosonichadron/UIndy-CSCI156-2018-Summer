/*    @file SmartArray_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the SmartArray class
*/

#include "gtest/gtest.h"

#include "SmartArray.h"



TEST(size,1){
  SmartArray<int> a(0);
  EXPECT_EQ(a.size(), 0);
}

