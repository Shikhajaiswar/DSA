#include<iostream>
using namespace std;

class Node {
    public:
    Node *prev;
    int data;
    Node *next;
};

class LinkedList{
    Node *head=nullptr, *tail=nullptr;
    public:
    void create(int n);
    void insert(int index, int n);
    void remove(int index);
    void display();
    void displayFromLast();
    // void remove(int index);
};

void LinkedList::create(int n){
    Node *temp;
    if(head == nullptr){
        head = new Node;
        head->prev = nullptr;
        head->data = n;
        head->next = nullptr;
        tail = head;
    }
    else{
        temp = new Node;
        temp->prev = tail;
        temp->data = n;
        temp->next = nullptr;

        tail->next = temp;
        tail =temp;
    }
}

void LinkedList::insert(int index, int n){
    Node *temp, *p=head;

    temp = new Node;
    temp->prev = nullptr;
    temp->data =  n;
    temp->next = nullptr;

    if(index == 0){
        temp->next = head;
        head->prev = temp;

        head = temp;
    }
    else{
        for(int i=0; i<index-1; i++){
            p=p->next;
        }

        p->next->prev = temp;
        temp->next = p->next;

        temp->prev = p;
        p->next = temp;

    }
}

void LinkedList::remove(int index){
    Node *temp, *p=head;
    if(index == 0){
        temp = head;
        head = head->next;
        delete temp;
    }

    else{
        for(int i=0; i<index-2; i++){
            p = p->next;
        }

        temp = p->next;
        p->next = temp->next;
        temp->next->prev = p;
        delete temp;

    }
}

void LinkedList::display(){
    Node *p=head;
    while(p!=nullptr){
        cout<<p->data<<"->";
        p=p->next;
    }
}

void LinkedList::displayFromLast(){
    Node *p=tail;
    while(p!=nullptr){
        cout<<p->data<<"->";
        p=p->prev;
    }
}
int main()
{
    LinkedList l;
    l.create(12);
    l.create(13);
    l.create(14);
    l.create(15);

    l.display();
    cout<<endl;
    l.insert(0,100);
    l.display();
    cout<<endl;
    l.insert(2,10);
    l.display();

    cout<<endl;
    l.displayFromLast();
    cout<<"jnfgdj"<<endl;

    cout<<endl;
    l.remove(3);
    l.display();
    cout<<endl;
    l.displayFromLast();
    return 0;
}