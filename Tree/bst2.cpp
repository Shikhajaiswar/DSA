#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *rigth;
    Node *left;

    void insert(int key, Node *root){
        Node *t=root;
        Node *r,*p;
        if(root==nullptr){
            p=new *Node;
            p->data=key;
            p->rigth=p->left=nullptr;
        }

        while(p!=nullptr){
            r=t;
            if(key<t->data){
                t=t->left;
            }
            else if(key>t->data){
                t=t->rigth;
            }
            else{
                return ;
            }
        }

        p=new *Node;
        p->data=key;
        p->left=p->rigth=nullptr;

        if(key<r->data) r->left=p;
        else r->right=p;
    }
};
int main()
{
    Node *root=nullptr;
    return 0;
}