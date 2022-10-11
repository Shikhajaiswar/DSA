//------------------------------------->>Memoaization + recursion

#include<iostream>
#include<vector>
using namespace std;

int solve(int n, vector<int> &heights, vector<int> &dp){
    if(n==1)                         //base case
        return 0;

    if(dp[n-1]!=-1)
        return dp[n-1];              //memoazation part

    int ans=solve(n-1,heights,dp)+abs(heights[n-1]-heights[n-2]);   

    if(n>2){
        int ans2 =  solve(n-2,heights,dp)+abs(heights[n-1]-heights[n-3]);
        ans=min(ans , ans2);
    }

    return dp[n-1]=ans;              //to store the searched ans
}


int frogJump(int n, vector<int> &heights)
{
   vector<int> dp(n,-1);
    return solve(n,heights,dp);
}

int main()
{
    vector<int>vec = {10, 20, 30,10};
    int n = vec.size();
    cout<<frogJump(n, vec);
    return 0;
}


// ------------------------------------------------->>Tabulation
#include<iostream>
#include<vector>
using namespace std;

int solve(int n, vector<int> &heights, vector<int> &dp){

}

int frogJump(int n, vector<int> &heights)
{
   vector<int> dp(n,-1);
    return solve(n,heights,dp);
}

int main()
{
    vector<int>vec = {10, 20, 30,10};
    int n = vec.size();
    cout<<frogJump(n, vec);
    return 0;
}