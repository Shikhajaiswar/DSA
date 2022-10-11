#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
     vector<int>ans;
      sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++){
          if(nums[i]==nums[i-1]){
              ans.push_back(nums[i]);//1 2 2 3 3 4 7 8
          }
      }
   return ans;
      
  }
int main()
{
    int arr[]={2,5,3,7,2,5,3};
    vector<int>result;
    result=findDuplicate(arr);
    
    for(auto x:result){
        cout<<x.first;
        cout<<endl;
    }
    return 0;
}