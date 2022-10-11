#include<iostream>
#include<vector>
using namespace std;

long long minimumTime(int m, vector<int> &a) {
    int sum=0; static int k=0;
        for(int i=0; i<a.size(); i++){
            sum=sum+k/a[i];
        }
        if(sum==m){
            return k;
        }
        else{
            k++;
            minimumTime(m,a);
        }   
}

int main()
{
    vector<int>arr={7, 9, 2, 10};
    cout<<minimumTime(5,arr);
    return 0;
}