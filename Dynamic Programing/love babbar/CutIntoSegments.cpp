// --------------------------------------->>REcursion
#include<limits.h>
int solve(int n, int x, int y, int z){
    //Base Case
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    
    int a = solve(n-x, x, y, z)+1;
    int b = solve(n-y, x, y, z)+1;
    int c = solve(n-z, x, y, z)+1;

    return max(a, max(b,c));
}
int cutSegments(int n, int x, int y, int z) {
    int ans = solve(n, x, y, z);
    if(ans < 0)
        return 0;
    
    return ans;
}






// ------------------------------------------>>Memoazation
#include<limits.h>
int solve(int n, int x, int y, int z, vector<int>arr){
    //Base Case
    if(n==0)
        return 0;
    if(n<0)
        return INT_MIN;
    
    if(arr[n]!=-1)
        return arr[n];
    
    int a = solve(n-x, x, y, z, arr)+1;
    int b = solve(n-y, x, y, z, arr)+1;
    int c = solve(n-z, x, y, z, arr)+1;

    arr[n] = max(a, max(b,c));
    return arr[n];
}
int cutSegments(int n, int x, int y, int z) {
    vector<int>arr(n+1, -1);
    int ans = solve(n, x, y, z, arr);
    if(ans < 0)
        return 0;
    
    return ans;
}










// ---------------------------------------------->>Tabulation(Bottom-Up Approach)
// how do we know 1D or 2d dp is used     ------>>Check for the variable how much variables are changing

// if one varible is change   make 1D dp
// if two varible is change   make 2D dp

#include<limits.h>
int solveDP(int n, int x, int y, int z){
    vector<int>dp(n+1, INT_MIN);
    
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        if(i-x >= 0)
            dp[i] = max(dp[i], dp[i-x]+1);
        
        if(i-y >= 0)
            dp[i] = max(dp[i], dp[i-y]+1);
        
        if(i-z >= 0)
            dp[i] = max(dp[i], dp[i-z]+1);
    }
    if(dp[n]<0)
        return 0;
    
    return dp[n];
    
}
int cutSegments(int n, int x, int y, int z) {
    int ans = solveDP(n, x, y, z);
//     if(ans < 0)
//         return 0;
    
    return ans;
}

