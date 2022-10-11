#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *lpointer;
    Node *rpointer;
} *root = nullptr;

void Insert(int key)
{
    Node *t = root;
    Node *p, *r;
    if (root == nullptr)
    {
        p = new Node;
        p->data = key;
        p->lpointer = p->rpointer = nullptr;
        root = p;
        return;
    }

    while (t != nullptr)
    {
        r = t;
        if (key < t->data)
        {
            t = t->lpointer;
        }
        else if (key > t->data)
        {
            t = t->rpointer;
        }
    }

    p = new Node;
    p->data = key;
    p->lpointer = p->rpointer = nullptr;
    if (key < r->data)
    {
        r->lpointer = p;
    }
    else
        r->rpointer = p;
}

Node *insert(Node *p, int key)
{
    Node *t;
    if (p == nullptr)
    {
        t = new Node;
        t->data = key;
        t->lpointer = t->rpointer = nullptr;
        return t;
    }
    if (key < p->data)
    {
        p->lpointer = insert(p->lpointer, key);
    }
    else if (key > p->data)
    {
        p->rpointer = insert(p->rpointer, key);
    }
    return p;
}

int Height(Node *p)
{
    int x;
    int y;
    if (p == nullptr)
    {
        return 0;
    }
    x = Height(p->lpointer);
    y = Height(p->rpointer);
    return x > y ? x + 1 : y + 1;
}

Node *InPre(Node *p)
{
    while (p && p->rpointer != nullptr)
    {
        p = p->rpointer;
    }
    return p;
}

Node *InSucc(Node *p)
{
    while (p && p->lpointer != nullptr)
    {
        p = p->lpointer;
    }
    return p;
}

Node *Delete(Node *p, int key)
{
    Node *q;

    if (p == nullptr)
    {
        return nullptr;
    }

    if (p->lpointer == nullptr && p->rpointer == nullptr)
    {
        if (p == root)
        {
            root = nullptr;
        }
        delete p;
        return nullptr;
    }

    if (key < p->data)
    {
        p->lpointer = Delete(p->lpointer, key);
    }
    else if (key > p->data)
    {
        p->rpointer = Delete(p->rpointer, key);
    }
    else
    {
        if (Height(p->lpointer) > Height(p->rpointer))
        {
            q = InPre(p->lpointer);
            p->data = q->data;
            p->lpointer = Delete(p->lpointer, q->data);
        }
        else
        {
            q = InSucc(p->rpointer);
            p->data = q->data;
            p->rpointer = Delete(p->rpointer, q->data);
        }
    }
    return p;
}

// void createpre(int pre[], int n){
//     stack stk;
//     Node *t,*p;
//     int i=0; root=new Node;
//     root->data=pre[i++];
//     root->lpointer=root->rpointer=nullptr;
//     p=root;
//     while(i<n){
//         if(pre[i]<p->data){
//             t=new Node;
//             t->data=pre[i++];
//             t->lpointer=t->rpointer=nullptr;
//             p->lpointer=t;
//             push(&stk,p);
//             p=t; 
//         }
//         else{
//             if(pre[i]>p->data && pre[i]<)
//         }
//     }
// }

void preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        preorder(p->lpointer);
        preorder(p->rpointer);
    }
}

void inorder(Node *p)
{
    if (p)
    {
        inorder(p->lpointer);
        cout << p->data << ", " << flush;
        inorder(p->rpointer);
    }
}

void postorder(Node *p)
{
    if (p)
    {
        postorder(p->lpointer);
        postorder(p->rpointer);
        cout << p->data << ", " << flush;
    }
}

int main()
{
    // Node *root = nullptr;
    // Insert(20);
    // Insert(10);
    // Insert(30);
    // Insert(15);
    // Insert(50);

    // inserting by recursion
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 8);
    insert(root, 30);
    insert(root, 4);
    insert(root, 15);

    // preorder(root);
    // cout << endl;

    inorder(root);
    cout << endl;

    // Delete(root, 5);

    // inorder(root);
    // cout << endl;
    // postorder(root);
    // cout<<endl;

    return 0;
}