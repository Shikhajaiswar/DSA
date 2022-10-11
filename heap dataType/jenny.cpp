#include<iostream>
using namespace std;

void insert(int arr, int n, int value){
    n=n+1;
    arr[n]=value; 
    int i=n;
    int parent=[i/2];
    
    if(arr[parent]<arr[i]){
        swap(arr[parent], arr[i]);
        i=parent;
    }
    else{
         return ;  
    }
}

int main()
{
    
    return 0;
}