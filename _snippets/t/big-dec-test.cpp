#include "../big.h"

#include <gtest/gtest.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>


TEST(BigDecInt, TestInit) {
  ASSERT_EQ(big::DecInt(    "1").digits_count(), 1);
  ASSERT_EQ(big::DecInt(   "-1").digits_count(), 1);
  ASSERT_EQ(big::DecInt(   "+1").digits_count(), 1);
  ASSERT_EQ(big::DecInt(  "001").digits_count(), 1);
  ASSERT_EQ(big::DecInt( "-001").digits_count(), 1);
  ASSERT_EQ(big::DecInt( "+001").digits_count(), 1);
  ASSERT_EQ(big::DecInt(   "10").digits_count(), 2);
  ASSERT_EQ(big::DecInt("00010").digits_count(), 2);
  ASSERT_EQ(big::DecInt(    "0").digits_count(), 0);
  ASSERT_EQ(big::DecInt( "0000").digits_count(), 0);

  ASSERT_EQ((std::string)big::DecInt(    "0"),    "0");
  ASSERT_EQ((std::string)big::DecInt(   "-0"),    "0");
  ASSERT_EQ((std::string)big::DecInt(   "+0"),    "0");
  ASSERT_EQ((std::string)big::DecInt( "0001"),    "1");
  ASSERT_EQ((std::string)big::DecInt("-0001"),   "-1");
  ASSERT_EQ((std::string)big::DecInt("+0001"),    "1");
  ASSERT_EQ((std::string)big::DecInt( "0123"),  "123");
  ASSERT_EQ((std::string)big::DecInt("-0123"), "-123");
  ASSERT_EQ((std::string)big::DecInt("+0123"),  "123");
  ASSERT_EQ((std::string)big::DecInt(   "-0"),    "0");
  ASSERT_EQ((std::string)big::DecInt(   "+0"),    "0");
  ASSERT_EQ((std::string)big::DecInt("-0123"), "-123");

  ASSERT_EQ((std::string)big::DecInt(      0),    "0");
  ASSERT_EQ((std::string)big::DecInt(      1),    "1");
  ASSERT_EQ((std::string)big::DecInt(     -1),   "-1");
  ASSERT_EQ((std::string)big::DecInt(    123),  "123");
  ASSERT_EQ((std::string)big::DecInt(   -123), "-123");

  ASSERT_FALSE(big::DecInt(      0).is_negative());
  ASSERT_FALSE(big::DecInt(      0).is_positive());
  ASSERT_TRUE (big::DecInt(      0).is_zero());

  ASSERT_TRUE (big::DecInt(      1).is_positive());
  ASSERT_FALSE(big::DecInt(      1).is_negative());
  ASSERT_FALSE(big::DecInt(      1).is_zero());

  ASSERT_FALSE(big::DecInt(     -1).is_positive());
  ASSERT_TRUE (big::DecInt(     -1).is_negative());
  ASSERT_FALSE (big::DecInt(     -1).is_zero());

  ASSERT_EQ((std::string)big::DecInt::ONE, "1");
  ASSERT_EQ((std::string)big::DecInt::ZERO, "0");
  ASSERT_EQ((std::string)big::DecInt(), "0");

  ASSERT_EQ((std::string)big::DecInt(big::DecInt(-123)), "-123");
  ASSERT_EQ((std::string)big::DecInt(big::DecInt("-123")), "-123");
}

