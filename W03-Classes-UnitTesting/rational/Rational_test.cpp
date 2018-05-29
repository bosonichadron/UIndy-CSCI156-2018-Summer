//#include <limits.h>
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


TEST(setDenominator, 1){
  Rational a;
  a.setDenominator(5);
  EXPECT_EQ(a.getDenominator(), 5);
}

TEST(setDenominator, 2){
  Rational a;
  a.setDenominator(5);
  EXPECT_EQ(a.getDenominator(), 5);
}

TEST(getNumerator, 3){
  Rational a(5.6);
  EXPECT_EQ(a.getNumerator(), 5);
}

TEST(setDenominator, ){
  Rational a;
  a.setDenominator(0);
  EXPECT_EQ(a.getDenominator(), 1);
}

TEST(equalto, 1){
  Rational a;
  Rational b;
  EXPECT_EQ(a.isEqualTo(b), true);
}

TEST(equalto, 2){
  Rational a(2,1);
  Rational b(2,1);
  EXPECT_EQ(a.isEqualTo(b), true);
}

TEST(equalto, 3){
  Rational a(2,1);
  Rational b(4,2);
  EXPECT_EQ(a.isEqualTo(b), true);
}

TEST(equalto, 4){
  Rational a(2,1);
  Rational b(-4,-2);
  EXPECT_EQ(a.isEqualTo(b), true);
}

TEST(equalto, 5){
  Rational a(2,1);
  Rational b(-4,2);
  EXPECT_EQ(a.isEqualTo(b), false);
}
