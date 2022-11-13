#include<iostream>
#include<vector>
#include<utility>
#include<string.h>
using namespace std;

void fun(char ch, int n, int arr[], int amt){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ch=='*'){
                if(arr[i]*arr[j]==amt){
                    cout<<"["<<arr[i]<< ","<<arr[j]<<"] ";
                }    
            }
            else if(ch=='+'){
                if(arr[i]+arr[j]==amt)
                    cout<<"["<<arr[i]<< ","<<arr[j]<<"] ";
            }
            else if(ch=='-'){
                if(arr[i]-arr[j]==amt)
                    cout<<"["<<arr[i]<< ","<<arr[j]<<"] ";
            }
            else if(ch=='/'){
                if(arr[i]/arr[j]==amt)
                    cout<<"["<<arr[i]<< ","<<arr[j]<<"] ";
            }
        }
    }  
}

int main(){
    
    char ch;cin>>ch;
    int n; cin>>n;
    int amt; cin>>amt;

    int arr[n]={2,3,5,8,0,6};
    fun(ch, n,arr, amt);
    return 0;
}