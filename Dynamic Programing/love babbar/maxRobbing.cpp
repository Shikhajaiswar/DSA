// ----------------------------------->>REcursive approach
#include <bits/stdc++.h> 
int solve(vector<int> weight, vector<int> value, int index, int capacity){
    //Base case
    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }
    
    
    int include = 0;
    if(weight[index]<=capacity){
        include = value[index] + solve(weight, value, index-1, capacity-weight[index]);
    }
    
    int exclude = 0 + solve(weight,value,index-1,capacity);   
    int ans = max(include, exclude);
    return ans;
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return solve(weight, value, n-1, maxWeight);

}










// ----------------------------------->>Memoazation approach
#include <bits/stdc++.h> 
int solve(vector<int> weight, vector<int> value, int index, int capacity, vector<vector<int>>dp){
    //Base case
    if(index == 0){
        if(weight[0] <= capacity)
            return value[0];
        else
            return 0;
    }
    
    if(dp[index][capacity] != -1){
        return dp[index][capacity];
    }
    
    int include = 0;
    if(weight[index]<=capacity){
        include = value[index] + solve(weight, value, index-1, capacity-weight[index], dp);
    }
    
    int exclude = 0 + solve(weight,value,index-1,capacity, dp);   
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>>dp (n, vector<int>(maxWeight+1, -1));
	return solve(weight, value, n-1, maxWeight,dp);

}











// ---------------------------------------->>Tabulation
int knapsack(vector<int> weight, vector<int> value, int n, int w) 
{

    //step 1(to make a 2D array)
   vector<vector<int>> dp(n+1, vector<int>(w+1, 0));

   //step 2(Base cases)
   for(int i=0; i<=n; i++) dp[i][0]=0;  //agar capacity 0 hai to max profit 0 hi hoga
   for(int i=0; i<=w; i++) dp[0][i]=0;  //agar kuch chori karne ko kuch nhi hai to 0 profit

   //step 3
   for(int i=1; i<=n; i++)
   {
       for(int wt=1; wt<=w; wt++)
       {
           if(weight[i-1]>wt)   //agar weight jada capacity se to knapsack mai mat dalo
           {
               dp[i][wt]=dp[i-1][wt];
           }
           else         //else we have choice to fill or not that element
           {
               dp[i][wt]=max(dp[i-1][wt], dp[i-1][wt-weight[i-1]]+value[i-1]);
           }
       }
   }
   return dp[n][w];
}