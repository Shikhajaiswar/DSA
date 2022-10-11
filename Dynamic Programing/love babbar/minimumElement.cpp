// --------------------------------------->>Recursive approach (give TLE)

#include <bits/stdc++.h>
int solve(vector<int>num, int x){
    if(x == 0)           //when there is no money target return 0
        return 0;
    if(x < 0)            //when target is <0 then return -1
        return INT_MAX;
    
    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++){          //we have num.size() option to take for one chose
        int ans =  solve(num, x-num[i]);
        if(ans != INT_MAX){
            mini = min(mini, ans+1);          //every time we compute the no of coin for each calls
        }
    }
    return mini;                         //then have to return the minimum no of coin 
}
int minimumElements(vector<int> &num, int x)
{
    int ans = solve(num, x);
    if(ans == INT_MAX)               //if ans is int_max then we can't find as such solution so just return -1;
        return -1;
    
    return ans;
}







// -------------------------------------->>memoazation
#include <bits/stdc++.h>
int solve(vector<int>&num, int x,  vector<int>&dp){
    
    if(x == 0)
        return 0;
    if(x < 0)
        return INT_MAX;
    
    if(dp[x] != -1){
        return dp[x];
    }
    
    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++){
        int ans =  solve(num, x-num[i], dp);
        if(ans != INT_MAX){
            mini = min(mini, ans+1);
            dp[x] = mini;
        }
    }
    dp[x] = mini;
    return mini;
}
int minimumElements(vector<int> &num, int x)
{
    vector<int>dp(x+1, -1);
    int ans = solve(num, x, dp);
    if(ans == INT_MAX)
        return -1;
    
    return ans;
}






// -------------------------------------------->>Tabulation(Bottom-up Approach)
int solve(vector<int>&num, int x){
    vector<int>dp(x+1, INT_MAX);
    dp[0] = 0;
   
    for(int i=1; i<=x; i++){
        //i m trying to solve for every amt from 0 to x
        for(int j=0; j<num.size(); j++){
            if(i-num[j] >= 0   &&   dp[i-num[j]] != INT_MAX){
                dp[i] = min(dp[i], 1+dp[i-num[j]]);
            }
        }
    }
    
    if(dp[x] == INT_MAX)
        return -1;
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    return solve(num, x);
}