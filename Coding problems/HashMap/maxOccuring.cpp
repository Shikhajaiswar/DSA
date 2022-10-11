//-------------------------------------->>Maximum frequency find by map
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    map<int,int>m;
    // int n=arr.size();
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    
    int max = 0;
    int ans = 0;
    for(auto it:m){
        if(it.second > max){
            max = it.second;
            ans = it.first;
            cout<<ans<<endl;
        }        
    }
    
    return ans;
    
}

int main()
{
    vector<int>vec ={2,2,3,3,3,3,4,5,6,7,2,2};
    int n = vec.size();
    cout<<maximumFrequency(vec, n);
    return 0;
}
