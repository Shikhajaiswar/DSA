// -------------------->>Not a optimul solution
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int>ans;
//     for(int i=0; i<arr1.size(); i++){
//         int temp=arr1[i];
//         for(int j=0; j<arr2.size(); j++){
//             if(temp==arr2[j]){
//                 ans.push_back(temp);
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }


//     return 0;
// }

// ------------------------------->>Method 2 optimul solution

// Both arrays are sorted then if any element is not equal(less then ) then we will not go forward

#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0, j=0;
	vector<int>ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
    }
    
    return ans;
}

int main()
{
    
    return 0;
}
