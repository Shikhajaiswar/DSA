Node *removeDuplicates(Node *head)
{
    if(head == NULL){
        return NULL;
    }
    
  unordered_map<int,bool>visited;
    Node* prev = NULL;
    Node* curr = head;
    
    while(curr != NULL){
        if(visited[curr->data] != true){
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            prev->next = curr-> next;
            Node* temp = curr;
            curr = curr->next;
            
            delete(temp);
        }
    }
    return head;
}



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

Node *removeDuplicates(Node *head)
{
    if(head == nullptr){
        return nullptr;
    }
    
    Node *curr = head;
    while(curr->next!=nullptr){
        int data = curr->data;
        Node * prev = curr;
        Node * check = curr->next;
        while(check->next!=nullptr ){
            if(data == check->data){
//                 cout<<"PREv"<<prev->data;
//                 cout<<"check"<<check->data<<endl;
                Node *todelete = check;
                check = check->next;
                delete(todelete);
                prev->next = check;
            }
            else{
                prev = check;
                check = check->next;
            }
        }
        curr = curr->next;
    }
    return head;
}