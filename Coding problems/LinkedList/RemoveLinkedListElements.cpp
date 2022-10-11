class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == nullptr){
            return nullptr;
        }
        
        if(head->next == nullptr && head->val == val){
            return nullptr;
        }
        
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while(temp!=nullptr){
            if(temp->val == val && prev ==nullptr){
                head = head->next;
                temp = temp->next;
            }
            else if(temp->val == val){
                prev->next = temp->next;
                ListNode* del = temp;
                temp = temp->next;
                del->next = nullptr;
                delete(del);
            }
            else{
                 prev = temp;
                 temp = temp->next;
            }
        }
        
        return head;
    }
};