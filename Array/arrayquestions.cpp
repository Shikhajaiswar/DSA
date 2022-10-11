// ----------------------------------->>  Store 2D Array(By single pointer) <<-----------------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int *A[3];
//     A[0]=new int [4];
//     A[1]=new int [4];
//     A[2]=new int [4];

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>A[i][j];
//         }
//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<A[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ------------------------------------->>By Double Pointer<<---------------------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int **A;
//     A=new int *[3];
//     A[0]=new int [4];
//     A[1]=new int [4];
//     A[2]= new int [4];

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>A[i][j];
//         }
//     }

    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<A[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// -------------------------------->>Max and min element of a string<<--------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     int min = arr[0];
//     for(int i=0; i<5; i++){
//         if(arr[i]>max)
//             max=arr[i];    
//     }
//     for(int i=0; i<5; i++){
//         if(arr[i]<min)
//             min =arr[i];
//     }
//     cout<<"Maximum element is : "<<max;
//     cout<<"\n"<<"Minimum element is : "<<min;


//     return 0;
// }


// ----------------------->>Reverse a array<<------------------------
// #include<iostream>
// using namespace std;

// void fun(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     fun(arr,n);
//     return 0;
// }

// ------------------------>>linear search<<--------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     for(int i=0; i<n; i++){
//         if(arr[i]==key)
//             cout<<i;
//     }
//     return 0;
// }

// ---------------------------->>Binary search<<-----------------------


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int last=n;
//     int first = 0;
//     int mid=(last+first)/2;
//     while(first<=last){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             last=mid-1;
//             mid=(last+first)/2;
//         }
//         else if(arr[mid]<key){
//             first=mid+1;
//             mid=(last+first)/2;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     // sort(arr,arr+n);
//     int key;
//     cin>>key;
//     int result =binarySearch(arr,n, key);
//     cout<<result;
//     return 0;
// }



//Binary search with recursion
#include <stdio.h>
// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
int mid = (l+r)/2;
// If the element is present at the middle itself
if (arr[mid] == x) return mid;
// If element is smaller than mid, then it can only be present
// in left subarray
if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
// Else the element can only be present in right subarray
return binarySearch(arr, mid+1, r, x);
}
// We reach here when element is not present in array
return -1;
}
int main(void)
{
int arr[] = {2, 3, 4, 10, 40,87};
int n = sizeof(arr)/ sizeof(arr[0]);
// printf("%d", n);
int x = 2;
int result = binarySearch(arr, 0, n-1, x);
(result == -1)? printf("Element is not present in array")
: printf("Element is present at index %d", result);
return 0;
}




// ------------------------------>>Kth largest and kth smallest element<<---------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k; cin>>k;
//     for(int i=1; i<n;i++){
//         int current=arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<arr[k-1]<<"  "<<arr[n-k];
//     return 0;
// }

// -------------------------------------->>Find the no. of occurance of an integer in array<<------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k=0; 
//     int key; cin>>key;
//     for(int i=0; i<n; i++){
//         if(key==arr[i]){
//             k++;
//         }

//     }
//     cout<<"The occurance is : "<<k;
//     return 0;
// }

// -------------------------------------->>Max till ith elenment<<---------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n; int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i=0; i<n; i++){
//         arr[i]=max;
//         if(arr[i]<arr[i+1]){
//             max=arr[i+1];
//         }
//         else if(arr[i]>=arr[i+1]){
//             continue;
//         }
//     }
//     // arr[n-1]=max;
//     // max=arr[]
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// no of subarray of an array with n elements is nC2 +n = n(n+1)/2

