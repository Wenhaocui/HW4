#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Solution solution;
  std::vector<int> v = {6, 7, 5, 4, 8, 9 ,3, 2, 10, 1};
  testing::internal::CaptureStdout();
  solution.HeapSort(v);
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "1 2 3 4 5 6 7 8 9 10 \n");
}

