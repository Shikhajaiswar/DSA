#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    if(i==j  || i>j){
        return ;
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    swap(arr, ++i, --j);
}

void reverse(int arr[], int n){
    int i=0; int j=n-1;
    swap(arr, i,j);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}