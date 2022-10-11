// The initial set of numbers that we want to sort is stored in an array e.g.

// Heap sort works by visualizing the elements of the array as a special kind of complete binary tree called a heap.

// If the index of any element in the array is i, the element in the index 2i+1 will become the left child and element in 2i+2 index will become the right child.
// Also, the parent of any element at index i is given by the lower bound of (i-1)/2.
// In the case of a complete tree, the first index of a non-leaf node is given by n/2 - 1

// HOW TO HEAPIFY THE TREE
// Starting from a complete binary tree, we can modify it to become a Max-Heap by running a function called heapify on all the non-leaf elements of the heap.


// Working of Heap Sort

// Since the tree satisfies Max-Heap property, then the largest item is stored at the root node.
// Swap: Remove the root element and put at the end of the array (nth position) Put the last item of the tree (heap) at the vacant place.
// Remove: Reduce the size of the heap by 1.
// Heapify: Heapify the root element again so that we have the highest element at root.
// The process is repeated until all the items of the list are sorted.


// Time Complexity	 
// Best	                   O(nlog n)
// Worst	               O(nlog n)
// Average	               O(nlog n)
// Space Complexity	       O(1)
// Stability	           No

// Heap Sort in C++
  
  #include <iostream>
  using namespace std;
  
  void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i], arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
  
  // Driver code
  int main() {
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
  
    cout << "Sorted array is \n";
    printArray(arr, n);
  }