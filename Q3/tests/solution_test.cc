#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  std::vector<int> v = {7, 1, 6, 3, 5, 2, 8, 4, 9, 10};
  BST bst2(v);
  bst2.push(0);
  testing::internal::CaptureStdout();
  bst2.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "7 1 0 6 3 2 5 4 8 9 10 \n");
  
}

TEST(Test2, HandlesTest2) {
  std::vector<int> v = {7, 1, 6, 3, 5, 2, 8, 4, 9, 10};
  BST bst2(v);
  EXPECT_EQ(bst2.find(2), true);
  EXPECT_EQ(bst2.find(12), false);
  
}

TEST(Test3, HandlesTest3) {
  std::vector<int> v = {7, 1, 6, 3, 5, 2, 8, 4, 9, 10};
  BST bst2(v);
  bst2.erase(4);
  testing::internal::CaptureStdout();
  bst2.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "7 1 6 3 2 5 8 9 10 \n");
}