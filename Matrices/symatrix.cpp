#include<iostream>
using namespace std;


class SymatrixMatrix{
    int n;
    int *A;
    public:
    SymatrixMatrix(int n);
    ~SymatrixMatrix(){ delete [] A};
    void getElement(int i, int j, int x);
    void display();
};

SymatrixMatrix::SymatrixMatrix(int n){
    this->n=n;
    A=new int[(n*(n+1))/2];
}

void SymatrixMatrix::getElement(int i, int j, int x){
    if(i>=j){
        int index=((i * (i - 1))/2) + j - 1;
        A[index]=x;
    }
}

void SymatrixMatrix::display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if()
        }
    }
}
int main()
{
    SymatrixMatrix obj(4);

    return 0;
}