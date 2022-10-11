#include<iostream>
using namespace std;

int main()
{
    int a = 5, b=10;

    a = a^b;     //5^10
    b = b^a;     //5^10^5 == 5 remove and b=10
    a = b^a;     //(5^10^5) ^ (5^10) == 10 gets remove and two 5 gets remove left 5 only

    cout<<a<<" "<<b;
    return 0;
}