#include<iostream>
using namespace std;

int main()
{
    // int a=9;
    // int *p=&a;

    // int *p=new int(80);              //in heap memory formed an int type
    int *arr=new int[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    delete[] arr;       //<<------------We free the array so now it's not neccesay that stored element must be there
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}