#include "gtest/gtest.h"
#include "fizzbuzz.h"

TEST(FizzBuzzTest, TestOutputForOne) {
  EXPECT_EQ(fizzbuzz(1), "1");
}

TEST(FizzBuzzTest, TestOutputForThree) {
  EXPECT_EQ(fizzbuzz(3), "Fizz");
}

TEST(FizzBuzzTest, TestOutputForFive) {
  EXPECT_EQ(fizzbuzz(5), "Buzz");
}

TEST(FizzBuzzTest, TestOutputForFifteen) {
  EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
