#include "src/lib/solution.h"
#include <iostream>

int main() {
  BST bst1;
  std::vector<int> v = {7, 1, 6, 3, 5, 2, 8, 4, 9, 0};
  BST bst2(v);
  bst2.push(100);
  if(bst2.find(2) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }
  std::cout << bst2.find(5) << std::endl;
  bst2.print();
  bst2.erase(5);
  bst2.print();
}