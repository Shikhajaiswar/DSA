//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

class cmp{
    public:
    bool operator() (Node* a, Node* b){  //min heap
        return a->data > b->data;
    }
};

class Solution
{   
	public:
	    void solve (Node* root, vector<string>&ans, string temp){
	        //base case
             if(!root->left && !root->right){
                 ans.push_back(temp);
                 return;
             }
             
             solve(root->left,ans,temp+'0');
             solve(root->right,ans,temp+'1');
	    }
	
		vector<string> huffmanCodes(string S, vector<int>f,int N)
		{
		    // Code here
		    
		    priority_queue<Node*,vector<Node*>, cmp> pq;
		    for(int i=0;i<N;i++){
		        Node *n=new Node(f[i]);
		        pq.push(n);
		    }
		    
		     while(pq.size()>1){
        
                 Node*left=pq.top();
                 pq.pop();
                 Node*right=pq.top();
                 pq.pop();
        
                 Node*newnode = new Node(left->data+right->data);
                 newnode->left=left;
                 newnode->right=right;
                 pq.push(newnode);
        
             }
		    
		    Node *root=pq.top();
		    vector<string> ans;
		    solve(root,ans,"");
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends