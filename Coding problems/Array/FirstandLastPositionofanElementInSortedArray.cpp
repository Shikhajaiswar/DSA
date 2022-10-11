#include<iostream>
#include<vector>
#include<utility>
using namespace std;

pair<int, int> firstAndLastPosition_1(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    for(int i=0;i<n;i++){   //--------------->>But it takes O(n) time complexity
        if(arr[i]==k){
            if(rec==-1){
                p.first=i;
            }
             rec=i;
        }
    } 
    p.second=rec;
    if(p.second ==-1){
        p.first=-1;
    }
    return p;
}

int firstPosition(vector<int>& arr, int size, int key){

   int start = 0;
   int end = size - 1;
   int mid = (end +start)/2;
   int ans = - 1;

   while (start <= end)
   {
       if(key == arr[mid]){
           ans = mid;
           end = mid - 1;
       }
       else if(key > arr[mid]){
           start = mid + 1;
       }
       else{
           end = mid - 1;
       }
       mid = start + (end -start)/2;
   }
   return ans;
   
}

int lastPosition(vector<int>& arr, int size, int key){

   int start = 0;
   int end = size - 1;
   int mid = start + (end - start)/2;
   int ans = -1;

   while(start <= end ){
       if(key == arr[mid]){
           ans = mid;
           start = mid + 1;
       }
       else if(key > arr[mid]){
           start = mid + 1;
       }
       else{
           end = mid -1;
       }
       mid = start + (end - start)/2;
   }
   return ans;

}

pair<int, int> firstAndLastPosition_2(vector<int>& arr, int n, int k)
{
   pair<int, int> p;
   p.first = firstPosition(arr, n, k);//--------------------->>It takes only O(logn) time 
   p.second = lastPosition(arr, n, k);
   
   return p;
     
}

int main()
{
    vector<int>vec={1,1,2,2,3,3,3,3,3,5};
    int n=vec.size();
    int k=3;
    pair<int, int>result=firstAndLastPosition(vec, n, k);
    cout<<result.first<<" "<<result.second;
    return 0;
}
