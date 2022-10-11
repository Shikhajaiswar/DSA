// #include<iostream>
// using namespace std;

// class Array{
//         int *A;
//         int size;
//         int length;
//     public:
//         Array(int n);
//         void creat();
//         void display();
//         void add();
//         void insert(int ind, int y);
//         void Delete(int x);
//         int linearSearch(int key);
//         int ImprovelinearSearch(int key);
//         int BinarySearch(int key);
//         int CheckSort();
//         ~Array();
// };

// Array:: Array(int n){
//     size=n;
//     A=new int[size];
// }

// void Array::creat(){
//     cout<<"Enter the no. of element : ";
//     cin>>length;
//     cout<<"Enter the Array elements : "<<endl;
//     for(int i=0; i<length; i++){
//         cout<<"Enter element "<<i<<" : ";
//         cin>>A[i];
//     }
//     cout<<endl;
// }
// void Array:: add(){
//     cout<<"Enter the element you want to enter : ";
//     int n;cin>>n;
//     A[length]=n;
//     length++;
// }
// void Array:: insert(int ind,int y){
//     length++;
//     for(int i=length-1; i>=ind; i--){
//         A[i+1]=A[i];
//     }
//     A[ind]=y;
// }

// void Array::Delete(int x){
//     for(int i=x; i<length; i++){
//         A[i]=A[i+1];
//     }
//     length--;
// }

// int Array::linearSearch(int key){
//     for(int i=0; i<length; i++){
//         if(key==A[i]){
//         return i;
//         }
//     }
//     return -1;
// }

// int Array::BinarySearch(int key){
//     int first=0;
//     int last =length-1;
//     int mid=(first+last)/2;
//     while(last<=first )
//     if(A[mid]>key){
//         last=mid-1;
//     }
//     else if (A[mid]<key){
//         first=mid+1;
//     }
//     else
//     return mid;
// }

// int Array::CheckSort(){
//     for(int i=0; i<length; i++){
//         if(A[i]>A[i+1])
//             return false;
//     }
//     return true;
// }

// void Array::display(){
//     cout<<"Your Array is : ";
//     for(int i=0; i<length; i++){
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
// }

// Array::~Array(){
//     delete[] A;
// }
// int main()
// {
//     Array arr1(10), arr2(10);
//     arr1.creat();
//     arr1.display();
//     arr2.creat();
//     arr2.display();

//     // arr.Delete(2);
//     // arr.display();
//     // cout<<arr.BinarySearch(34);
//     // if(arr.CheckSort())
//     // cout<<"Array is Sorted";
//     // else
//     // cout<<"Array is not Sorted";

//     return 0;
// }

// ----------------------->>Merging two array<<--------------------------------
#include <iostream>
using namespace std;
class arr
{
public:
    int *a;
    int size;
    int length;
    arr(int b){
        size = b;
        a = new int[size];
    }
    void create(){
        cout << "length ";
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cin >> a[i];
        }
    }
    void dispaly(){
        for (int i = 0; i < length; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    arr merge(arr y){
        arr z(20);
        z.length = length + y.length;
        int i = 0, j = 0, k = 0;

        while (i < length && j < y.length)
        {
            if (a[i] < y.a[j])
                z.a[k++] = a[i++];
            else
                z.a[k++] = y.a[j++];
        }
        for (; i < length; i++)
            z.a[k++] = a[i];
        for (; j < y.length; j++)
            z.a[k++] = y.a[j];

        return z;
    }
};

int main()
{
    arr a1(10);
    arr a2(10);
    // arr a3(20);
    a1.create();
    a2.create();
    arr a3(20);
    a3 = a1.merge(a2);
    a3.dispaly();
    return 0;
}

// --------------------------->>Union of two Array<<----------------------------------

// #include <iostream>

// using namespace std;

// struct Array
// {
//     int arr[20];
//     int size;
//     int length;

//     void display()
//     {
//         for (int i = 0; i < length; i++)
//             cout << arr[i] << " ";
//         cout << endl;
//     }
// };

// // searching in the array
// bool elementPresentOrNot(int arr[], int l, int x)
// {
//     for (int i = 0; i < l; i++)
//     {
//         if (arr[i] == x)
//             return true;
//     }
//     return false;
// }

// /* first copy all the elements of A to C and then copy
// those elements of B in C that is not present in C
// */

// void unionOnUnsortedArray(Array *A, Array *B, Array *C)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     for (i; i < A->length; i++)
//     {
//         C->arr[k++] = A->arr[i];
//         C->length++;
//     }

//     for (j; j < B->length; j++)
//     {
//         if (!elementPresentOrNot(C->arr, C->length, B->arr[j]))
//         {
//             C->arr[k++] = B->arr[j];
//             C->length++;
//         }
//     }
// }

// // copy those elements of A to C which is present in B.

// void intersectionOnUnsortedArray(Array *A, Array *B, Array *C)
// {
//     int k = 0;
//     for (int i = 0; i < A->length; i++)
//     {
//         if (elementPresentOrNot(B->arr, B->length, A->arr[i]))
//         {
//             C->arr[k++] = A->arr[i];
//             C->length++;
//         }
//     }
// }

// /* copy those elements of A to C which is not present in B.
//  */

// void differenceOnUnsortedArray(Array *A, Array *B, Array *C)
// {
//     int k = 0;
//     for (int i = 0; i < A->length; i++)
//     {
//         if (!elementPresentOrNot(B->arr, B->length, A->arr[i]))
//         {
//             C->arr[k++] = A->arr[i];
//             C->length++;
//         }
//     }
// }

// int main()
// {

//     Array A = {3, 5, 10, 4, 6, 10, 5};
//     Array B = {12, 4, 7, 2, 5, 10, 5};

//     A.display();
//     B.display();
//     Array C;
//     // unionOnUnsortedArray(&A, &B, &C);
//     // intersectionOnUnsortedArray(&A, &B, &C);
//     // differenceOnUnsortedArray(&A, &B, &C);
//     // C.display();
// }