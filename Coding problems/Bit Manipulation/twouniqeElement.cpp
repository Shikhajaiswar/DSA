// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {2,3,4,5,6,2,4,5,6,7};     //all number appear twice but only two number appear ones so find out those num
//     int n=sizeof(arr)/sizeof(arr[0]);        //complexity = O(n*n)
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
                
//             }    
//         }
//         if(count == 1){
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }



// ---------------------------------------------->>OPtimise solution
// #include<iostream>
// #include<map>
// using namespace std;

// int main()
// {
//     map<int, int> m;
//     int arr[] = {2,3,4,5,6,2,4,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);         //run n times 
//     for(int i=0; i<n; i++){
//         m[arr[i]]++;           //maps takes logn 
//     }                                //hence the time complexity is n(logn)
//                                      //space complexity is O(n)

//     for(auto it:m){
//         if(it.second == 1)
//             cout<<it.first<<" ";
//     }
//     return 0;
// }



//--------------------------------------->More Optimize solution
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4,5,5,6,2,4,7,7};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int ans =arr[0];
    for(int i=1; i<n; i++){
        ans = ans^arr[i];
    }
 
    cout<<ans<<endl;
    int count=0;
    while(ans!=0){              //complexity = O(logn)
        if(ans&1){
            count++;
        }
        ans=ans>>1;
    }
    cout<<count<<endl;

    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        if(arr[i]&(1<<count)){
            xor1 = xor1 ^ arr[i];
        }
        else{
            xor2 = xor2 ^ arr[i];
        }
    }

    cout<<xor1<<" "<<xor2;
    return 0;
}