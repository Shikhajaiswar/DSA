#include<iostream>
using namespace std;

class stack{
    char *s;
    int size;
    int top;
    public:
    stack(int size);
    void push(char a);
    void display();
};

stack::stack(int size){
    this->size=size;
    top=-1;
    s=char new [size];
}

void stack::push(char x){
    if(top!=size-1){
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        top++;
        s[top]=x;
    }
}

void stack::display(){
    for(int i=top; i>=0; i--){
        cout<<s[i]<<"|"<<flush;
    }
    cout<<endl;
}

int main()
{
    stack stk(5);
    stk.push('s');
    stk.push('h');
    stk.push('i');
    stk.push('j');
    stk.push('k');
    stk.display();
    return 0;
}