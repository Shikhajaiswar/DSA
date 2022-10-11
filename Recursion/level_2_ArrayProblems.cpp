// //----------------------------->>Find the array is sorted or not<<-------------------
// #include<iostream>
// using namespace std;

// int count=0;
// void checkSorted(int arr[], int n, int i){
//     if(arr[i]<arr[i+1]  && n>i){
//         count++;
//         return checkSorted(arr, n, ++i);
//     } 
// }

// int main()
// {
//     int arr[]={12,24,54,56};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     checkSorted(arr, n ,0);
//     // cout<<count;
//     if(count<n-1){
//         cout<<"The array is not Sorted";
//     }
//     else{
//         cout<<"The array is sorted";
//     }
//     return 0;
// }

// ----------------------------------->>Another method<<---------------------------------------
// #include<iostream>
// using namespace std;

// int sortedArray(int arr[], int i, int n){
//     if(i==n-1){
//         return true;
//     }
//     return arr[i]<arr[i+1] && sortedArray(arr, i+1, n);
// }
// int main()
// {
//     int arr[]={2,32,45,123};
//     int n=sizeof(arr)/ sizeof(arr[0]);
//     cout<<sortedArray(arr, 0, n);
//     return 0;
// }


// --------------------------------->>Linear search by recursion<<-------------------------------
// #include<iostream>
// using namespace std;

// int LinearSearch(int arr[], int key, int n, int i){
//     if(i<=n-1){
//         if(arr[i]==key) return i;
//         return LinearSearch(arr, key, n, i+1);    
//     }
//     return -1;
// }

// int main()
// {
//     int arr[]={12,43,65,76,98};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int result=LinearSearch(arr, 78, n, 0);
//     if(result==-1){
//         cout<<"THe Key is not present hear";
//     }
//     else{

//     cout<<result;
//     }
//     return 0;
// }

//---------------------------------->>Binary Search by recursion<<-------------------------------
// #include<iostream>
// using namespace std;

// int BinarySearch(int arr[], int key, int start, int end){
//     if(end>=start){
//         int mid=(start+end)/2;

//         if(arr[mid]==key) return mid;

//         if(arr[mid]>key) return BinarySearch(arr, key, start, mid-1);

//         return BinarySearch(arr, key, mid+1, end);
//     }
    
//     return -1;

// }

// int main()
// {
//     int arr[]={12,43,65,76,98};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int result=LinearSearch(arr, 78, n, 0);
    // if(result==-1){
    //     cout<<"THe Key is not present hear";
    // }
    // else{

    // cout<<result;
    // }
//     return 0;
// }

// ----------------------------------->>Returing the index number of the array wher atarget present<<----------------------------
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> findAllIndex(vector<int> &arr, int target, int index){
//     int n=arr.size();
//     static vector<int>list;
//     if(index==n){
//         return list;
//     }
//     else{
//         if(arr[index]==target){
//             list.push_back(index);
//         }
//         return findAllIndex(arr, target, index+1);
//     }
    
// }

// int main(){
//     vector<int>arr={1,4,4,6,4,4,7,4,9,4};
//     vector<int>list;
//     int target=4;
//     list=findAllIndex(arr , target, 0);
//     for (int i = 0; i < list.size(); i++)
//     {
//         cout<<list[i]<<"  ";
//     }
//     cout<<endl;
    
//     return 0;
// }




