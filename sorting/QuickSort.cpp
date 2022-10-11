#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// int partition(int arr[], int lower, int upper)
// {
//     int pivot = arr[lower];
//     int i = lower;
//     int j = upper - 1;
//     while (i < j)
//     {

//         while (arr[i] < pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j++;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(lower, j);
//     return j;
// }


int partition(int arr[], int low, int high) ;

void QuickSort(int arr[], int l, int h)
{
    int location;
    if (l < h)
    {
        location = partition(arr, l, h);
        QuickSort(arr, l, location - 1);
        QuickSort(arr, location + 1, h);
    }
}

int partition(int arr[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = arr[high];
  // pointer for greater element
  int i = (low - 1);
  cout<<i<<"   "<<endl;

  // traverse each element of the arr
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      // swap element at i with element at j
      swap(arr[i], arr[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(arr[i + 1], arr[high]);
  
  // return the partition point
  return (i + 1);
}

int main()
{
    // int n;
    // cin>>n;
    int arr[7] = {12, 65, 21, 90, 11, 80, 76};
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int n  = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<"\n";
    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}