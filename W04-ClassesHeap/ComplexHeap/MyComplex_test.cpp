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
TEST(add,1){
  MyComplex a(3,2);
  MyComplex b(1,7);
  EXPECT_EQ((a+b).getAsString(), "(4 + 9i)");
}
TEST(add,2){
  MyComplex a(3,5);
  MyComplex b(4,-3);
  EXPECT_EQ((a+b).getAsString(), "(7 + 2i)");
}
TEST(sub,1){
  MyComplex a(3,2);
  MyComplex b(1,7);
  MyComplex c= a-b;
  EXPECT_DOUBLE_EQ(c.getReal(),2);
  EXPECT_DOUBLE_EQ(c.getImaginary(),-5);
}
TEST(sub,2){
  MyComplex a(3,5);
  MyComplex b(4,-3);
  MyComplex c= a-b;
  EXPECT_DOUBLE_EQ(c.getReal(),-1);
  EXPECT_DOUBLE_EQ(c.getImaginary(),8);
}
TEST(mult,1){
  MyComplex a(3,2);
  MyComplex b(1,7);
  MyComplex c= a*b;
  EXPECT_DOUBLE_EQ(c.getReal(),-11);
  EXPECT_DOUBLE_EQ(c.getImaginary(),23);
}
TEST(mult,2){
  MyComplex a(1,1);
  MyComplex c= a*a;
  EXPECT_DOUBLE_EQ(c.getReal(),0);
  EXPECT_DOUBLE_EQ(c.getImaginary(),2);
}
TEST(div,1){
  MyComplex a(2,3);
  MyComplex b(4,-5);
  MyComplex c= a/b;
  EXPECT_DOUBLE_EQ(c.getReal(),-7.0/41);
  EXPECT_DOUBLE_EQ(c.getImaginary(),22.0/41);
}

TEST(div,2){
  MyComplex a(3,2);
  MyComplex b(4,-3);
  MyComplex c= a/b;
  EXPECT_DOUBLE_EQ(c.getReal(),6.0/25);
  EXPECT_DOUBLE_EQ(c.getImaginary(),17.0/25);
}
TEST(equal,1){
  MyComplex a(2,3);
  MyComplex b(4,-5);
  EXPECT_EQ(a==b,false);
}
TEST(equal,2){
  MyComplex a(2,3);
  MyComplex b(2,3);
  EXPECT_EQ(a==b,true);
}
TEST(equal,3){
  MyComplex a(2,3);
  MyComplex b(2.00001,3);
  EXPECT_EQ(a==b,true);
}
TEST(equal,4){
  MyComplex a(2,3);
  MyComplex b(2,3.00001);
  EXPECT_EQ(a==b,true);
}
TEST(equal,5){
  MyComplex a(2,3);
  MyComplex b(2.00001,3.00001);
  EXPECT_EQ(a==b,true);
}
TEST(equal,6){
  MyComplex a(2,3);
  MyComplex b(2.0002,3);
  EXPECT_EQ(a==b,false);
}
TEST(equal,7){
  MyComplex a(2,3);
  MyComplex b(2,3.0002);
  EXPECT_EQ(a==b,false);
}