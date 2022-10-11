#include<iostream>
using namespace std;


long long int sqrtN(long long int N)
{
    // Write your code here.
    int s=0; unsigned int e=N;
    long long int mid=(e+s)/2;
    
    int ans=-1;
    while(s<=e){
        long long int squareRoot=mid*mid;
        if(squareRoot==N){
            return mid;
        }
        
        if(squareRoot<N){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

double morePrecision(int n, int precision , int temp){
    double factor=1;
    double ans=temp;

    for(int i=0; i<precision; i++){
        factor=factor/10;
    
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int temp = sqrtN(n);
    // cout<<temp;
    cout<<morePrecision(n,3,temp);
    return 0;
}