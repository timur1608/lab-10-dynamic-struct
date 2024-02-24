#include <queue.hpp>

void Construct(Queue& queue)
{
    queue.Head = nullptr;
    queue.Tail = nullptr;
}
void Destruct(Queue& queue)
{
    Queue::Node* temp;
    while (queue.Head != nullptr)
    {
        temp = queue.Head;
        queue.Head = queue.Head->Next;
        delete temp;
    }
    queue.Head = nullptr;
    queue.Tail = nullptr;
}

void Push(Queue& queue, int value)
{
    if (queue.Head == nullptr){
        queue.Head = new Queue::Node();
        queue.Head->Data = value;
        queue.Head->Next = nullptr;
        queue.Tail = queue.Head;
    }
    else
    {
        queue.Tail->Next = new Queue::Node();
        queue.Tail = queue.Tail->Next;
        queue.Tail->Next = nullptr;
        queue.Tail->Data = value;
    }
}
int Pop(Queue& queue)
{
    if (queue.Head != nullptr)
    {
        int result = queue.Head->Data;
        if (queue.Head == queue.Tail){
            delete queue.Head;
            queue.Head = nullptr;
            queue.Tail = nullptr;
        }
        else
        {
            Queue::Node* temp = queue.Head;
            queue.Head = queue.Head->Next;
            delete temp;
        }
        return result;
    }
    return 0;
}
bool Empty(const Queue& queue) 
{
    return (queue.Head == nullptr);
}
