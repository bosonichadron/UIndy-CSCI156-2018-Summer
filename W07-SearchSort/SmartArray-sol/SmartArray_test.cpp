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

TEST(assign,1){
  SmartArray<string> a(" sleepy Trey");
  a[1] = "Jared";
  a[10] = " has a headache.";
  SmartArray<string> b;
  EXPECT_EQ(b.size(), 0);
  b = a;
  EXPECT_EQ(b[9], " sleepy Trey");
}

TEST(assign,2){
  SmartArray<string> a(" sleepy Trey");
  a[1] = "Jared";
  a[10] = " has a headache.";
  SmartArray<string> b;
  EXPECT_EQ(b.size(), 0);
  b = a;
  b[30] = "no";
  EXPECT_EQ(b[9], " sleepy Trey");
  EXPECT_EQ(b.size(), 31);
  EXPECT_EQ(a.size(), 11);
}

TEST(equal,1){
  SmartArray<bool> a;
  SmartArray<bool> b;
  EXPECT_EQ(a == b, true);
}

TEST(equal,2){
  SmartArray<bool> a;
  a[0] = true;
  SmartArray<bool> b;
  EXPECT_EQ(a == b, false);
}

TEST(equal,3){
  SmartArray<bool> a;
  SmartArray<bool> b;
  b[10] = true;
  EXPECT_EQ(a == b, false);
}

TEST(equal,4){
  SmartArray<bool> a;
  a[10] = false;
  SmartArray<bool> b;
  b[10] = true;
  EXPECT_EQ(a == b, false);
}

TEST(equal,5){
  SmartArray<int> a;
  a[10] = 10;
  SmartArray<int> b;
  b[10] = 10;
  EXPECT_EQ(a == b, true);
}

TEST(addition,1){
  SmartArray<int> a;
  SmartArray<int> b;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c.size(), 0);
}

TEST(addition,sizetest1){
  SmartArray<int> a;
  a[0] = 5;
  SmartArray<int> b;
  b[0] = 6;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c.size(), 2);
}

TEST(addition,sizetest2){
  SmartArray<int> a;
  a[0] = 5;
  a[1] = 6;
  SmartArray<int> b;
  b[0] = 7;
  b[1] = 8;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c.size(), 4);
}

TEST(addition,value1){
  SmartArray<int> a;
  a[0] = 5;
  a[1] = 6;
  SmartArray<int> b;
  b[0] = 7;
  b[1] = 8;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c[0], 5);
  EXPECT_EQ(c[1], 6);
  EXPECT_EQ(c[2], 7);
  EXPECT_EQ(c[3], 8);
  EXPECT_EQ(a[0], 5);
  EXPECT_EQ(a[1], 6);
  EXPECT_EQ(b[0], 7);
  EXPECT_EQ(b[1], 8);
}

TEST(addition,value2){
  SmartArray<int> a;
  a[0] = 5;
  a[1] = 6;
  a[2] = 7;
  SmartArray<int> b;
  b[0] = 8;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c[0], 5);
  EXPECT_EQ(c[1], 6);
  EXPECT_EQ(c[2], 7);
  EXPECT_EQ(c[3], 8);
  EXPECT_EQ(a[0], 5);
  EXPECT_EQ(a[1], 6);
  EXPECT_EQ(a[2], 7);
  EXPECT_EQ(b[0], 8);
}

TEST(addition,value3){
  SmartArray<int> a;
  a[0] = 5;
  SmartArray<int> b;
  b[0] = 6;
  b[1] = 7;
  b[2] = 8;
  SmartArray<int> c = a + b;
  EXPECT_EQ(c[0], 5);
  EXPECT_EQ(c[1], 6);
  EXPECT_EQ(c[2], 7);
  EXPECT_EQ(c[3], 8);
  EXPECT_EQ(a[0], 5);
  EXPECT_EQ(b[0], 6);
  EXPECT_EQ(b[1], 7);
  EXPECT_EQ(b[2], 8);
}

TEST(addition,default_val1){
  SmartArray<int> a(5);
  a[0] = 5;
  SmartArray<int> b(6);
  b[0] = 6;
  SmartArray<int> c = a + b;
  c[5] = 99;
  EXPECT_EQ(c[2], 5);
}



