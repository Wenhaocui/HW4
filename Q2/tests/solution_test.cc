#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  EXPECT_EQ(mx.GetParentIndex(0) , -1);
  EXPECT_EQ(mx.GetParentIndex(1) , 0);
}

TEST(Test2, HandlesTest2) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  EXPECT_EQ(mx.GetLeftIndex(0), 1);
  EXPECT_EQ(mx.GetLeftIndex(6), -1);
}

TEST(Test3, HandlesTest3) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  EXPECT_EQ(mx.GetRightIndex(0), 2);
  EXPECT_EQ(mx.GetRightIndex(6), -1);
}

TEST(Test4, HandlesTest4) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  EXPECT_EQ(mx.GetLargestChildIndex(0), 2);
  EXPECT_EQ(mx.GetLargestChildIndex(6), -1);
}

TEST(Test5, HandlesTest5) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  EXPECT_EQ(mx.top(), 7);
}

TEST(Test6, HandlesTest6) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  testing::internal::CaptureStdout();
  mx.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "7 4 6 1 3 2 5 \n");
}
TEST(Test7, HandlesTest7) {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.pop();
  testing::internal::CaptureStdout();
  mx.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "5 4 1 3 2 \n");
}
