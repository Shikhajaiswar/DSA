/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
void Inorder_Traversal(BinaryTreeNode<int> *root, int &count)
{ // LNR(left, node, right)
    if (root == nullptr)
    {
        return;
    }

    Inorder_Traversal(root->left, count);
    if(root->left==nullptr && root->right==nullptr){
        count++;
    }
    Inorder_Traversal(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt=0;
    Inorder_Traversal(root, cnt);
    return cnt;
}
