// Shell sort is a generalized version of the insertion sort algorithm. It first sorts elements that are far apart from each other and successively reduces the interval between the elements to be sorted.

// The interval between the elements is reduced based on the sequence used.

// Some of the optimal sequences that can be used in the shell sort algorithm are:

// Shell's original sequence: N/2 , N/4 , …, 1
//  The performance of the shell sort depends on the type of sequence used for a given input array.

// ALGORITHM
// shellSort(array, size)
//   for interval i <- size/2n down to 1
//     for each interval "i" in array
//         sort all the elements at interval "i"
// end shellSort

// STABLE
// Shell sort is an unstable sorting algorithm because this algorithm does not examine the elements lying in between the intervals.

// TIME COMPLEXITY

// Worst Case Complexity: less than or equal to O(n2)
// Worst case complexity for shell sort is always less than or equal to O(n2).

// According to Poonen Theorem, worst case complexity for shell sort is Θ(Nlog N)2/(log log N)2) or Θ(Nlog N)2/log log N) or Θ(N(log N)2) or something in between.
// Best Case Complexity: O(n*log n)
// When the array is already sorted, the total number of comparisons for each interval (or increment) is equal to the size of the array.
// Average Case Complexity: O(n*log n)
// It is around O(n1.25).

// ---------->>The complexity depends on the interval chosen. The above complexities differ for different increment sequences chosen. Best increment sequence is unknown.

// SPACE COMPLEXITY
// The space complexity for shell sort is O(1).


// C++ implementation of Shell Sort
#include <iostream>
using namespace std;

/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			int temp = arr[i];

			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
						
			for (int j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			
			// put temp (the original a[i]) in its correct location
			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}
