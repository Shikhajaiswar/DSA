#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
};
class stack
{
    Node *top;

public:
    stack();
    // ~stack();
    void push(char x);
    char pop();
    void display();
    char peek(int index);
    int isEmpty();
    int isFull();
    char stackTop();
    int isBalanced(char exp[]);
    int parenthesis(char exp[]);
};

stack::stack()
{
    top = nullptr;
}

void stack::push(char x)
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

char stack::pop()
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
int stack::isBalanced(char exp[])
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == nullptr)
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    if (top == nullptr)
        return 1;
    else
        return 0;
}

int stack::parenthesis(char exp[])
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top == nullptr)
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    if (top == nullptr)
        return 1;
    else
        return 0;
}



int main()
{
    char exp[] = "(((a+b)*(c+d)))";
    stack stk;
    cout << stk.isBalanced(exp);
    cout<<endl;
    cout << stk.parenthesis(exp);
    // stk.display();
    return 0;
}