//Recursive solution
struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == nullptr || head -> next ==nullptr)
        {
            return head;
        }
        else{
            struct Node* newHead = reverseList(head -> next);
            struct Node* headNext = head->next;
            headNext->next = head;
            head -> next = nullptr;
            return newHead;
        }
        
       
    }

//Iterative approch

struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *p=nullptr, *q=nullptr;
        while(head!=nullptr){
            q=p;
            p=head;
            head=head->next;
            
            p->next=q;
        }
        head=p;

        return head; 
       
    }
    
