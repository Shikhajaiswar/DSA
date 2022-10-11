                            //  best          average                worst
// Selection Sort	         Ω(n^2)	        θ(n^2)	              O(n^2)	
// Bubble Sort	             Ω(n)	        θ(n^2)	              O(n^2)	
// Insertion Sort	         Ω(n)	        θ(n^2)	              O(n^2)	
// Heap Sort	             Ω(n log(n))	θ(n log(n))	          O(n log(n))	
// Quick Sort	             Ω(n log(n))	θ(n log(n))	          O(n^2)	
// Merge Sort	             Ω(n log(n))	θ(n log(n))	          O(n log(n))	
// Bucket Sort	             Ω(n +k)	    θ(n +k)	              O(n^2)	
// Radix Sort	             Ω(nk)	        θ(nk)	              O(nk)	
// Count Sort	             Ω(n +k)	    θ(n +k)	              O(n +k)	
// Shell Sort	             Ω(n)	        θ(n log(n))	          O(n log(n))	
// Tim Sort	                 Ω(n)	        θ((n log(n))^2)	      O((n log n (n))^2)	
// Tree Sort	             Ω(n log(n))	θ(n log(n))	          O(n^2)	
// Cube Sort	             Ω(n)	θ(n log(n))	O(n log(n))	O(n)



//___________SORTING QUESTIONS______https://testbook.com/objective-questions/mcq-on-sorting--5eea6a0c39140f30f369e0ca




// ---------------------->>Sorting An Array<<----------------------
// 1)Selection Sort
// 2)Bubble Sort
// 3)Merge Sort
// 4)Redix Sort
// 5)Insertion Sort

// 1)------------------------>>Selection Sort<<----------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                int temp=arr[j];
//                arr[j]=arr[i];
//                arr[i]=temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 2)------------------------------------>>Bubble Sort<<------------------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int counter =1;
//     while(counter<n){
//         for(int i=0; i<n-counter; i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i]; 
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// ------------------------------------------>>Insertion Sort<<----------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=1; i<n;i++){
//         int current=arr[i]; 
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// ------------------------------------>>Merge sort<<-------------------------------------
#include<iostream>
using namespace std;

void merge(int arr, int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];


}

void mergeSort(int arr, int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr, l, mid ,r);
    }
}
int main()
{
    
    return 0;
}