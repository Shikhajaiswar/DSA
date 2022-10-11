#include <iostream>
using namespace std;

int sum(int n)
{
    int add = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        add = add + temp;
    }
    return add;
}

int superdigit(int x)
{
    int result;
    while (x / 10 >=1)
    {
        result = sum(x);
        x = result;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int fall=superdigit(n);
    cout << "The sum is : " << fall;
    return 0;
}