TEST(BigDecInt, TestComparision) {
  big::DecInt a, b(12), o(1);
  ASSERT_EQ((std::string)a, "0");
  ASSERT_EQ((std::string)b, "12");
  a = b;
  ASSERT_EQ((std::string)a, "12");
  ASSERT_EQ((std::string)b, "12");

  ASSERT_EQ(big::DecInt(), big::DecInt::ZERO);
  ASSERT_EQ(o, big::DecInt::ONE);

  big::DecInt minus_super = std::string("-10000000000000000000000000000000000000000000001");
  big::DecInt minus_many = std::string("-10000000000000000000000000000000000000000000000");
  big::DecInt minus_two = -2;
  big::DecInt minus_one = -1;
  big::DecInt zero = 0;
  big::DecInt plus_one = 1;
  big::DecInt plus_two = 2;
  big::DecInt plus_many = std::string("10000000000000000000000000000000000000000000000");
  big::DecInt plus_super = std::string("10000000000000000000000000000000000000000000001");

  ASSERT_TRUE (minus_many == minus_many);
  ASSERT_TRUE (plus_many == plus_many);
  ASSERT_TRUE (zero == zero);
  ASSERT_TRUE (minus_one == minus_one);

  ASSERT_TRUE (zero != plus_one);
  ASSERT_TRUE (plus_one != minus_one);
  ASSERT_TRUE (minus_many != plus_many);
  ASSERT_TRUE (minus_many != zero);

  ASSERT_TRUE (minus_super < minus_many);
  ASSERT_TRUE (minus_many < minus_two);
  ASSERT_TRUE (minus_two < minus_one);
  ASSERT_TRUE (minus_one < zero);
  ASSERT_TRUE (zero < plus_one);
  ASSERT_TRUE (plus_one < plus_two);
  ASSERT_TRUE (plus_two < plus_many);
  ASSERT_TRUE (minus_many < plus_many);
  ASSERT_TRUE (plus_many < plus_super);

  ASSERT_TRUE (minus_many > minus_super);
  ASSERT_TRUE (minus_two > minus_many);
  ASSERT_TRUE (minus_one > minus_two);
  ASSERT_TRUE (zero > minus_one);
  ASSERT_TRUE (plus_one > zero);
  ASSERT_TRUE (plus_two > plus_one);
  ASSERT_TRUE (plus_many > plus_two);
  ASSERT_TRUE (plus_many > minus_many);
  ASSERT_TRUE (plus_super > plus_many);

  ASSERT_FALSE(minus_super > minus_many);
  ASSERT_FALSE(minus_many > minus_two);
  ASSERT_FALSE(minus_two > minus_one);
  ASSERT_FALSE(minus_one > zero);
  ASSERT_FALSE(zero > plus_one);
  ASSERT_FALSE(plus_one > plus_two);
  ASSERT_FALSE(plus_two > plus_many);
  ASSERT_FALSE(minus_many > plus_many);
  ASSERT_FALSE(plus_many > plus_super);

  ASSERT_FALSE(minus_many < minus_super);
  ASSERT_FALSE(minus_two < minus_many);
  ASSERT_FALSE(minus_one < minus_two);
  ASSERT_FALSE(zero < minus_one);
  ASSERT_FALSE(plus_one < zero);
  ASSERT_FALSE(plus_two < plus_one);
  ASSERT_FALSE(plus_many < plus_two);
  ASSERT_FALSE(plus_many < minus_many);
  ASSERT_FALSE(plus_super < plus_many);

  ASSERT_FALSE(minus_many < minus_many);
  ASSERT_FALSE(minus_two < minus_two);
  ASSERT_FALSE(minus_one < minus_one);
  ASSERT_FALSE(zero < zero);
  ASSERT_FALSE(plus_one < plus_one);
  ASSERT_FALSE(plus_two < plus_two);

  ASSERT_FALSE (minus_two < minus_many);
  ASSERT_FALSE (minus_one < minus_two);
  ASSERT_FALSE (zero < minus_one);
  ASSERT_FALSE (plus_one < zero);
  ASSERT_FALSE (plus_two < plus_one);
  ASSERT_FALSE (plus_many < plus_two);
  ASSERT_FALSE (plus_many < minus_many);

  ASSERT_TRUE (minus_super <= minus_many);
  ASSERT_TRUE (minus_many <= minus_two);
  ASSERT_TRUE (minus_two <= minus_one);
  ASSERT_TRUE (minus_one <= zero);
  ASSERT_TRUE (zero <= plus_one);
  ASSERT_TRUE (plus_one <= plus_two);
  ASSERT_TRUE (plus_two <= plus_many);
  ASSERT_TRUE (minus_many <= plus_many);
  ASSERT_TRUE (plus_many <= plus_super);

  ASSERT_TRUE (minus_many <= minus_many);
  ASSERT_TRUE (plus_many <= plus_many);
  ASSERT_TRUE (zero <= zero);
  ASSERT_TRUE (minus_one <= minus_one);

  ASSERT_TRUE (minus_many >= minus_many);
  ASSERT_TRUE (plus_many >= plus_many);
  ASSERT_TRUE (zero >= zero);
  ASSERT_TRUE (minus_one >= minus_one);
}
