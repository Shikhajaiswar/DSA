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
    bool isEmpty();
    void enqueue(int x);
    int dequeue(stack *stk2);
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
    // if (top == nullptr)
    // {
    //     cout << "stack is Empty!";
    // }
    // else
    // {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    // }
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

void stack::enqueue(int x)
{
    push(x);
}

int stack::dequeue(stack *stk2)
{
    if (stk2->isEmpty())
    {
        if (isEmpty())
            cout << "Queue overflow" << endl;
        else
            while (isEmpty())
                stk2->push(pop());
    }
    return stk2->pop();
}

bool stack::isEmpty(){
    {if (top == NULL) return true;
return false;
}
}
;

int main()
{
    // int arr[] = {6, 5, 12, 32, 9, 56, 34, 90};
    stack stk, stk2;
    stk.enqueue(10);
    stk.enqueue(20);
    stk.enqueue(30);
    stk.enqueue(40);
    stk.enqueue(50);
    stk.display();
    cout<<stk.dequeue(&stk2)<<"egefe";
    cout<<"J";
    // cout<<endl;
    stk.display();
    // stk.dequeue(&stk2);
    // stk.display();
    return 0;
}