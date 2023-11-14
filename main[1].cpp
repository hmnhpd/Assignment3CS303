#include <iostream>
#include "Stack.h"
#include "StackNode.h"
#include "Queue.h"
using namespace std;

int main() {
  cout << "Input an infix expression to convert to postfix (i.e. A + B * (D - E)" << endl;
  string infix;
  cin >> infix; //taking in user expression
  Stack s; //the stack to be used 
  string postfix = "";
  postfix = s.infixToPostfix(infix, s); //converting the expression
  cout << "Infix Expression: " << infix << endl;
  cout << "Postfix Expression: " << postfix << endl;

  Queue q;
  string userInput = "";
  cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
  cin >> userInput;
  while (userInput != "6"){
    if (userInput == "1"){
      int value;
      cout << "Enter the value you want to add to the queue (Any real integer) " << endl;
      cout << endl;
      cin >>value;
      q.enqueue(value);
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }else if (userInput == "2"){
      int dequeued = q.dequeue();
      cout << "The value " << dequeued << " was removed from the queue." << endl;
      cout << endl;
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }else if (userInput == "3"){
      int front = q.front();
      cout << "The value at the front of the queue is: " << front << endl;
      cout << endl;
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }else if (userInput == "4"){
      if (q.isEmpty()){
        cout << "The queue is empty." << endl;
        cout << endl;
      }else {
        cout << "The queue is not empty." << endl;
        cout << endl;
      }
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }else if (userInput == "5"){
      int size = q.size();
      cout << "The size of the queue is: " << size << endl;
      cout << endl;
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }else if (userInput == "6"){
      break;
    }else{
      cout << "Enter in a valid response." << endl;
      cout << "Pick an option: 1. Add to queue, 2. Remove front element from queue, 3. See the value at the front of the queue, 4. Check if the queue is empty, 5. See the size of the queue, 6. Quit" << endl;
      cin >> userInput;
    }
  }
}