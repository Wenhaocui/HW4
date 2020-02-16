#include "solution.h"
#include <iostream>
#include <numeric>



std::vector<int> Solution::CopyIf(std::vector<int> v){
  std::vector<int> result(v.size());
  auto it = std::copy_if(v.begin(), v.end(), result.begin(), [](int i){return i%2==0;});
  result.resize(std::distance(result.begin(),it));
  return result;
}

std::vector<int> Solution::Transform(std::vector<int> in){
  std::vector<int> out(in.size());
  std::transform(in.begin(), in.end(), out.begin(), [](int i){return (i*i);});
  return out;
}

int Solution::Accumulate(std::vector<int> v){
  int sum = std::accumulate(v.begin(), v.end(), 0); 
  return sum;

}
