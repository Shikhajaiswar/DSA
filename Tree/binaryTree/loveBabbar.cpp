#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return nullptr;
    }

    cout << "Enter the data for insert in left of node";
    root->left = buildTree(root->left);

    cout << "Enter the data for insert in right of node";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{ // also called BFS(bredth first search)
    queue<node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == nullptr)
        { // purana level traverse ho gya
            cout << endl;
            if (!q.empty())
            { // queue still has some child node
                q.push(nullptr);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for the root : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter data for left node : "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter data for right node : "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

void Reverse_levelOrderTraversal(node *root)
{
}

void Inorder_Traversal(node *root)
{ // LNR(left, node, right)
    if (root == nullptr)
    {
        return;
    }

    Inorder_Traversal(root->left);
    cout << root->data << " ";
    Inorder_Traversal(root->right);
}

void Preorder_Traversal(node *root)
{ // NLR
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    Preorder_Traversal(root->left);
    Preorder_Traversal(root->right);
}

void Postorder_Traversal(node *root)
{ // LRN
    if (root == nullptr)
    {
        return;
    }

    Postorder_Traversal(root->left);
    Postorder_Traversal(root->right);
    cout << root->data << " ";
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *root = nullptr; // initially root will be null

    /*// creation of binary node
    root = buildTree(root);

    // levelOrder
    cout << "Printing the level order Travesal : \n";
    levelOrderTraversal(root);
    cout<<endl;

    Inorder_Traversal(root);
    cout<<endl;*/

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}