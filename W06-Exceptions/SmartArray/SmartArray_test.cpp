/*    @file SmartArray_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the SmartArray class
*/

#include "gtest/gtest.h"

#include "SmartArray.h"



TEST(size,1){
  SmartArray<int> a;
  EXPECT_EQ(a.size(), 0);
}

TEST(size,2){
  SmartArray<int> a;
  a[3] = 10;
  EXPECT_EQ(a.size(), 4);
}

TEST(size,3){
  SmartArray<int> a;
  a[3] = 10;
  a[10] = 9;
  EXPECT_EQ(a.size(), 11);
}

TEST(bracket,1){
  SmartArray<int> a;
  a[3] = 10;
  EXPECT_EQ(a[3], 10);
}

TEST(bracket,2){
  SmartArray<int> a;
  a[3] = 10;
  a[10] = 9;
  EXPECT_EQ(a[10], 9);
}

TEST(bracket,exception){
  SmartArray<int> a;
  EXPECT_ANY_THROW( a[-3] );
}

TEST(bracket,block1){
  SmartArray<int> a;
  a[10] = 9;
  EXPECT_EQ(a[9], 0);
}

TEST(bracket,block2){
  SmartArray<int> a(55);
  a[10] = 9;
  EXPECT_EQ(a[9], 55);
}

TEST(bracket,block22){
  SmartArray<int> a(55);
  a[3] = 5;
  a[10] = 9;
  EXPECT_EQ(a[9], 55);
  cout << a << endl;
}

TEST(bracket,block3){
  SmartArray<string> a(" sleepy Trey");
  a[10] = " has a headache.";
  EXPECT_EQ(a[9], " sleepy Trey");
}

TEST(bracket,block4){
  SmartArray<string> a(" sleepy Trey");
  a[1] = "Jared";
  a[10] = " has a headache.";
  EXPECT_EQ(a[9], " sleepy Trey");
}

TEST(copy,1){
  SmartArray<string> a(" sleepy Trey");
  a[1] = "Jared";
  a[10] = " has a headache.";
  SmartArray<string> b(a);
  EXPECT_EQ(b[9], " sleepy Trey");
}

TEST(count,1){
  SmartArray<string> a(" sleepy Trey");
  a[1] = "Jared";
  a[10] = " has a headache.";
  EXPECT_EQ(a.count("Jared"), 1);
}

