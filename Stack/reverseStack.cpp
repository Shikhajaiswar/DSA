#include <iostream>
using namespace std;

class stack
{
    int *s;
    int size;
    int top;

public:
    stack(int size);
    ~stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isfull();
    int isEmpty();
    void display();
    void insertAtBottom(int item);
    void reverse();
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

void stack:: insertAtBottom(int item) {  
    if (isEmpty()) {  
        push(item);  
    } else {  
       int top = pop();  
        insertAtBottom(item);  
        push(top);  
    }  
}  

void stack::reverse() {  
    if (!isEmpty()) {  
        int top = pop();  
        reverse();  
        insertAtBottom(top);  
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
    stack stk(5);
    stk.push(12);
    stk.push(16);
    stk.push(13);
    stk.push(17);
    stk.push(90);
    

    stk.display();
    stk.reverse();
    stk.display();
    return 0;
}