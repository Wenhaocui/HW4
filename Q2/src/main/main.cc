#include "src/lib/solution.h"
#include <iostream>

int main() {
  MaxHeap mx;
  mx.push(1);
  mx.push(2);
  mx.push(3);
  mx.push(4);
  mx.push(5);
  mx.push(6);
  mx.push(7);
  mx.print();
  mx.pop();
  mx.print();
  std::cout << mx.GetParentIndex(0) << std::endl;
  std::cout << mx.GetParentIndex(1) << std::endl;
  std::cout << mx.GetParent(0) << std::endl;
  std::cout << mx.GetParent(1) << std::endl;

  std::cout << mx.GetLeftIndex(0) << std::endl;
  std::cout << mx.GetLeftIndex(6) << std::endl;
  std::cout << mx.GetLeft(0) << std::endl;
  std::cout << mx.GetLeft(6) << std::endl;
  
  std::cout << mx.GetRightIndex(0) << std::endl;
  std::cout << mx.GetRightIndex(6) << std::endl;
  std::cout << mx.GetRight(0) << std::endl;
  std::cout << mx.GetRight(6) << std::endl;
  
  std::cout << mx.GetLargestChildIndex(0) << std::endl;
  std::cout << mx.GetLargestChildIndex(6) << std::endl;
  
  std::cout << mx.top() << std::endl;
}