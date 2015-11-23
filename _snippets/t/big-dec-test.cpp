#include "../big.h"

#include <gtest/gtest.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>


TEST(BigDecInt, TestInit) {
  ASSERT_EQ(big::DecInt("1").digits_count(), 1);
  ASSERT_EQ(big::DecInt("-1").digits_count(), 1);
  ASSERT_EQ(big::DecInt("+1").digits_count(), 1);
  ASSERT_EQ(big::DecInt("001").digits_count(), 1);
  ASSERT_EQ(big::DecInt("-001").digits_count(), 1);
  ASSERT_EQ(big::DecInt("+001").digits_count(), 1);
  ASSERT_EQ(big::DecInt("10").digits_count(), 2);
  ASSERT_EQ(big::DecInt("00010").digits_count(), 2);
  ASSERT_EQ(big::DecInt("0").digits_count(), 0);
  ASSERT_EQ(big::DecInt("0000").digits_count(), 0);

  ASSERT_EQ((std::string)big::DecInt("0"), "0");
  ASSERT_EQ((std::string)big::DecInt("-0"), "0");
  ASSERT_EQ((std::string)big::DecInt("+0"), "0");
  ASSERT_EQ((std::string)big::DecInt("0001"), "1");
  ASSERT_EQ((std::string)big::DecInt("-0001"), "-1");
  ASSERT_EQ((std::string)big::DecInt("+0001"), "1");
  ASSERT_EQ((std::string)big::DecInt("0123"), "123");
  ASSERT_EQ((std::string)big::DecInt("-0123"), "-123");
  ASSERT_EQ((std::string)big::DecInt("+0123"), "123");
  ASSERT_EQ((std::string)big::DecInt("-0"), "0");
  ASSERT_EQ((std::string)big::DecInt("+0"), "0");
  ASSERT_EQ((std::string)big::DecInt("-0123"), "-123");

  ASSERT_EQ((std::string)big::DecInt(0), "0");
  ASSERT_EQ((std::string)big::DecInt(1), "1");
  ASSERT_EQ((std::string)big::DecInt(-1), "-1");
  ASSERT_EQ((std::string)big::DecInt(123), "123");
  ASSERT_EQ((std::string)big::DecInt(-123), "-123");
}
