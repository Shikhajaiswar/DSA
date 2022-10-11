#include<iostream>
#include<math.h>
using namespace std;

bool fun(int n){
    int ans=0;
    for(int i=0; i<=31; i++){
        ans=pow(2,i);
        if(n==ans){
            return true;
        }
    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n);
}