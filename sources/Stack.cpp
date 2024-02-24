#include <stack.hpp>
void Construct(Stack& stack){
    stack.Top = nullptr;
}
void Destruct(Stack& stack)
{
    Stack::Node* temp;
    while (stack.Top != nullptr)
    {
        temp = stack.Top;
        stack.Top = temp->Next;
        delete temp;
    }
}

void Push(Stack& stack, int value)
{
    if (stack.Top == nullptr)
    {
        stack.Top = new Stack::Node();
        stack.Top->Data = value;
        stack.Top->Next = nullptr;
    }
    else
    {
        Stack::Node* temp = new Stack::Node();
        temp->Data = value;
        temp->Next = stack.Top;
        stack.Top = temp;
    }
}
int Pop(Stack& stack)
{
    if (stack.Top == nullptr)
        return 0;
    int result = stack.Top->Data;
    Stack::Node* temp = stack.Top;
    stack.Top = stack.Top->Next;
    delete temp;
    return result;
}
bool Empty(const Stack& stack)
{
    return stack.Top == nullptr;
}
