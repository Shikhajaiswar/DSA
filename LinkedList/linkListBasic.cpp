// Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.

// 1)LinkedList always created in heap
// 2) Ease of insertion/deletion

// Drawbacks:
// 1) Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do binary search with linked lists efficiently with its default implementation. Read about it
// 2) Extra memory space for a pointer is required with each element of the list
// 3) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

// Each node in a list consists of at least two parts:
// 1) data (we can store integer, strings or any type of data).
// 2) Pointer (Or Reference) to the next node (connects one node to another)

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; //<<------------Pointer to next node is of node type (called self refrential class)
};

int main()
{
    int A[] = {3, 5, 7, 9, 12, 15};
    Node *head = new Node; //<<----------creating a head node(obj of node class) in stack which point to a meamory location in heap
    Node *temp;
    Node *last;           //<<-----------Last and temp form in stack and points to linkedlist in heap
    head->data = A[0];    //<<-----------head(this obj) have data A[0]
    head->next = nullptr; //<<-----------head(this obj's pointer) points to null for now
    last = head;

    // Creating a linked list
    for (int i = 1; i < sizeof(A) / sizeof(A[0]); i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        // Last'next is pointing to temp
        last->next = temp;
        last = temp;
    }
    // Display linked list
    Node *p = head;
    while (p != nullptr)
    {
        cout << p->data << "->" << flush;
        p = p->next;
    }


    return 0;
}