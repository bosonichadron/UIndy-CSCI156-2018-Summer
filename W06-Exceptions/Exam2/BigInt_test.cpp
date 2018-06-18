/*    @file BigInt_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >
			@description Tests for the BigInt class
*/

#include "gtest/gtest.h"

#include "BigInt.h"

TEST(constructor, one){
  BigInt a(0);
  EXPECT_EQ(a.getAsString(),"0");
}

TEST(constructor, 10){
  BigInt a(10);
  EXPECT_EQ(a.getAsString(),"10");
}

TEST(constructor, 2000000){
  BigInt a(2000000);
  EXPECT_EQ(a.getAsString(),"2,000,000");
}

TEST(constructor, 123){
  BigInt a(123456);
  EXPECT_EQ(a.getAsString(),"123,456");
}

TEST(constructor, def){
  BigInt a;
  EXPECT_EQ(a.getAsString(),"1");
}

TEST(add, one){
  BigInt a(5);
  BigInt b(10);
  BigInt c = a + b;
  EXPECT_EQ(c.getAsString(),"15");
}

TEST(add, two){
  BigInt a(10000);
  BigInt b(25000);
  BigInt c = a + b;
  EXPECT_EQ(c.getAsString(),"35,000");
}

TEST(add, three){
  BigInt a(20000000);
  BigInt b(57000000);
  BigInt c = a + b;
  EXPECT_EQ(c.getAsString(),"77,000,000");
}

TEST(setValue, 1){
  BigInt a;
  a.setValue(5);
  EXPECT_EQ(a.getAsString(),"5");
}

TEST(setValue, 2){
  BigInt a;
  a.setValue(5000);
  EXPECT_EQ(a.getAsString(),"5,000");
}

TEST(setValue, 3){
  BigInt a(78);
  a.setValue(0);
  EXPECT_EQ(a.getAsString(),"0");
}

TEST(less, 1){
  EXPECT_EQ(BigInt() < BigInt(), false);
}

TEST(less, 2){
  EXPECT_EQ(BigInt(5) < BigInt(2), false);
}

TEST(less, 3){
  EXPECT_EQ(BigInt(1000) < BigInt(20000), true);
}

TEST(less, 4){
  EXPECT_EQ(BigInt(567) < BigInt(567), false);
}

TEST(gt, 1){
  EXPECT_EQ(BigInt() > BigInt(), false);
}

TEST(gt, 2){
  EXPECT_EQ(BigInt(5) > BigInt(2), true);
}

TEST(gt, 3){
  EXPECT_EQ(BigInt(1000) > BigInt(20000), false);
}

TEST(gt, 4){
  EXPECT_EQ(BigInt(567) > BigInt(567), false);
}

TEST(gt, 5){
  EXPECT_EQ(BigInt(100000) > BigInt(10), true);
}


