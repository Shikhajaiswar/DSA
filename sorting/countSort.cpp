// Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

#include <iostream>
using namespace std;

int maxi(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void countSort(int arr[], int n)
{
    int max = maxi(arr, n);
    int count[max + 1] = {0};
    int newArray[n];

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    cout << endl;

    for (int i = 0; i <= max; i++)
    {
        if (i == 0)
        {
            continue;
        }
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        newArray[count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << newArray[i] << "  ";
    }
}

int main()
{
    int arr[] = {2, 4, 5, 7, 9, 3, 9, 169, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr, n);
    return 0;
}