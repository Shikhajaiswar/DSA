class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head || !head->next ||k==0)
        {
            return head;
        }
        
        ListNode *curr=head;
        int count=1;
        while(curr->next && ++count)
        {
            curr=curr->next;    //for counting the no of nodes
        }
        
        curr->next=head;   //make last points to first(now a loop form)
        k=k%count;         //find
        k=count-k;         //find the head node from first
        while(k--)
        {
            curr=curr->next;    //finding the node which will be new head
        }
        head=curr->next;        //make head points to this new node
        curr->next=NULL;        //now make the curr to null
        return head;
    }    
};