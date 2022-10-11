#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void create(int A[], int n, Node *head)
{
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

void display(Node *p)
{
    if (p != nullptr)
    {
        cout << (p->data) << "->";
        display(p->next);
    }
}

void insert(Node *p, int pos, int x)
{
    Node *t, *k;
    t = new Node;
    t->data = x;
    if (pos == 0)
    {
        t->next = p;
        p = t;
    }
    else if (pos > 0)
    {
        k = p;
        for (int i = 0; i < pos - 1; i++)
            k = k->next;
        if (k)
        {
            t->next = k->next;
            k->next = t;
        }
    }
}

int deleteNode(Node *p, int pos)
{
    Node *k = nullptr;
    for (int i = 0; i < pos - 1; i++)
    {
        k = p;
        p = p->next;
    }
    k->next = p->next;
    int x = p->data;
    delete p;
    return x;
}

int isSorted(Node *p)
{
    int x = INT32_MIN;
    while (p != nullptr)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

void RemoveDuplicate(Node *p)
{
    Node *q = p->next;
    while (q != nullptr)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

void Reversing(Node *p)
{
    Node *q = nullptr;
    Node *r = nullptr;
    while (p != nullptr)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    p = q;
    if (p != nullptr)
    {
        cout << (p->data) << "->";
        display(p->next);
    }
}

void Recursice_reverse(Node *q,Node *p)
{
    if (p != nullptr)
    {
        Recursice_reverse(p, p->next);
        p->next = q;
    }
    else
        p = q;  
}

int main()
{
    int A[] = {3, 5, 7, 8, 8, 9, 43, 78, 23, 23};
    int n = sizeof(A) / sizeof(A[0]);
    Node *head = new Node;
    create(A, n, head);
    display(head);
    cout << endl;
    insert(head, 2, 2);
    display(head);
    cout << endl;
    cout << deleteNode(head, 4);
    cout << endl;
    display(head);
    cout << endl;
    cout << isSorted(head) << endl;
    RemoveDuplicate(head);
    display(head);
    cout << endl;
    Reversing(head);
    Node *k = nullptr;
    Recursice_reverse(k, head);
    display(head);
    return 0;
}