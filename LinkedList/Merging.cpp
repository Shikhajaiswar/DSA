#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class linkedList
{
    Node *first = nullptr, *second=nullptr, *third=nullptr;

public:
    linkedList() { first = nullptr; }
    void create1(int A[], int n);
    void create2(int B[], int m);
    ~linkedList();
    void display();
    void insert(int index, int x);
    int Delete(int index);
    int length();
    void reverse();
    void Merge();
};

void linkedList::create1(int A[], int n)
{
    Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void linkedList::create2(int B[], int n)
{
    Node *last, *t;
    second = new Node;
    second->data = B[0];
    second->next = nullptr;
    last = second;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = B[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

linkedList::~linkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void linkedList::insert(int index, int x)
{
    Node *t, *p = first;
    if (index < 0 || index > length())
        return;
    t = new Node;
    t->data = x;
    t->next = nullptr;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}

void linkedList::display()
{
    Node *p = first;
    while (p)
    { // This means jabtak p null nhi hota(p mai 0 assing nhi hota)
        cout << p->data << "->";
        p = p->next;
    }
    cout << endl;
}

int linkedList::length()
{
    int count = 0;
    Node *p = first;
    while (p != nullptr)
    {
        count++;
        p = p->next;
    }
    return count;
}

int linkedList::Delete(int index)
{
    Node *p, *q = nullptr;
    int x = -1;
    if (index < 1 || index > length())
        return -1;
    if (index == 0)
    {
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        p = first;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
}

void linkedList::reverse()
{
    Node *p = first;
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
    while (p != nullptr)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

void linkedList::Merge()
{
    Node *p=first; Node *q=second;
    while(p){
        p=p->next;
    }
    p->next=q;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int B[] = {12, 23, 34, 45, 56};
    int m = sizeof(B) / sizeof(B[0]);
    linkedList l;
    l.create1(A, n);
    l.create1(B, m);
    l.display();
    displ

    
    return 0;
}