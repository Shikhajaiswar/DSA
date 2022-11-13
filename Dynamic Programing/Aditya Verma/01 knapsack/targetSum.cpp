class Solution 
{
public:
    int count=0;
public:
    void calculate(vector<int>& nums,int pos,int sum,int S)
    {
        if(pos==nums.size())
        {
        if(sum==S)
            count++;
        return;
        }
        calculate(nums,pos+1,sum+nums[pos],S);
        calculate(nums,pos+1,sum-nums[pos],S);   
    }
public:
    int findTargetSumWays(vector<int>& nums, int S)
    {
       calculate(nums,0,0,S);
       return count;
    }
};












class Solution 
{
public:
    int findTargetSumWays(vector<int>& nums, int S) 
    {
    int sum=0;
    for(int i=0;i<nums.size();i++)
        sum=sum+nums[i];
    if (S<-sum || S>sum) 
        return 0;
    vector<vector<int>> dp(nums.size() + 1, vector<int>(sum*2 + 1, 0));
    //int dp[nums.size()+1][sum*2+1];
    dp[0][sum]=1;
    for(int i=1;i<=nums.size();i++)
    {
        for(int j=0;j<sum*2+1;j++)
        {
            if(j+nums[i-1]<sum*2+1) 
                dp[i][j]=dp[i][j]+dp[i-1][j+nums[i-1]];
            if(j-nums[i-1]>=0)
                dp[i][j]=dp[i][j]+dp[i-1][j-nums[i-1]];
        }
    }
    return dp[nums.size()][sum+S];    
    }
};