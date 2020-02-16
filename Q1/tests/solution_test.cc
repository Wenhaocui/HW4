#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Solution solution;
  std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> expected = {0, 2, 4, 6, 8};
  EXPECT_EQ(solution.CopyIf(v), expected);
}

TEST(Test2, HandlesTest2) {
  Solution solution;
  std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> expected = {0, 1, 4, 9, 16, 25, 36, 49, 64 };
  EXPECT_EQ(solution.Transform(v), expected);
}

TEST(Test3, HandlesTest3) {
  Solution solution;
  std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int sum = solution.Accumulate(v);
  EXPECT_EQ(sum, 36);
}