// Maximum sum of non-adjacent elements
// -------------------------------------->>REcursion
int solve(vector<int>&nums, int n){
    if(n < 0)
        return 0;
    if(n == 0)
        return nums[0];
    
    int include = nums[n] + solve(nums, n-2);
    int exclude = solve(nums, n-1);
    return max(exclude, include);
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();
    int ans = solve(nums, n-1);
    return ans;
}







// --------------------------------->>Memoazation
#include <bits/stdc++.h> 

int solve(vector<int>&nums, int n, vector<int>dp){
    if(n < 0)
        return 0;
    if(n == 0)
        return nums[0];
    
    if(dp[n] != -1){
        return dp[n];
    }
    
    int include = nums[n] + solve(nums, n-2, dp);
    int exclude = solve(nums, n-1, dp);
    return dp[n] = max(exclude, include);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int>dp(n+1, -1);
    int ans = solve(nums, n-1, dp);
    return ans;
}







// ----------------------------------------->>Bottom-up(Tabulation)
#include <bits/stdc++.h> 

int solve(vector<int>&nums, int n, vector<int>dp){
    if(n < 0)
        return 0;
    if(n == 0)
        return nums[0];
    
    if(dp[n] != -1){
        return dp[n];
    }
    
    int include = nums[n] + solve(nums, n-2, dp);
    int exclude = solve(nums, n-1, dp);
    return dp[n] = max(exclude, include);
}

int solveDP(vector<int>nums, int n){
    vector<int>dp(n+1, 0);
    dp[0] = nums[0];
    
    for(int i=1; i<=n; i++){
        dp[i] = max(nums[i]+dp[i-2] , dp[i-1]);
    }
    
//     if()
    return dp[n];
}


int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
//     vector<int>dp(n+1, -1);
    int ans = solveDP(nums, n-1);
    return ans;
}











// -------------------------------------------->>Space Optimisation (tabulation)
#include <bits/stdc++.h> 
int solveDP(vector<int>nums, int n){
    int prev2 = 0;
    int prev1 = nums[0];
    
    for(int i=1; i<=n; i++){
        int include = nums[i] + prev2;
        int exclude = prev1;
        int ans = max(include, exclude);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    int ans = solveDP(nums, n-1);
    return ans;
}