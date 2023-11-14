#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;

void Queue::enqueue(int value) {
  QueueNode* newNode = new QueueNode(value, nullptr);
  if (isEmpty()){
    cout << "Queue is Empty." << endl;
    frontNode = newNode;
    rearNode = newNode;
  }else{
    rearNode->next = newNode;
    rearNode = newNode;
  }
  numItems++;
}

int Queue::dequeue() {
  QueueNode *tempNode = nullptr;
  int value = 0;
  if (isEmpty()){
    cout << "Queue is Empty." << endl;
    return value;
  }else{
    tempNode = frontNode;
    frontNode = frontNode->next;
    value = tempNode->data;
    delete tempNode;
    return value;
    numItems--;
  }
  
}

int Queue::front() {
  int value = 0;
  if (isEmpty()){
    cout << "Queue is Empty." << endl;
    return value;
  }else{
    value = frontNode->data;
    return value;
  }
}

bool Queue::isEmpty() {
  if (frontNode == nullptr && rearNode == nullptr){
    return true;
  }else{
    return false;
  }
}

int Queue::size() {
  return numItems;
  // rest of the code
}

