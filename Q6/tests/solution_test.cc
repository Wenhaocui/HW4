#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Solution solution;
  std::vector<int> v ={0,2,1,5,6,3};
  EXPECT_EQ(solution.findKthLargest(v, 2) , 5);
}

TEST(Test2, HandlesTest2) {
  Solution solution;
  std::vector<int> v ={-2, 3,-1,2,5,6,10};
  EXPECT_EQ(solution.findKthLargest(v, 3) , 5);
}
