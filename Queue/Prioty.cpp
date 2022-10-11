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
Queue::Queue(int size)
{
    Rear = front = -1;
    this->size = size;
    Q = new int[this->size];
}

void Queue::enQueue(int x)
{
    if (Rear == size - 1)
    {
        cout << "The Queue is full";
    }
    else
    {
        Rear++;
        Q[Rear] = x;
    }
}

int Queue::deQueue()
{
    int x = -1;
    if (front == Rear)
    {
        cout << "Queue is Empty";
    }
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}
void Queue::display()
{
    for (int i = front + 1; i <= Rear; i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl;
}

void insert(Queue *q1, Queue *q2, Queue *q3, char elm, int pr)
{

    if (pr == 1)

    {
        q1->enQueue(elm);    //Arrow Operator because hear q is a pointer
    }

    else if (pr == 2)

    {
        q2->enQueue(elm);
    }

    else

        q3->enQueue(elm);
}

int main()
{
    Queue q1(10), q2(10), q3(10);
    // q1.enQueue(10);
    // q1.enQueue(11);
    // q1.enQueue(12);
    // q2.enQueue(20);
    // q3.enQueue(30);
    // q1.display();
    // q2.display();
    // q3.display();
    insert(&q1, &q2, &q3, 100, 1);
    insert(&q1, &q2, &q3, 11, 1);
    insert(&q1, &q2, &q3, 12, 1);
    insert(&q1, &q2, &q3, 7, 2);
    insert(&q1, &q2, &q3, 14, 3);
    insert(&q1, &q2, &q3, 15, 3);

    q1.display();
    q2.display();
    q3.display();
    return 0;
}