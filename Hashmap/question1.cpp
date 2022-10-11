// Ninja is given an array of integers that contain numbers in random order. He needs to write a program to find and return the number which occurs the maximum times in the given input. He needs your help to solve this problem.
// If two or more elements contend for the maximum frequency, return the element which occurs in the array first i.e. whose index is lowest.


// For 'arr' = [ 1, 2, 3, 1, 2]. you need to return 1.
#include<iostream>
#include<unordered_map>
using namespace std;

int countfrequency(int n, int arr[]){
    unordered_map<int,int> count;
    int maxFreq=0;
    int maxAns=0; 
    
    for(int i=0; i<n; i++){
        count[arr[i]]++;
        maxFreq=max(maxFreq, count[arr[i]]);
    }

    for(int i=0; i<n; i++){
        if(maxFreq==count[arr[i]]){
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}


int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<countfrequency(n, arr);
    return 0;
}