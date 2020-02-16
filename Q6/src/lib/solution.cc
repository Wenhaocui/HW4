#include "solution.h"
#include <iostream>
#include <queue>


int Solution::findKthLargest(std::vector<int>& v, int k) {
  std::priority_queue<int, std::vector<int>> q;
  int len=v.size();
  for(int i=0; i<v.size(); i++){
    q.push(v[i]);
  }
  while(q.size() > len-k+1){
    q.pop();
  }
  return q.top();
}

