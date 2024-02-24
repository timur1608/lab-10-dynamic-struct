// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_STACK_HPP_
#define INCLUDE_STACK_HPP_

struct Stack {
  struct Node {
    Node* Next;
    int Data;
  };

  // Указатель на вверхний элемент стека.
  Node* Top;
};

void Construct(Stack& stack);
void Destruct(Stack& stack);

void Push(Stack& stack, int value);
int Pop(Stack& stack);
bool Empty(const Stack& stack);

#endif  // INCLUDE_STACK_HPP_
