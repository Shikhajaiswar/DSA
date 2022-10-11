#include<iostream>
using namespace std;
int  rotate(int arr[], int n)
{
   int temp;
   temp=arr[0];
   for(int i=0; i<n; i++){
       arr[i]=arr[i+1];
   }
   arr[n-1]=temp;   

   for(int i=0; i<n; i++){
       cout<<arr[i]<<"  ";
   }
}
int main()
{
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

     rotate(arr, n);
    // cout<<"Your array is : ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<"  ";
    // }
    return 0;
}