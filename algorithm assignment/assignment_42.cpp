#include<iostream>
using namespace std;

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int freqentValue(int arr[], int n){
    int freq = 1; int max = 1; int value;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            max++;
        }
        else{
            max =1;
        }
        if(max>freq){
            freq = max;
            value = arr[i-1];
        }
    }
    return value;
}

void countSort(int arr[], int n){
    int max = findMax(arr, n);

    int count[max+1] = {0};
    int output[n];

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    for(int i=1; i<max+1; i++){
        count[i] += count[i-1];
    }

    for(int i=n-1; i>=0; i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }

}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {7, 4, 7, 2, 7, 1,1,1,1, 2, 5, 3, 6};
    int n=sizeof(arr)/sizeof(arr[0]);

    countSort(arr, n);
    display(arr, n);

    cout<<freqentValue(arr, n);
    
    
    return 0;
}