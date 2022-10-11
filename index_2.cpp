#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class linkedList{
    Node* head = nullptr;
    public:
    void create(int data);
    void display();
    int mid();
};

void linkedList::create(int x){
    Node* temp; 
    Node* last;
    if(head == nullptr){
        head = new Node;
        head->data = x;
        head->next = nullptr;
        last = head;
    }
    else{
        temp = new Node;
        temp->data = x;
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

int linkedList::mid(){
    Node *fast = head->next;
    Node *slow = head;
    while(fast!=nullptr || fast->next!=nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"gfg";
    // int ans  = slow->data;
    // cout<<ans<<endl;
    return 0;
}

void linkedList::display(){
    Node* p = head;
    while(p!=nullptr){
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<endl;
}

int main()
{
    linkedList lst;
    lst.create(20);
    lst.create(30);
    lst.create(40);
    lst.create(50);
    lst.create(60);
    // lst.create(67);
    lst.display();
    cout<<lst.mid();
    return 0;
}