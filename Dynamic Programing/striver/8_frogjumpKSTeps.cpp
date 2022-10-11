// --------------------------------------------->>Memoazation
#include<iostream>
#include<vector>
using namespace std;


int solveUtil(int index, vector<int>& height, vector<int>& dp, int k){
    if(index==0) return 0;                         //if there is no stairs then work done 0
    if(dp[index]!=-1) return dp[index];
    
    int mmSteps = INT_MAX;
        
    for(int j=1;j<=k;j++){
        if(index-j>=0){                            //We need to make sure that we are not passing negative index to the array, therefore an extra if the condition is used. 
            int jump = solveUtil(index-j, height, dp, k)+ abs(height[index]- height[index-j]);
            mmSteps= min(jump, mmSteps);
        }
    }
    return dp[index]= mmSteps;
    
}

int solve(int n, vector<int>& height , int k){
    vector<int> dp(n,-1);
    return solveUtil(n-1, height, dp, k);
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  int k=2;

  cout<<solve(n,height,k);
}






// --------------------------------------->>Top-down
#include <bits/stdc++.h>

using namespace std;

int solveUtil(int n, vector<int>& height, vector<int>& dp, int k){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int mmSteps = INT_MAX;
        
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump = dp[i-j]+ abs(height[i]- height[i-j]);
                mmSteps= min(jump, mmSteps);
            }
        }
        dp[i]= mmSteps;
    }
    return dp[n-1];
}

int solve(int n, vector<int>& height , int k){
    vector<int> dp(n,-1);
    return solveUtil(n, height, dp, k);
}

int main() {

  vector<int> height{30,10,60 , 10 , 60 , 50};
  int n=height.size();
  int k=2;
  vector<int> dp(n,-1);
  cout<<solve(n,height,k);
}
