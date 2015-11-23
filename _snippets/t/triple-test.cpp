#include "../triple.h"

#include <gtest/gtest.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>


TEST(TestTriple, TestInit) {
  std::triple<int, double, std::string> a;
	ASSERT_EQ(a.first, 0);
  ASSERT_EQ(a.second, 0.0);
  ASSERT_EQ(a.third, std::string(""));
  a = std::make_triple(1, 1.0, "1");
  ASSERT_EQ(a.first, 1);
  ASSERT_EQ(a.second, 1.0);
  ASSERT_EQ(a.third, std::string("1"));
}

TEST(TestTriple, TestEq) {   // a == b
  std::triple<int, double, std::string> a = std::make_triple(1, 1.0, "1");
  std::triple<int, double, std::string> b = std::make_triple(1, 1.0, "1");

	ASSERT_TRUE (a == b);
  ASSERT_FALSE(a != b);
  ASSERT_FALSE(a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_TRUE (a >= b);

  ASSERT_TRUE (b == a);
  ASSERT_FALSE(b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_TRUE (b <= a);
  ASSERT_FALSE(b >  a);
  ASSERT_TRUE (b >= a);
}

TEST(TestTriple, TestLess1_1) {   // a < b (first)
  std::triple<int, double, std::string> a = std::make_triple(0, 1, "a");
  std::triple<int, double, std::string> b = std::make_triple(1, 0, "z");

  ASSERT_FALSE(a == b);
  ASSERT_TRUE (a != b);
  ASSERT_TRUE (a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_FALSE(a >= b);

  ASSERT_FALSE(b == a);
  ASSERT_TRUE (b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_FALSE(b <= a);
  ASSERT_TRUE (b >  a);
  ASSERT_TRUE (b >= a);
}

TEST(TestTriple, TestLess1_2) {   // a < b (first)
  std::triple<int, double, std::string> a = std::make_triple(0, 0, "z");
  std::triple<int, double, std::string> b = std::make_triple(1, 1, "a");

  ASSERT_FALSE(a == b);
  ASSERT_TRUE (a != b);
  ASSERT_TRUE (a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_FALSE(a >= b);

  ASSERT_FALSE(b == a);
  ASSERT_TRUE (b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_FALSE(b <= a);
  ASSERT_TRUE (b >  a);
  ASSERT_TRUE (b >= a);
}


TEST(TestTriple, TestLess2_1) {   // a < b  (second)
  std::triple<int, double, std::string> a = std::make_triple(1, 0.0, "z");
  std::triple<int, double, std::string> b = std::make_triple(1, 0.1, "a");

  ASSERT_FALSE(a == b);
  ASSERT_TRUE (a != b);
  ASSERT_TRUE (a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_FALSE(a >= b);

  ASSERT_FALSE(b == a);
  ASSERT_TRUE (b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_FALSE(b <= a);
  ASSERT_TRUE (b >  a);
  ASSERT_TRUE (b >= a);
}

TEST(TestTriple, TestLess2_2) {   // a < b  (second)
  std::triple<int, double, std::string> a = std::make_triple(1, 0.0, "a");
  std::triple<int, double, std::string> b = std::make_triple(1, 0.1, "z");

  ASSERT_FALSE(a == b);
  ASSERT_TRUE (a != b);
  ASSERT_TRUE (a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_FALSE(a >= b);

  ASSERT_FALSE(b == a);
  ASSERT_TRUE (b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_FALSE(b <= a);
  ASSERT_TRUE (b >  a);
  ASSERT_TRUE (b >= a);
}

TEST(TestTriple, TestLess3) {   // a < b (third)
  std::triple<int, double, std::string> a = std::make_triple(1, 0.1, "1");
  std::triple<int, double, std::string> b = std::make_triple(1, 0.1, "2");

  ASSERT_FALSE(a == b);
  ASSERT_TRUE (a != b);
  ASSERT_TRUE (a <  b);
  ASSERT_TRUE (a <= b);
  ASSERT_FALSE(a >  b);
  ASSERT_FALSE(a >= b);

  ASSERT_FALSE(b == a);
  ASSERT_TRUE (b != a);
  ASSERT_FALSE(b <  a);
  ASSERT_FALSE(b <= a);
  ASSERT_TRUE (b >  a);
  ASSERT_TRUE (b >= a);
}

TEST(TestTriple, TestSet) {   // a == b
  std::set< std::triple<int, double, std::string> > s;
  s.insert(std::make_triple(2, 0.0, std::string("z")));   // 3
  s.insert(std::make_triple(1, 0.2, std::string("z")));   // 1
  s.insert(std::make_triple(1, 0.1, std::string("z")));   // 0
  s.insert(std::make_triple(1, 0.2, std::string("z")));   // 1
  s.insert(std::make_triple(2, 0.0, std::string("z")));   // 3
  s.insert(std::make_triple(2, 0.0, std::string("a")));   // 2

  std::vector< std::triple<int, double, std::string> > v;
  std::copy(s.begin(), s.end(), std::back_inserter(v));

  ASSERT_EQ(v.size(), 4);
  ASSERT_EQ(v[0], std::make_triple(1, 0.1, std::string("z")));
  ASSERT_EQ(v[1], std::make_triple(1, 0.2, std::string("z")));
  ASSERT_EQ(v[2], std::make_triple(2, 0.0, std::string("a")));
  ASSERT_EQ(v[3], std::make_triple(2, 0.0, std::string("z")));
}
