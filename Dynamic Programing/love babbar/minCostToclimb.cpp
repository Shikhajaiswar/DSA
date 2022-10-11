// ----------------------------------------->>memoazation
class Solution {
    int solve(vector<int>cost, int n, int arr[]){
        
        if(n==0)
            return cost[0];
        if(n==1)
            return cost[1];
        if(arr[n]!=-1){
            return arr[n];
        }
        
        int ans = cost[n] + min(solve(cost, n-1, arr), solve(cost, n-2, arr));
        arr[n] = ans;
        return ans;
    }
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int arr[n+1];
        for(int i=0; i<=n; i++){
            arr[i] =-1;
        }
        int ans = min(solve(cost, n-1, arr), solve(cost, n-2, arr));
        return ans;
    }
};





// -------------------------------------------->>Bottom-up
class Solution {
    int solve(vector<int>cost, int n, vector<int>arr){
        arr[0] = cost[0];
        arr[1] = cost[1];
        for(int i=2; i<=n; i++){
            arr[i] = cost[i] + min(arr[i-1] , arr[i-2]);
        }

        return arr[n];
    }
    
public: 
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>arr(n+1);
        int ans = min(solve(cost, n-1, arr), solve(cost, n-2, arr));
        return ans;
    }
};








// ------------------------------------->>More space optimise
class Solution {
   
    
public: 
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int p1 = cost[1];
        int p2 = cost[0];
        for(int i=2;i<n;i++){
            int curr = cost[i] + min(p1,p2);
            p2 = p1;
            p1 = curr;
        }
        return min(p1,p2);
    }
};