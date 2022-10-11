#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class stack
{
    Node *top;

public:
    stack() { top = nullptr; }
    void push(int x);
    int pop();
    void display();
};

void stack::push(int x)
{
    Node *t = new Node;
    if (t == nullptr)
        cout << "Stack is full"; // If the t is not created means heap is full  so we can't creat
    else                         // more stack
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int stack::pop()
{
    int x = -1;
    if (top == nullptr)
    {
        cout << "stack is Empty!";
    }
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}

void stack::display()
{
    Node *p = top;
    while (p != nullptr)
    {
        cout << p->data << "|";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.display();
    cout << stk.pop() << endl;
    stk.display();
    return 0;
}