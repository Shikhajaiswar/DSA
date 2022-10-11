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
    Rear = front = 0;         //we place it at Zero because it is circular so we can't put it at -1
    size = 10;
    Q = new int[size];
}

Queue::Queue(int size)
{
    Rear = front = 0;
    this->size = size;
    Q = new int[this->size];
}

void Queue::enQueue(int x)
{
    if ((Rear+1)%size==front)
    {
        cout << "The Queue is full"<<endl;
    }
    else
    {
        Rear=(Rear+1)%size;
        Q[Rear]=x;
    }
}

int Queue::deQueue(){
    int x=-1;
    if(front==Rear){
        cout<<"Queue is Empty";
    }
    else{
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
    cout<<endl;
}

void Queue::display(){
    int i=(front+1)%size;
    do{
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(Rear+1)%size);
    cout<<endl;
}

int main()
{
    // int n; cin>>n; 
    // int arr[n];
    Queue Q(5);
    // for(int i=0; i<n; i++){
    //     cin>>Q.enQueue[arr[1]];
    // }
    Q.enQueue(10);
    Q.enQueue(20); 
    Q.enQueue(30);
    Q.enQueue(40);
    Q.display();
    // Q.deQueue();
    cout<<Q.deQueue();
    cout<<endl;
    Q.display();
    Q.enQueue(50);
    Q.display();
    Q.deQueue();
    Q.display();
    Q.enQueue(90);
    Q.display();
    return 0;
}