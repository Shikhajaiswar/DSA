#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];                           
    }

    int flag;//flag is for if in first iteration you can't find any swaping then  the list is already sorted so come out the loop (only for make easy the task)
    for(int i=0; i<n-1; i++){  eesw                           // min O(n) 
        flag=0;                                           // max O(n2)
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag++;
            }
        }
        if(flag==0)
            break;
    } 


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}