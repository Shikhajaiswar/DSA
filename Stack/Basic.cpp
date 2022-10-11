#include <iostream>
using namespace std;

class stack
{
    int size;
    int top;
    int *s;

public:
    stack(int size);
    ~stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isfull();
    int isEmpty();
    void display();
    int stackTop();
};

stack::stack(int size){
    this->size=size;
    top=-1;
    s=new int[size];
}

stack::~stack(){
    delete[] s;
}

void stack::push(int x){
    if(isfull()){
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}

int stack::pop(){
    int x=1;
    if(isEmpty()){
        cout<<"Stack Underflow!"<<endl;
    }
    else{
        x=s[top];
        top--;
    }
    return x;
}

void stack::display(){
    for(int i=top; i>=0; i--){
        cout<<s[i]<<"|"<<flush;
    }
    cout<<endl;
}

int stack::stackTop(){
    if(isEmpty()){
        return -1;
    }
    return s[top];
}

int stack::isfull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}

int stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

int main()
{
    int A[]={1,3,5,7,9,11};
    int n=sizeof(A)/sizeof(A[0]);
    stack stk(n);
    for(int i=0; i<n; i++){
        stk.push(A[i]);
    }
    stk.display();
    stk.pop();
    stk.display();
    return 0;
}