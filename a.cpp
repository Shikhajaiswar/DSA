#include <iostream>
using namespace std;

class Array
{
    int length;
    int size;
    int *A;
    
public:             
    Array();
    Array(int size);
    ~Array();
    void create();
    void insert(int index, int num);
    void display();
    int Delete(int index);
    Array merge(Array y); 
    bool isPresentOrNot(int arr[], int l, int num);
    Array UnionOfElements(int x[], int y[]);
};

bool Array:: isPresentOrNot(int arr[], int l, int num){
    for(int i=0; i<l; i++){
        if(arr[i]==num)
            return true;
    }
    false;
}

Array Array:: UnionOfElements(int x[], int y[]){
    int i = 0;
    int j = 0;
    int k = 0;

    for(; i<x.length; i++){
        z.A[k++]=x.A[i];
        z.length++;
    }

    for(j; j<y.length; j++){
        if(!isPresentOrNot(z.A, z.length, y.A[j] )){
            z.A[k++] = y.A[j];
            z.length++;
        }
    }

    return z;

}

Array Array::merge(Array y){
    Array z(20);
    
    z.length = length +y.length;
    
    int i=0, j=0, k=0;

    while (i < length && j < y.length)
    {
        if (A[i] < y.A[j]){
            z.A[k++] = A[i++];
            cout<<z.A[0]<<endl;
        }
        else{
            z.A[k++] = y.A[j++];
            cout<<z.A[0]<<endl;
        }
    }


    for (; i < length; i++){
            z.A[k++] = A[i];
    }
    for (; j < y.length; j++){
            z.A[k++] = y.A[j];
    }

        return z;
}

Array::Array(){
     
}
Array::Array(int size){
    this->size=size;
    A= new int [size];
}

void Array:: create(){
    cout<<"Enter the length of the array : ";
    cin>>length;
    cout<<"Enter the array : ";
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
    cout<<endl;
}

void Array:: insert(int index, int num){
    length++;
    for(int i=length-1; i<=index; i--){
        A[i+1]=A[i];
    }
    A[index]=num;
}

void Array:: display(){
    cout<<"Your Array is : ";
    for(int i=0; i<length; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

Array::~Array(){
    delete[] A;
}
int main()
{
    Array arr(20), arr2(20);
    arr.create();
    arr.display();
    
    arr2.create();
    arr2.display();

    // Array arr3(20);
    // arr3=arr.merge(arr2);
    // arr3.display();

    Array arr3(20);
    arr3.UnionOfElements(arr,arr2);
    arr3.display();
    return 0;
}