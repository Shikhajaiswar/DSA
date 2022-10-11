#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class LinkedList{
    Node *head=nullptr;
    public:
    // LinkedList(int arr[], int n);
    // ~LinkedList();
    void create(int n);
    void insert(int index, int n); 
    void remove(int index);
    void display();
};

void LinkedList::create(int n){
    Node *temp, *tail;
    if(head ==  nullptr){
        head = new Node;
        head->data = n;
        head->next = nullptr;
        tail = head;
    }
    else{
        temp = new Node;
        temp->data = n;
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
}

void LinkedList::insert(int index, int n){
    Node *temp, *tail, *p=head;

    temp = new Node;
    temp->data = n; 
    temp->next = nullptr;

    if(index == 0){
        temp->next = head;
        head = temp;
    }
    else{
        for(int i=0; i<index-1; i++){
            p=p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

void LinkedList::remove(int index){
    Node *temp, *p;
    if(index == 0){
        temp = head;
        head=head->next;
        delete temp;
    }
    else{
        for(int i=0; i<index; i++){
            p = p->next;
        }
        temp=p->next;
        p->next = p->next->next;
        
        delete temp;
    }
}

void LinkedList::display(){
    Node *p = head;
    while(p!=nullptr){
        cout<<p->data<<"-> ";
        p=p->next;
    }
}
int main()
{
    int arr[] = {23,45,67,89,21,43,65};
    int n=sizeof(arr)/sizeof(arr[0]);
    LinkedList l;
    l.create(12);
    l.create(13);
    l.create(14);
    l.display();
    cout<<endl;
    l.insert(0, 100);
    l.display();
    cout<<endl;
    l.insert(2, 90);
    l.display();
    cout<<endl;
    l.remove(0);
    l.display();
    return 0;
}