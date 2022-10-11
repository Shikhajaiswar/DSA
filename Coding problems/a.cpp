#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
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


int main()
{
    
    return 0;
}