#include "src/lib/solution.h"
#include <iostream>



int main() {
  Solution solution;
  std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> result = solution.CopyIf(v);
  std::vector<int> out = solution.Transform(v);
  for(int i=0; i<result.size(); i++){
    std::cout<< result[i] <<" ";
  }
  std::cout<<std::endl;
  for(int i=0; i<out.size(); i++){
    std::cout<< out[i] <<" ";
  }
  std::cout<<std::endl;
  std::cout<< solution.Accumulate(v)<<std::endl;
}


