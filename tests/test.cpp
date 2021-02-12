#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

//Constructor Test Suite
TEST(EmptyConstructorTest1, noSetValues) {
   Rectangle rect;
   EXPECT_EQ(rect.get_width(), 0);
   EXPECT_EQ(rect.get_height(), 0);
}

TEST(EmptyConstructorTest2, setValues) {
   Rectangle rect;
   rect.set_width(2);
   rect.set_height(3);
   EXPECT_EQ(rect.get_width(), 2);
   EXPECT_EQ(rect.get_height(), 3);
}

TEST(ConstructorTest1, sameValues) {
   Rectangle rect(2, 2);
   EXPECT_EQ(rect.get_width(), 2);
   EXPECT_EQ(rect.get_height(), 2);
}

TEST(ConstructorTest2, diffValues) {
   Rectangle rect(2, 4);
   EXPECT_EQ(rect.get_width(), 2);
   EXPECT_EQ(rect.get_height(), 4);
}

TEST(ConstructorTest3, changedValues) {
   Rectangle rect(2, 4);
   rect.set_width(3);
   rect.set_height(5);
   EXPECT_EQ(rect.get_width(), 3);
   EXPECT_EQ(rect.get_height(), 5);
}

//Area Test Suite
TEST(AreaTest1, evaluateArea1) {
   Rectangle rect(2, 4);
   EXPECT_EQ(rect.area(), 8);
}

TEST(AreaTest2, evaluateArea2) {
   Rectangle rect(2, 2);
   EXPECT_EQ(rect.area(), 4);
}

TEST(AreaTest3, zeroArea) {
   Rectangle rect;
   EXPECT_EQ(rect.area(), 0);
}

TEST(AreaTest4, changedArea) {
   Rectangle rect;
   rect.set_width(5);
   rect.set_height(7);
   EXPECT_EQ(rect.area(), 35);
}

//Perimeter Test Suite
TEST(PerimeterTest1, evaluatePerimeter1) {
   Rectangle rect(2, 4);
   EXPECT_EQ(rect.perimeter(), 12);
}

TEST(PerimeterTest2, evaluatePerimeter2) {
   Rectangle rect(2, 2);
   EXPECT_EQ(rect.perimeter(), 8);
}

TEST(PerimeterTest3, zeroPerimeter) {
   Rectangle rect;
   EXPECT_EQ(rect.perimeter(), 0);
}

TEST(PerimeterTest4, changedPerimeter) {
   Rectangle rect;
   rect.set_width(5);
   rect.set_height(7);
   EXPECT_EQ(rect.perimeter(), 24);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
