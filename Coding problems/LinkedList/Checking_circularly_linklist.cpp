bool isCircular(Node* head){
    if(head==nullptr){
        return true;
    }
    Node *temp = head->next;
    while(temp!=nullptr && temp!=head){
        temp=temp->next;
    }
    
    if(temp==head ){
        return true;
    }
    else{
        return false;
    }
}

