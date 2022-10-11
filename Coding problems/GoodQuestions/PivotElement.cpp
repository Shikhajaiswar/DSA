#include<iostream>
using namespace std;

int FindPivot(int arr[], int n){
    int start=0; 
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }

    return start;
}

int main()
{
    int arr[]={6,7,9,1,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

cout<<FindPivot(arr, n);
    return 0;
}