#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=nullptr;
    }
};

class Solution{
public:

    bool checkPrime(int n){
        int count=0;
        for(int i=1; i<sqrt(n); i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==1){
            return true;
        }
        else{
            return false;
        }
    }
     
    Node *primeList(Node *head){
        while(head!=nullptr){
            int p=head->val;
            if(checkPrime(p)){
                head=head->next;
            }
            else{
                int s=p-1;
                int l=p+1;
                int count1=0; int count2=0;
                while(!checkPrime(s)){
                    s=s-1;
                    count1++;
                }
                while(!checkPrime(l)){
                    l=l+1;
                    count2++;
                }
                if(count1>count2){
                    head->val=p+count2;
                }
                else if(count1<=count2){
                    head->val=p-count1;
                }
                
            }
            
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head, *tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0; i<n-1; i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        return 0;
    }
}