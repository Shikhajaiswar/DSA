// Follow the below steps to Implement the idea:

// 1)We have 2 choices for a coin of a particular denomination, either to include, or to exclude.

// 2)If we are at coins[n-1], we can take as many instances of that coin ( unbounded inclusion ) i.e count(coins,n, sum – coins[n-1] ); then we move to coins[n-2].

// 3)After moving to coins[n-2], we can’t move back and can’t make choices for coins[n-1] isliye agar hm coin ko include karenge to  usse index par rahenge n-1 nhi karenge

// i.e count(coins, n-1, sum).   but agar hm include nhi karenge to hm n-1 karenge aage index pe bad jayenge.  

// 4)Finally, as we have to find the total number of ways, so we will add these 2 possible choices, i.e count(coins, n, sum – coins[n-1] ) + count(coins, n-1, sum );

//----------------------------------------------->> Recursive C++ program for
#include <bits/stdc++.h>
using namespace std;

// Returns the count of ways we can
// sum coins[0...n-1] coins to get sum "sum"
int count(int coins[], int n, int sum)
{

	// If sum is 0 then there is 1 solution
	// (do not include any coin)
	if (sum == 0)
		return 1;

	// If sum is less than 0 then no
	// solution exists
	if (sum < 0)
		return 0;

	// If there are no coins and sum
	// is greater than 0, then no
	// solution exist
	if (n <= 0)
		return 0;

	// count is sum of solutions (i)
	// including coins[n-1] (ii) excluding coins[n-1]
	return count(coins, n - 1, sum) + count(coins, n, sum - coins[n - 1]);
}

int main()
{
	int i, j;
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 4;

	cout << " " << count(coins, n, sum);

	return 0;
}

// Time Complexity: O(2^sum)
// Auxiliary Space: O(target)










// ------------------------------------------->>Memoazation( top-Down)
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int solve(int coins[], int N, int sum, vector<vector<long>>& dp){
        //BASE CASE
        if(sum == 0){
            return 1;
        }
        if(sum<0 || N==0){
            return 0;
        }
        
        if(dp[N-1][sum]!=-1)
            return dp[N-1][sum];
        
        //RECURSIVE SOLUTION
        dp[N-1] = solve(coins, N-1, sum, dp) + solve(coins, N, sum-coins[N-1], dp);
        return dp[N-1];
    }
    
    long long int count(int coins[], int N, int sum) {
        vector<vector<long>> dp(N,vector<long>(N+1,-1));
        return solve(coins, N, sum, dp);  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends









// ------------------------------------------------->>bottom Up approach
class Solution {
  public:
    long long int solve(int coins[], int n, int sum){
        long long int dp[n + 1][sum + 1];    //---------->Initialization of dp array

        for (int i = 0; i < n + 1; i++){     //if the sum = 0 then there is only one way(Kuch include hi mat kro)
            dp[i][0] = 1;
        }

        for (int i = 1;  i< sum + 1; i++){   //if there is no element in arr then 0 ways to make it
            dp[0][i] = 0;
        }
        
       dp[0][0]=0;
       
        for (int i = 1; i < n + 1; i++){
            for (int j = 1; j < sum+ 1; j++){
                if (j>=coins[i-1])          //if curr sum is greater then curr coin(// Either Pick this coin or not)
                    dp[i][j] = dp[i][j- coins[i-1]]+ dp[i - 1][j];
                else//// We have no option but to leave this coin
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][sum];
    }
    
    long long int count(int coins[], int N, int sum) {
        return solve(coins, N, sum);  
    }
};
