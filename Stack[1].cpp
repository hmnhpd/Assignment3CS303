#include "Stack.h"


//PRE: Passing an item into the function to get pushed onto the top of the stack
void Stack::push(char item) {
  StackNode* newElement = new StackNode(item, top);
  top = newElement;
}
//POST: element is pushed onto the top of the stack

//PRE: element is needing to be popped from stack
char Stack::pop() {
  StackNode* oldValue = top;
  char item = top->value;
  top = top->next;
  delete oldValue;
  return item;
}
//POST: top element is popped from stack

//PRE: nothing is passed into the function, but user is checking if stack is empty
bool Stack::isEmpty() {
  if (top == nullptr){
    return true;
  }else {
    return false;
  }
}
//POST: returns true if stack is empty, false if not

//PRE: user is taking a look at the contents of the top element in the stack
char Stack::peek() {
  if (isEmpty() == true){
    cout << "Stack is empty." << endl;
    return ' ';
  } else {
    return top->value;
  }
}
//POST: the top value of the stack is returned 

//PRE: the infix expression is passed into the function to check if the parenthesis are balanced
bool Stack::isBalanced(string infix) {
  for (int i = 0; i < infix.length(); i++){
    char c = infix.at(i);
    if (c == '(' || c == '['|| c == '{'){
      push(c);
    }else if (c == ')' || c == ']' || c == '}'){
      if (isEmpty() == true){
        return false;
      }else{
        continue;
      }
    }else {
      continue;
    }
  }
  return true;
}
//POST: returns true if the expression is balanced and false if it is not balanced.

//PRE: the operators are passed into the function to check precedence in expression
int Stack::precedence(char op) {
  if (op == '+' || op == '-'){
    return 1;
  }else if (op == '*' || op == '/'){
    return 2;
  }else{
    return 0;
  }
}
//POST: returns the precedence of the operator passed into the function

//PRE: the infix expression is passed into the function to convert it to a postfix expression
string Stack::infixToPostfix(string infix, Stack s) {
  string postfix = "";
  for (int i = 0; i < infix.length(); i++){
    char c = infix.at(i);
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
      if (precedence(c) > precedence(peek())){
        push(c);
      }else{
        postfix += pop();
        push(c);    
      }  
    } 
    else if (c == '(' || c == '[' || c == '{'){
      push(c);
    }
    else if (c == ')' || c == ']' || c == '}'){
      while (peek() != '(' && peek() != '[' && peek() != '{'){
        postfix += pop();
      }
      pop();
    }
    else {
      postfix += c;
    }
  }
  while (!isEmpty()){
    postfix += pop();
  }
  return postfix;
}
//POST: the infix expression is converted into a postfix expression and is returned to the user.
