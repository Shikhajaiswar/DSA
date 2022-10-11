//Method 1

// int getLength(Node *head){
//     int len=0;
//     while(head!=nullptr){
//         len++;
//         head=head->next;
//     }
//     return len;
// }
// Node *findMiddle(Node *head) {
//     // Write your code here
//     int len = getLength(head);
//     int mid=(len/2)+1;
//     int p=1;
//     Node *temp=head;
//     while(p!=mid){
//         temp=temp->next;
//         p++;
//     }
//     return temp;
// }


// Method 2

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

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
Node *findMiddle(Node *head) {
    //if no of nodes is only 1 
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    //if no. of nodes is 2
    if(head->next->next==nullptr){
        return head->next;
    }
    //if no. of nodes is greater than 2
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=nullptr){
        fast=fast->next;
        if(fast!=nullptr){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}  