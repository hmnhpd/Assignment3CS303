#pragma once
#include <string>
#include "StackNode.h"
using namespace std;
class Stack
{
private:
  StackNode* top = nullptr;
public:
  void push(char value);
  char pop();
  bool isEmpty();
  char peek();
  bool isBalanced(string infix);
  int precedence(char op);
  string infixToPostfix(string infix, Stack s);
};