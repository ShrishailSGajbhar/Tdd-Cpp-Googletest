#include <gtest/gtest.h>
#include <string>
#include "fizzbuzz.h"

TEST(TestTddFizzBuzz, CanCallFizzBuzz) {
  GTEST_ASSERT_EQ("1", fizzBuzz(1));
}

TEST(TestTddFizzBuzz, GetFizzIfThree) {
  GTEST_ASSERT_EQ("Fizz", fizzBuzz(3));
}

TEST(TestTddFizzBuzz, GetBuzzIfFive) {
  GTEST_ASSERT_EQ("Buzz", fizzBuzz(5));
}

TEST(TestTddFizzBuzz, GetFizzIfMultipleOfThree) {
  GTEST_ASSERT_EQ("Fizz", fizzBuzz(6));
}

TEST(TestTddFizzBuzz, GetBuzzIfMultipleOfFive) {
  GTEST_ASSERT_EQ("Buzz", fizzBuzz(10));
}

TEST(TestTddFizzBuzz, GetFizzBuzzIfMultipleOfThreeAndFive) {
  GTEST_ASSERT_EQ("FizzBuzz", fizzBuzz(15));
}
