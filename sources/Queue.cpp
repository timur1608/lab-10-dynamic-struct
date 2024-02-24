#include <queue.hpp>

// struct Queue {
//   struct Node {
//     Node* Next = nullptr;
//     int Data = 0;
//   };

//   // Указатель на первый элемент очереди.
//   Node* Head = nullptr;

//   // Указатель на последний элемент очереди.
//   Node* Tail = nullptr;
// };

void Construct(Queue& queue)
{
    queue.Head = nullptr;
    queue.Tail = nullptr;
}
void Destruct(Queue& queue);

void Push(Queue& queue, int value);
int Pop(Queue& queue);
bool Empty(const Queue& queue) 
{
    return (queue.Head == nullptr);
}
