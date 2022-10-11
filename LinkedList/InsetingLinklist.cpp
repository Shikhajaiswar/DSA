#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void create(int A[], int n, Node *head){
    // Node *head = new Node;
    Node *temp;
    Node *last;
    head->data = A[0];
    head->next = nullptr;
    last = head;

    // Creating a linked list
    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        // Last'next is pointing to temp
        last->next = temp;
        last = temp;
    }
}

void display(Node *p){
    if (p != nullptr)
    {
        cout << (p->data) << "->";
        display(p->next);
    }
}

void insert(Node &(*p), int pos, int x){
    Node *t, *k;
    t = new Node;
    t->data = x;
    if (pos == 0){
        t->next = p;
        p = t;
    }
    else if (pos > 0){
        k = p;
        for (int i = 0; i < pos - 1; i++)
            k = k->next;
        if (k)
        {
            t->next = k->next;
            k->next = t;
        }
    }
    if (p != nullptr){
        cout << (p->data) << "->";
        display(p->next);
    }
}

int main()
{
    int A[] = {3, 5, 7, 9, 43, 5};
    int n = sizeof(A) / sizeof(A[0]);
    Node *head = new Node;
    create(A, n, head);
    display(head);
    cout << endl;
    insert(head, 0, 2);
    // display(head);
    return 0;
}