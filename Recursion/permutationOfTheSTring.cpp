class Solution {  
    
    
    void solve(vector<int>&nums, vector<vector<int>>&ans, int index){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=0; j<nums.size() ;j++){
            swap(nums[index], ans[j]);
            //recursion pe chod do
            solve(nums, ans, index+1);
            //for backtracking (we can't  change the original string)
            swap(nums[index], ans[j]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};