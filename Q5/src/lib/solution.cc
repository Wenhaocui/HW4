#include "solution.h"
#include <iostream>
#include <queue>


void Solution::HeapSort(std::vector<int>& v){
  std::priority_queue<int, std::vector<int>, std::greater<int> >p;
  for(int i=0;i<v.size();i++){
		p.push(v[i]);
	}
  for(int i=0;i<v.size();i++){
		std::cout << p.top() << " ";
		p.pop();
	}
  std::cout << std::endl;
}