#include <iostream>
using namespace std;
int main()
{
  int mx = INT32_MIN;
  int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
  for (int i = 0; i < 8; i++)
  {
    mx = max(mx, arr[i]);
  }
  cout << "the maximum average of a subarray is " << mx << endl;
  return 0;
}
