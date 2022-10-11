#include <iostream>
using namespace std;

class Queue
{
    int size;
    int front;
    int Rear;
    int *Q;

public:
    Queue();
    Queue(int size);
    void enQueue(int x);
    int deQueue();
    void display();
};

Queue::Queue()
{
    Rear = front = -1;
    size = 10;
    Q = new int[size];
}

Queue::Queue(int size){
    Rear = front = -1;
    this->size=size;
    Q=new int[this->size];
}

void Queue:: enQueue(int x){
    if(Rear==size-1){
        cout<<"The Queue is full";
    }
    else{
        Rear++;
        Q[Rear]=x;
    }
}

int Queue::deQueue(){
    int x=-1;
    if(front==Rear){
        cout<<"Queue is Empty";
    }
    else{
        x=Q[front+1];
        front++;
    }
    return x;
}

void Queue::display(){
    for(int i=front+1; i<=Rear; i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Queue Q(5);
    Q.enQueue(10);
    Q.enQueue(20);
    Q.enQueue(30);
    Q.enQueue(40);
    Q.display();
    Q.deQueue();
    Q.display();
    return 0;
}