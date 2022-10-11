#include <bits/stdc++.h>
using namespace std;

int maxLen(int arr[], int n){                 //Time Complexity: O(n^2) due to the use of nested loops.
                                                // Space complexity: O(1) as no extra space is used.

    int max_len=0; 
    for(int i=0; i<n; i++){
        int current_sum=0;

        for(int j=i; j<n; j++){
            current_sum +=arr[j];

            if(current_sum==0){
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    return max_len;
}
int main()
{
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n=sizeof(arr)/ sizeof(arr[0]);
    cout << "Length of the longest 0 sum subarray is "
         << maxLen(arr, n);
    return 0;
}
