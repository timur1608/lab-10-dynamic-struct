#include <list.hpp>
#include <stddef.h>
#include <stdexcept>

void Construct(ForwardList& list)
{
    list.Head = nullptr;
}
void Destruct(ForwardList& list)
{
    ForwardList::Node* temp;
    while (list.Head != nullptr){
        temp = list.Head;
        list.Head = list.Head->Next;
        delete temp;
    }
}

void PushFront(ForwardList& list, int value)
{
    if (list.Head == nullptr){
        list.Head = new ForwardList::Node();
        list.Head->Data = value;
        list.Head->Next = nullptr;
    }
    else{
        ForwardList::Node* temp = new ForwardList::Node();
        temp->Data = value;
        temp->Next = list.Head;
        list.Head = temp;
    }
}
void PopFront(ForwardList& list)
{
    if (list.Head == nullptr)
        return;
    ForwardList::Node* temp = list.Head;
    list.Head = list.Head->Next;
    delete temp;
}
void RemoveAfter(ForwardList::Node* node)
{
    if (node == nullptr || node->Next == nullptr)
        return;
    ForwardList::Node* temp = node->Next;
    node->Next = temp->Next;
    delete temp;

}
ForwardList::Node* InsertAfter(ForwardList::Node* node, int value)
{
    if (node == nullptr)
        return node;
    ForwardList::Node* temp = new ForwardList::Node();
    temp->Data = value;
    temp->Next = node->Next;
    node->Next = temp;
    return temp;
}
size_t Size(const ForwardList& list){
    ForwardList::Node* temp = list.Head;
    size_t count;
    for (count = 0; temp != nullptr; temp=temp->Next, count++);
    return count;
}

void Reverse(ForwardList& list)
{
    if (list.Head == nullptr || list.Head->Next == nullptr)
        return;
    ForwardList::Node* temp1 = list.Head;
    ForwardList::Node* temp2 = temp1->Next;
    ForwardList::Node* temp3 = temp2->Next;
    temp1->Next = nullptr;
    while (temp2 != nullptr)
    {
        temp2->Next = temp1;
        temp1 = temp2;
        temp2 = temp3;
        if (temp3 != nullptr)
            temp3 = temp3->Next;
    }
    list.Head = temp1;

}