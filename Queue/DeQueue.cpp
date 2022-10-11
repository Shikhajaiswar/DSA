#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Queue{
    Node *front;
    Node *Rear;
    public:
    Queue();
    // ~Queue();
    void frontenQueue(int x);
    int frontdeQueue();
    void RearenQueue(int x);
    int ReardeQueue();
    void display();
};
Queue::Queue() {
    front = nullptr;
    Rear = nullptr;
}

int Queue::frontdeQueue(){
    int x=-1;
    Node *t;
    if(front ==nullptr)
        cout<<"The Queue is Empty";
   else{
        x=front->data;
        t=front;
        front=front->next;
        delete(t);
    }
    return x;
}
void Queue::frontenQueue(int x){
    Node *t=new Node;
    if(t==nullptr)
        cout<<"Queue is full";
    else{
        t->data=x;
        t->next=nullptr;
        if(front==nullptr){
            front=Rear=t;
        }
        else{
            t->next=front;
            front=t;
        }
    }
}

void Queue:: RearenQueue(int x){
    Node *t=new Node;
    if(t==nullptr)
        cout<<"Queue is full";
    else{
        t->data=x;
        t->next=nullptr;
        if(front==nullptr){
            front=Rear=t;
        }
        else{
            Rear->next=t;
            Rear=t;
        }
    }    
}

int Queue::ReardeQueue(){
    int x=-1;
    Node *p;
    if(front ==nullptr)
        cout<<"The Queue is Empty";
    else{
        p = front;
        while(p->next != Rear)
        {
            p = p->next;
        }
        x = Rear->data;
        delete(Rear);
        Rear = p;
        Rear->next = NULL;
    }
    return x;
}

void Queue::display(){
    Node *p=front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    Queue Q;
    
    // Q.frontenQueue(10); 
    // Q.frontenQueue(20);
    // Q.frontenQueue(30);  
    // Q.frontenQueue(40);
    // // Q.frontenQueue(50);
    // // Q.frontenQueue(60);
    // Q.display();
    // Q.frontdeQueue();
    // Q.display();

    Q.RearenQueue(10);
    Q.RearenQueue(20);
    Q.RearenQueue(30);
    Q.RearenQueue(40);
    Q.display();
    Q.ReardeQueue();
    Q.display();
    return 0;
}