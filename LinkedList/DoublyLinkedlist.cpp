#include <iostream>
using namespace std;

class Node
{
public:
    Node *previous;
    int data;
    Node *next;
};

class DoublyLinkedList
{
    Node *first;

public:
    DoublyLinkedList();
    DoublyLinkedList(int A[], int n);
    void InsertatBegin( int key);
    void InsertatBetween(int index, int key);
    void Insertatlast(int key);
    void display();
    void displayFromBack();
    void remove(int index);
};

DoublyLinkedList::DoublyLinkedList(int A[], int n)
{
    Node *last, *temp;
    first = new Node;

    first->data = A[0];
    first->previous = first->next = nullptr;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp=new Node;
        temp->data = A[i];
        temp->next = nullptr;
        temp->previous = last;
        last->next = temp;
        last = temp;
    }
}

void DoublyLinkedList::InsertatBegin(int n){
    Node *temp;
    temp=new Node;
    temp->data=n;
    temp->next=first;
    first->previous=temp;
    first=temp;
}
void DoublyLinkedList::Insertatlast(int n){
    Node *p=first;
    while(p->next!=nullptr){
        p=p->next;
    }
    Node *temp;
    temp=new Node;
    temp->data=n;
    temp->next=nullptr;
    temp->previous=p;
    p->next=temp;

}
void DoublyLinkedList::InsertatBetween(int index,int n){
    Node *p=first;
    for(int i=0; i<index-1; i++){
        p=p->next;
    }
    Node *temp;
    temp=new Node;
    temp->data=n;
    temp->next=p->next;
    temp->previous=p;
    p->next=temp;
}

void DoublyLinkedList::remove(int index){
    for(int i=0; i<index-1; i++){
        p=p->next;
    }
    
}

void DoublyLinkedList:: displayFromBack(){
    cout<<"your reverse linked/list is : ";
    Node *p=first;
    while(p->next!=nullptr){
        p=p->next;
    }
    while(p->previous!=nullptr){
        cout<<p->data<<"-> ";
        p=p->previous;
    }
    cout<<p->data<<endl;

}

void DoublyLinkedList:: display(){
    cout<<"your  linked/list is : ";
    Node *p=first;
    while(p!=nullptr){
        cout<<p->data<< "-> ";
        p=p->next;
    }
    cout<<endl;
}



int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    DoublyLinkedList l(A, n);
    l.display();
    l.displayFromBack();
    l.InsertatBegin(7);
    l.display();
    l.Insertatlast(43);
    l.display();
    l.InsertatBetween(3,100);
    l.display();
    return 0;
}