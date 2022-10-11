//{ Driver Code Starts
//Initial template for C++
#include<iostream>

// #include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        if(head==nullptr ){
            return head;
        }
        
        
        head = reverse(head);
        Node *temp = head;
        int carry = 1;
        
        while(temp!=nullptr){
            int num = temp->data+carry;
             
            int digit = num%10;
            carry = num/10;
            
            temp->data = digit;
            temp=temp->next;
        }
        
        
        head = reverse(head);
        if(head->data == 0){
            head->data = 10;
        }
        
        return head;
        // return head of list after adding one
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends