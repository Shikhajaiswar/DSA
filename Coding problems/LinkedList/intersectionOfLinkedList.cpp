 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
       
        while(temp1!=NULL && temp2!=NULL){ //checking the how muct long is one list from another one
            temp1 = temp1->next;
            temp2 = temp2-> next;
        }
        
        ListNode *cur1 = headA;
        ListNode  *cur2 = headB;
           
        while(temp1){         //agar 1st list choti hai to temp1=null hoga and ye loop ni chlega
            temp1= temp1->next;
            cur1 = cur1-> next;
        }
        
        while(temp2){        //agar 2nd list badi hogi to temp2 kise node ko point kar rha hoga ans vha se leke end tak nodes extra hai second list mai so we have to make curr2 shift from that node forward 
            temp2 = temp2->next;
            cur2 = cur2-> next;
        }
        
        while(cur1 && cur2){
            if(cur1==cur2)return cur1;
            
            cur1= cur1->next;
            cur2= cur2->next;
        }
        return NULL;
    }