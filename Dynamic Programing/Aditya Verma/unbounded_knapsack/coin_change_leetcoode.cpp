// https://leetcode.com/problems/coin-change/discuss/778548/C%2B%2B-DP-solution-explained-~100-Time-100-Space

// ----------------------------------------->Recursive solution
class Solution {
    public:
   int recursive(int i, vector<int> &coins,int n, int amount){
        if(i==0){                      //-------->agr ek hi element hai to
            if(amount%coins[i]==0) return amount/coins[i];
            else return 1e9;
        }
        int notTake = recursive(i-1,coins,n,amount);
        int take = INT_MAX;
        if(coins[i]<=amount){
            take = 1+recursive(i,coins,n,amount-coins[i]);
        }
        return min(take,notTake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int res = recursive(n-1,coins,n,amount);
        if(res==1e9) return -1;
        else return res;
    }
};







// ----------------------------------------->Optimal Solution 
class Solution {
    public:
    int coinChange(vector<int>& coins, int n) {
        // creating the base dp array, with first value set to 0
        int dp[++n];
        dp[0] = 0;
        // more convenient to have the coins sorted
        sort(begin(coins), end(coins));
        // populating our dp array
        for (int i = 1; i < n; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            dp[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0) 
                    break;
                // if it was a previously not reached cell, we do not add use it
                if (dp[i - c] != INT_MAX) 
                    dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[--n] == INT_MAX ? -1 : dp[n];
    }
};










// ------------------------------------>Memoazation

 int recursive(int i, vector<int> &coins,int n, int amount,vector<vector<int>> &dp){
        if(i==0){
            if(amount%coins[i]==0) return amount/coins[i];
            else return 1e9;
        }

        if(dp[i][amount]!=-1) return dp[i][amount];
        int notTake = recursive(i-1,coins,n,amount,dp);
        int take = INT_MAX;
        if(coins[i]<=amount){
            take = 1+recursive(i,coins,n,amount-coins[i],dp);
        }
        return dp[i][amount]=min(take,notTake);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int res = recursive(n-1,coins,n,amount,dp);
        if(res==1e9) return -1;
        else return res;
    }






    // --------------------------------------->Tabulation
class Solution {
public:
    int coinChange(vector<int>& coins, int amount){
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,0));

        for(int i=0;i<=amount;i++){        //filling the row 1
            if(i%coins[0]==0) dp[0][i]=i/coins[0];
            else dp[0][i] = 1e9;
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int notTake = dp[i-1][j];
                int take = INT_MAX;
                if(coins[i]<=j){
                    take = 1+dp[i][j-coins[i]];
                }
                dp[i][j] = min(take,notTake);
            }
        }
        int res = dp[n-1][amount];
        if(res==1e9) return -1;
        return res;
    }
};