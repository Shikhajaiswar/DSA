/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(n<0){
            return head;
        }
        if((head->next == nullptr) && (n=1)){
            return nullptr;
        }
        
        int count = 2;
        ListNode* p = head;
        while(p->next->next != nullptr){
            count++;
            p=p->next;
        }
        
        int num = count-n+1;                
        if(count<n){
            return head;
        }
        else if(num == 1){
            head=head->next;
            return head;
        }
        else if(num == count){
            p->next = nullptr;
            return head;
        }
        
        p = head; int k=1;
        while(k<num-1 && p->next!=nullptr){
            // cout<<k<<endl;
            k++;
            p=p->next;
        }
        cout<<p->val;
        p->next = p->next->next;
        
        return head;
        
    }
};


// ------------------->>Method 2
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head, *q = head;
        while (n--) q = q->next;
        if (!q) return head->next;
        while (q->next) {
            p = p->next;
            q = q->next;
        }
        ListNode* toDelete = p->next;
        p->next = p->next->next;
        delete toDelete;
        return head;
}