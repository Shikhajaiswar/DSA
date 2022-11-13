
   
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        // base case
        if(r1==nullptr && r2==nullptr){
            return true;
        }
        if(r1==nullptr && r2!=nullptr){
            return false;
        }
        if(r1!=nullptr && r2==nullptr){
            return false;
        }
        
        
        bool left = isIdentical(r1->left, r2->left);
        bool right = isIdentical(r1->right, r2->right);
        
        bool value = r1->data == r2->data;
        
        if(left && right && value)
            return true;
        return false;

    }
};

// 