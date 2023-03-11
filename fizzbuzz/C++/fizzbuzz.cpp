#include <iostream>
#include "gtest/gtest.h" 
using namespace std;

//For loop based Fizzbuzz
int main(int argc, char **argv) {
  for (int i = 1; i <= 100; i++){
    if (i % 5 == 0 && i % 3 == 0) {
      cout << "FizzBuzz\n";
    }
    else if (i % 3 == 0) {
      cout << "Fizz\n";
    }  
    else if (i % 5 == 0) {
      cout << "Buzz\n";
    }
    else {
      cout << i << "\n";
    }
  }
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

}

//Function based Fizzbuzz created to use Gtest

string fizzbuzz(int i){
  if (i % 5 == 0 && i % 3 == 0) {
      return "FizzBuzz";
    }
    else if (i % 3 == 0) {
      return "Fizz";
    }
    else if (i % 5 == 0) {
      return "Buzz";
    }
    else {
      return to_string(i);
    }
}

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
