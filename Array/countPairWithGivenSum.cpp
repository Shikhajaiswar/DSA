#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0,k;
    cin>>n;
    int arr[n];
    cout<<"Enter the key : ";                        //This is only for distinct numbers
    cin>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int i=0;
    int j=n-1;
    
    while(i<j){
        if(arr[i]+arr[j]==k){
            count++;
            i++;j--;
        }
        else if(arr[i]+arr[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"\n"<<count;
    return 0;
}



// ------------------>>Another Method<<-------------------
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int getPairCount(int arr[], int n, int k){
//      unordered_map<int,int> m;
//        int count = 0;
       
//        for(int i=0;i<n;i++){
           
//            int val = k - arr[i];
           
//            if(m[val]){
//                count += m[val];
//            }
//            m[arr[i]]++;
           
//        }
//        return count;
    

// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         int result= getPairCount(arr, n, k);
//         cout<<result<<" ";
//         return 0;
//     }
//     return 0;
// }