#include<iostream>
using namespace std;

class matrix{
    int *A;
    int n;
    public:
    matrix();
    matrix(int n);
    void setData(int i, int j, int x);
    int getData(int i, int j);
    void Display();
    ~matrix();
};

matrix::matrix(){
    int n=2;
    A=new int [n];
}

matrix::matrix(int n){
    this->n=n;
    A=new int[n];
}

void matrix::setData(int i, int j, int x){
    if(i==j)
        A[i-1]=x;
}

int  matrix::getData(int i, int j){
    if(i==j)
        return A[i-1];
    return 0;    
}

void matrix::Display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i]==A[j])
                cout<<A[i]<<" ";
            else
            cout<<"0 ";    
        }
        cout<<endl;
    }
}

matrix::~matrix(){
    delete[] A;
}

int main()
{
    matrix d1(4);
    d1.setData(1,1,5);
    d1.setData(2,2,6);
    d1.setData(3,3,7);
    d1.setData(4,4,8);

    d1.Display();
    return 0;
}