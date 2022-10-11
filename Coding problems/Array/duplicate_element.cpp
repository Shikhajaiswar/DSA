                                   //Method 1
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         int count=0;
//         for(int j=0; j<n; j++){
//             if(i==j){
//                 continue;
//             }
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//             if(count>0){
//                 cout<<arr[i];
//                 break;
//             }
//     }
//     return 0;
// }

// -------------------------->>MEthod 2

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     vector<int> frequency(n, 0);

//     for (int i= 0; i < n; i++) 
//     {
//         int currentNumber = arr[i];
//         frequency[currentNumber]++;
//     }
//      int duplicate=0;
//     for (int currentNumber = 1; currentNumber <= n - 1; currentNumber++) 
//     {

//         if (frequency[currentNumber] > 1) 
//         {
//             duplicate = currentNumber;
//         }
//     }
//     cout<<duplicate;
//     return 0;
// }

// ------------------------------>>Method3
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int arr[5]={2,4,5,2,3};

//     int ans=0;

//     for(int i=0; i<5; i++){
//         ans = ans^arr[i];
//         // cout<<ans<<" ";
//     }
//     for(int curr=1; curr<5; curr++){
//         ans=ans^curr;
//     }

//     cout<<ans;
//     return 0;
// }


 