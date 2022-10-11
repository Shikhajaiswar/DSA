// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// Method 1
vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
                    
            }      
            
        }
       return {};
}

// Method 2 ---------------------------------->>Optimise solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map <int , int> mp;
    
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(mp.count(target-nums[i])){
                return { mp[target - nums[i]] , i};
            }
            mp[nums[i]] = i ;
        }
       throw;
    }
};