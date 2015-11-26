#include "../big.h"

#include <gtest/gtest.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>


TEST(BigDecimal, TestInit) {
  ASSERT_EQ(big::Decimal(    "1").digits_count(), 1);
  ASSERT_EQ(big::Decimal(   "-1").digits_count(), 1);
  ASSERT_EQ(big::Decimal(   "+1").digits_count(), 1);
  ASSERT_EQ(big::Decimal(  "001").digits_count(), 1);
  ASSERT_EQ(big::Decimal( "-001").digits_count(), 1);
  ASSERT_EQ(big::Decimal( "+001").digits_count(), 1);
  ASSERT_EQ(big::Decimal(   "10").digits_count(), 2);
  ASSERT_EQ(big::Decimal("00010").digits_count(), 2);
  ASSERT_EQ(big::Decimal(    "0").digits_count(), 0);
  ASSERT_EQ(big::Decimal( "0000").digits_count(), 0);

  ASSERT_EQ(big::Decimal(      1).digits_count(), 1);
  ASSERT_EQ(big::Decimal(     -1).digits_count(), 1);
  ASSERT_EQ(big::Decimal(     +1).digits_count(), 1);
  ASSERT_EQ(big::Decimal(     10).digits_count(), 2);
  ASSERT_EQ(big::Decimal(-999999).digits_count(), 6);
  ASSERT_EQ(big::Decimal(      0).digits_count(), 0);

  ASSERT_EQ((std::string)big::Decimal(    "0"),    "0");
  ASSERT_EQ((std::string)big::Decimal(   "-0"),    "0");
  ASSERT_EQ((std::string)big::Decimal(   "+0"),    "0");
  ASSERT_EQ((std::string)big::Decimal( "0001"),    "1");
  ASSERT_EQ((std::string)big::Decimal("-0001"),   "-1");
  ASSERT_EQ((std::string)big::Decimal("+0001"),    "1");
  ASSERT_EQ((std::string)big::Decimal( "0123"),  "123");
  ASSERT_EQ((std::string)big::Decimal("-0123"), "-123");
  ASSERT_EQ((std::string)big::Decimal("+0123"),  "123");
  ASSERT_EQ((std::string)big::Decimal(   "-0"),    "0");
  ASSERT_EQ((std::string)big::Decimal(   "+0"),    "0");
  ASSERT_EQ((std::string)big::Decimal("-0123"), "-123");

  ASSERT_EQ((std::string)big::Decimal(      0),    "0");
  ASSERT_EQ((std::string)big::Decimal(      1),    "1");
  ASSERT_EQ((std::string)big::Decimal(     -1),   "-1");
  ASSERT_EQ((std::string)big::Decimal(    123),  "123");
  ASSERT_EQ((std::string)big::Decimal(   -123), "-123");

  ASSERT_FALSE(big::Decimal(      0).is_negative());
  ASSERT_FALSE(big::Decimal(      0).is_positive());
  ASSERT_TRUE (big::Decimal(      0).is_zero());

  ASSERT_TRUE (big::Decimal(      1).is_positive());
  ASSERT_FALSE(big::Decimal(      1).is_negative());
  ASSERT_FALSE(big::Decimal(      1).is_zero());

  ASSERT_FALSE(big::Decimal(     -1).is_positive());
  ASSERT_TRUE (big::Decimal(     -1).is_negative());
  ASSERT_FALSE (big::Decimal(     -1).is_zero());

  ASSERT_EQ((std::string)big::Decimal::ONE, "1");
  ASSERT_EQ((std::string)big::Decimal::ZERO, "0");
  ASSERT_EQ((std::string)big::Decimal(), "0");

  ASSERT_EQ((std::string)big::Decimal(big::Decimal(-123)), "-123");
  ASSERT_EQ((std::string)big::Decimal(big::Decimal("-123")), "-123");
}

TEST(BigDecimal, TestComparision) {
  big::Decimal a, b(12), o(1);
  ASSERT_EQ((std::string)a, "0");
  ASSERT_EQ((std::string)b, "12");
  a = b;
  ASSERT_EQ((std::string)a, "12");
  ASSERT_EQ((std::string)b, "12");

  ASSERT_EQ(big::Decimal(), big::Decimal::ZERO);
  ASSERT_EQ(o, big::Decimal::ONE);

  big::Decimal minus_super = std::string("-10000000000000000000000000000000000000000000001");
  big::Decimal minus_many = std::string("-10000000000000000000000000000000000000000000000");
  big::Decimal minus_two = -2;
  big::Decimal minus_one = -1;
  big::Decimal zero = 0;
  big::Decimal plus_one = 1;
  big::Decimal plus_two = 2;
  big::Decimal plus_many = std::string("10000000000000000000000000000000000000000000000");
  big::Decimal plus_super = std::string("10000000000000000000000000000000000000000000001");

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


TEST(BigDecimal, TestAssign) {
  big::Decimal a = 13;
  big::Decimal b = "-100";
  big::Decimal x;

  ASSERT_FALSE (x == a);
  ASSERT_FALSE (x == b);
  ASSERT_TRUE  (x != a);
  ASSERT_TRUE  (x != b);

  x = a;

  ASSERT_TRUE  (x == a);
  ASSERT_FALSE (x == b);
  ASSERT_FALSE (x != a);
  ASSERT_TRUE  (x != b);

  x = b;

  ASSERT_FALSE (x == a);
  ASSERT_TRUE  (x == b);
  ASSERT_TRUE  (x != a);
  ASSERT_FALSE (x != b);
}


TEST(BigDecimal, TestAddition) {
  big::Decimal a, b(12), o(1);
  ASSERT_EQ(+big::Decimal(), big::Decimal());
  ASSERT_EQ(+big::Decimal(1), big::Decimal(1));
  ASSERT_EQ(+big::Decimal(-1), big::Decimal(-1));

  ASSERT_EQ(-big::Decimal(), big::Decimal());
  ASSERT_EQ(-big::Decimal(1), big::Decimal(-1));
  ASSERT_EQ(-big::Decimal(-1), big::Decimal(+1));

  big::Decimal x;
  x =  1; ASSERT_EQ(x++,  "1"); ASSERT_EQ(x, "2");
  x =  1; ASSERT_EQ(++x,  "2"); ASSERT_EQ(x, "2");
  x =  0; ASSERT_EQ(x++,  "0"); ASSERT_EQ(x, "1");
  x =  0; ASSERT_EQ(++x,  "1"); ASSERT_EQ(x, "1");
  x = -1; ASSERT_EQ(x++, "-1");
  ASSERT_EQ(x, std::string("0"));
  x = -1; ASSERT_EQ(++x,  "0"); ASSERT_EQ(x, "0");
  x = 0; x = -x; ASSERT_EQ(x++, "0"); ASSERT_EQ(x, "1");
  x = 0; x = -x; ASSERT_EQ(++x, "0"); ASSERT_EQ(x, "1");
}
