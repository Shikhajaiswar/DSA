#include<iostream>
using namespace std;

int max_Min_single(int arr[], int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){                 //Time Complexity O(n)
        if(arr[i]>max){                     //if array in incresing order worst time O2(n-1)
            max=arr[i];                     //if array in decresing order best time O(n-1)
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"The max element is : "<<max<<endl;
    cout<<"The min element is : "<<min<<endl;
}

int main()
{
    int arr[]={5,8,3,2,-4,6,10,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_Min_single(arr, n);
    
    return 0;
}