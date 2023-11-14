#pragma once
#include <iostream>
#include <string>

struct StackNode {
  char value;
  StackNode* next;

  StackNode(char value, StackNode* next) : value(value), next(next) {}

};