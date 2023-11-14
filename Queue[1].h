#pragma once
#include "QueueNode.h"
#include <string>
using namespace std;
class Queue
{
private:
  QueueNode* frontNode = nullptr;
  QueueNode* rearNode = nullptr;
  int numItems = 0;
public:
  Queue() : frontNode(nullptr), rearNode(nullptr), numItems(0) {} 
  void enqueue(int value);
  int dequeue();
  int front();
  bool isEmpty();
  int size();
};