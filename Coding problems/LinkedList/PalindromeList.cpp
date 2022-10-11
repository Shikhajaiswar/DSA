//  --------------------------------------->>Method 1
bool isPalindrome(ListNode *head)
{
    vector<int> vec;
    while (head != nullptr)
    {
        vec.push_back(head->val);
        head = head->next;
    }

    int start = 0;
    int end = vec.size() - 1;

    while (start < end)
    {
        cout << vec[start];
        cout << vec[end] << endl;
        if (vec[start++] != vec[end--])
            return false;
    }
    return true;
}

// ---------------------------------->>Method 2

// Method 2 - Without Extra space-

// find middle node of list
// reverse the list which occur after the middle node
// set first pointer to the head of the list and the second pointer to the next of the middle node
// traverse till second pointer reaches NULL if(first->value ! = second ->value ) return false .

class Solution{
  private:
    ListNode* getMid(ListNode* head ) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        ListNode* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        ListNode* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->val != head1->val) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }

        
        return true;
    }
};