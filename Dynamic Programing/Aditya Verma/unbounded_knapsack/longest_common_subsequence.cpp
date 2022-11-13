// ---------------------------------------->>Recursive
class Solution {
    
    
public:
    int solve(string &text1, string &text2, int n, int m){
        if(n<0 || m<0){
            return 0;
        }
        
        if(text1[n] == text2[m]){
            return  solve(text1, text2, n-1, m-1)+1;
        }
        else{
            return max(solve(text1, text2, n-1, m), solve(text1, text2, n, m-1));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        return  solve(text1, text2, n-1, m-1);
        
    }
};








//----------------------------------------------->Memoazation  
public:
    int solve(string &text1, string &text2, int n, int m, vector<vector<int>>dp){
        if(n<0 || m<0){
            return 0;
        }
        
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        
        if(text1[n] == text2[m]){
            return dp[n][m] =  solve(text1, text2, n-1, m-1, dp)+1;
        }
        else{
            return dp[n][m] = max(solve(text1, text2, n-1, m, dp), solve(text1, text2, n, m-1, dp));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        return solve(text1, text2, n-1, m-1, dp);
        
    }
// };









// -------------------------------------->>bottom - up
class Solution {
public: 
    int solve(string &text1, string &text2, int n, int m){
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        
        dp[0][0] = 0;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                   dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        return  solve(text1, text2, n, m);
        
    }
};













// ----------------------------------------------->Space - Optimization
// optimize
        class Solution {
        public:
            int longestCommonSubsequence(string s1, string s2) {
                int n = s1.size();
                int m = s2.size();
                vector<int> dp(m+1,0),curr(m+1,0);
                
                for(int i =0;i<=n;i++){
                    for(int j=0;j<=m;j++){
                        if(i == 0) dp[j] = 0;
                        else if(j == 0) curr[j] = 0;
                        else{
                            if(s1[i-1] == s2[j-1]) curr[j] = 1 + dp[j-1];
                            else curr[j] = max(dp[j],curr[j-1]);
                        }
                    }
                    dp = curr;
                }
                
                return dp[m];
            }
        };