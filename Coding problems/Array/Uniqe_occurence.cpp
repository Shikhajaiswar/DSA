#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr){
    unordered_map<int,int> mp;
    for(auto x:arr){
            mp[x]++;
        }

   for(auto x:mp)
        {
            int y = x.second;
            for(auto z:mp)
            {
                if(y==z.second && x!=z)
                    return false;
            }
        }
        return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<uniqueOccurrences(arr);

  
   
    return 0;
}