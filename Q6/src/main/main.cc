#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> v ={0,2,1,5,6,3};
  std::cout << solution.findKthLargest(v, 2) << std::endl;
  std::vector<int> v2 ={-2, 3,-1,2,5,6,10};
  std::cout << solution.findKthLargest(v2, 3) << std::endl;
}