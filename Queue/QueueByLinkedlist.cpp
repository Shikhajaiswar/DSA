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
    void enQueue(int x);
    int deQueue();
    void display();
};

Queue::Queue() {
    front = nullptr;
    Rear = nullptr;
}

void Queue:: enQueue(int x){
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

int Queue:: deQueue(){
    int x=-1;
    Node *t;
    if(front==nullptr){
        cout<<"Queue is Empty";
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        delete(t);
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

// Queue::~Queue() {
//     Node* p = front;
//     while (front){
//         front = front->next;
//         delete p;
//         p = front;
//     }
// }

int main()
{
    Queue Q;
    Q.enQueue(10);
    Q.enQueue(20);
    Q.enQueue(30);
    Q.enQueue(40);
    Q.display();
    Q.deQueue();
    Q.display();

    
    return 0;
}