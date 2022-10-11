// Reversing a string
#include<iostream>
#include<cstring>
using namespace std;

class stack{
    int size;
    int top;
    char *s;
    public:
    stack(int n);
    void push(char s);
    void reverse();
    void display();
};

stack::stack(int size){
    this->size=size;
    s=new char [size];
    top=-1;
}

void stack::push(char x){
    if(top==size-1){
        cout<<"THe stack is full ! ";
    }
    else{
        top++;
        s[top]=x;
    }
}

void stack::reverse(){
    while(top!=-1){
    
    
        cout<<s[top];
        top--;
    }
}


int main()
{
    char str[]="shikha jaiswar";
    // int n=strlen(str);
    stack stk(14);
    for(int i=0; str[i]!='\0'; i++){
        stk.push(str[i]);
    }
    
    stk.reverse();
    return 0;
}