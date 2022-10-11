#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *lpointer;
    Node *rpointer;

    Node(int x){
        this->data=x;
        this->lpointer=nullptr;
        this->rpointer=nullptr;
    }
};



void preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        preorder(p->lpointer);
        preorder(p->rpointer);
    }
    
}

Node* InsertDataInBST(Node * &root , int x){
    //base case
    if(root==nullptr){
        root=new Node(x);
        return root;
    }
    if(x>root->data){
        // rigth part me insert karna hai
        root->rpointer= InsertDataInBST(root->rpointer, x);
    }
    else{
        //left part me insert karna hai
        root->lpointer= InsertDataInBST(root->lpointer, x);
    }
}

void InsertData(Node * &root ){
    int data;
    cin>>data;
    while(data!=-1){
        InsertDataInBST(root, data);
        cin>>data;
    }
}


int main()
{
    Node *root=nullptr;
    cout<<"Enter data to create BSt :";
    InsertData(root);
    preorder(root);
    return 0;
}