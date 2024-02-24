#include <stack.hpp>
// struct Stack {
//   struct Node {
//     Node* Next = nullptr;
//     int Data = 0;
//   };

//   // Указатель на вверхний элемент стека.
//   Node* Top = nullptr;
// };

void Construct(Stack& stack);
void Destruct(Stack& stack);

void Push(Stack& stack, int value);
int Pop(Stack& stack);
bool Empty(const Stack& stack);
