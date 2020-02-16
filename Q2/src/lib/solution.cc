#include "solution.h"
#include <iostream>


MaxHeap::MaxHeap(){
  data_ = {};
}

int MaxHeap::GetParentIndex(int i){
  if(i==0){
    return -1;
  }
  return (i-1)/2;
}

int MaxHeap::GetLeftIndex(int i){
  if((2 * i) + 1 >= data_.size()){
    return -1;
  }
  return (2 * i) + 1;
}

int MaxHeap::GetRightIndex(int i){
  if((2 * i) + 2 >= data_.size()){
    return -1;
  }
  return (2 * i) + 2;
}

int MaxHeap::GetLargestChildIndex(int i){
  int left_index = GetLeftIndex(i);
  int right_index = GetRightIndex(i);
  if(left_index == -1 && right_index == -1){
    return -1;
  }
  if(right_index == -1){
    return left_index;
  }
  int left = GetLeft(i);
  int right = GetRight(i);
  if(left < right){
    return right_index;
  }else{
    return left_index;
  }
}

int MaxHeap::GetLeft(int i){
  if((2 * i) + 1 >= data_.size()){
    return -1;
  }
  return data_[(2 * i) + 1];
}

int MaxHeap::GetRight(int i){
  if((2 * i) + 2 >= data_.size()){
    return -1;
  }
  return data_[(2 * i) + 2];
}

int MaxHeap::GetParent(int i){
  if(i==0){
    return -1;
  }
  return data_[(i-1)/2];
}

int MaxHeap::top(){
  if(data_.size() == 0){
    return -1;
  }
  return data_[0];
}

void MaxHeap::push(int v){
  data_.push_back(v);
  for(int i=0; i< data_.size();i++){
    TrickleUp(i);
  }
}

void MaxHeap::pop(){
  data_.erase(data_.begin());
  for(int i=0; i< data_.size();i++){
    TrickleUp(i);
  }
}

void MaxHeap::TrickleUp(int i){
  while(i != 0 && GetParent(i) < data_[i]){
    std::swap(data_[i], data_[GetParentIndex(i)]);
    i = GetParentIndex(i);
  }
}

void MaxHeap::TrickleDown(int i){
  while(i != 0 && GetParent(i) > data_[i]){
    std::swap(data_[i], data_[GetParentIndex(i)]);
    i = GetParentIndex(i);
  }
}

void MaxHeap::print(){
  for(int i=0; i< data_.size();i++){
    std::cout << data_[i] << " ";
  }
  std::cout << std::endl;
}