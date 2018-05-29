/* Name: < Fill me in>
   Date: < Fill me in>
   Desc: Unit tests for the Rational Class
*/
#include "gtest/gtest.h"
#include "Rational.h"


TEST(getNumerator, Default){
  Rational a;
  EXPECT_EQ(a.getNumerator(), 1);
}

TEST(getNumerator, Overloaded1){
  Rational a(5,2);
  EXPECT_EQ(a.getNumerator(), 5);
}

TEST(getNumerator, Overloaded2){
  Rational a(-10,2);
  EXPECT_EQ(a.getNumerator(), -10);
}

TEST(getNumerator, Overloaded3){
  Rational a(9);
  EXPECT_EQ(a.getNumerator(), 9);
}


TEST(getDenominator, Default){
  Rational a;
  EXPECT_EQ(a.getDenominator(), 1);
}

TEST(getDenominator, Overloaded1){
  Rational a(5,2);
  EXPECT_EQ(a.getDenominator(), 2);
}

TEST(getDenominator, Overloaded2){
  Rational a(-10,20);
  EXPECT_EQ(a.getDenominator(), 20);
}

// Write more tests here!