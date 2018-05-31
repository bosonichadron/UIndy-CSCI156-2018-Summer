/*    @file MyComplex_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the MyComplex class
*/

#include "gtest/gtest.h"

#include "MyComplex.h"

ostream& operator<<(ostream &o, const MyComplex &r){
  o << r.getAsString();
  return o;
}

// constructor & getAsString
TEST(construct_string,1){
  MyComplex a(1,2);
  EXPECT_EQ(a.getAsString(), "(1 + 2i)");
}