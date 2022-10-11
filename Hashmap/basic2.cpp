//---------------------->>  how an unordered_map is initialized with the values of array

// 1)it searches for a key (arr[i]). If it is found, the corresponding value is incremented by 1.

// 2)If it is not found, a new element will be created with key arr[i] and because value is of type int, default value of 0 is stored for it. Because of ++ operator, it will be incremented by one. So, at the end of the operation, the value will be 1.

// => arr[i] = 1 => Not present in map => New pair added => hash: [{1, 1}]
// i = 1 => arr[i] = 5 => Not present in map => New pair added => hash: [{1, 1}, {5, 1}]
// i = 2 => arr[i] = 2 => Not present in map => New pair added => hash: [{1, 1}, {5, 1}, {2, 1}]
// i = 3 => arr[i] = 1 => Present in map => Existing pair updated => hash: [{1, 2}, {5, 1}, {2, 1}]
// i = 4 => arr[i] = 3 => Not present in map => New pair added => hash: [{1, 2}, {5, 1}, {2, 1}, {3, 1}]
// i = 5 => arr[i] = 2 => Present in map => Existing pair updated => hash: [{1, 2}, {5, 1}, {2, 2}, {3, 1}]
// i = 6 => arr[i] = 1 => Present in map => Existing pair updated => hash: [{1, 3}, {5, 1}, {2, 2}, {3, 1}]

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int,int> shikha;
    for (int i=0; i<n; i++)
        shikha[arr[i]]++;


    unordered_map<int, int>:: iterator iter;
    for (iter = shikha.begin(); iter != shikha.end(); iter++) 
    { 
        // iter is like a pointer to demo<string, int>, itr->first stores the key
        //iter->second stores the value part
        cout << iter->first << "  " << iter->second << endl; 
     }        
    return 0;
}