/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    //Base Condition
    if(head==nullptr){
        return head;
    }
    //Step 1 Reverse first k nodes
    Node *next=nullptr;
    Node *curr=head;
    Node *prev=nullptr;
    int count=0;
    
    while(curr!=nullptr && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    
    //step 2 Recursion dekh lega aage ka
    if(next!=nullptr){
        head->next=kReverse(next, k);
    }
    
    //step 3 return head of reversed linkedlist
    return prev;
}