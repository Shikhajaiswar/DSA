//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    static bool comp(pair<pair<int,int>,int>p1, pair<pair<int,int>,int>p2){
          if(p1.first.second==p2.first.second)
          return p1.second<p2.second;
          return p1.first.second<p2.first.second;
    }
    
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<int>v1;
        vector<pair<pair<int,int>,int>>v;

       for(int i=0; i<N;i++){
           v.push_back({{S[i],F[i]},i+1});
       }
       
       sort(v.begin(),v.end(),comp);
       v1.push_back(v[0].second);
       int finish_time= v[0].first.second;
       int i=1;

       for(; i<N;i++){
           if(v[i].first.first >finish_time){
               v1.push_back(v[i].second);
               finish_time = v[i].first.second;
           }
       }

       sort(v1.begin(),v1.end());
       return v1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends