#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    b = 20, c=11;
    a=b-c;
    for(c=4; c<a; c++){
        b = b*2;
    }
    c = a+b+c;
    cout<<a<<" "<<b<<endl;
    cout<<c;
    return 0;
}