#include<iostream>
using namespace std;

class demo{
    int real;
    int imagenary;
    public:
    void setData(int x, int y){
        real=x;
        imagenary=y;
    }
    void getData(){
        cout<<"The real part is : "<<real<<'\t';
        cout<<"The imagenary part is : "<<imagenary<<endl;
    }
};
int main()
{
    // demo d1;                       <<-----First way to declare an object
    // d1.setData(23,45);
    // d1.getData();

    // demo d1;                       <<-----Second way to form an object
    // demo *p= &d1;

    // demo *p=new demo;              <<-----Third way to form an object
    // (*p).setData(23,45);
    // (*p).getData();

    // p->setData(34,12);        //It means at which object p point give that setdata fun;
    // p->getData();             //basically dereferring the p pointer


    //we can create array also using array operator
    // int n; cin>>n;
    // demo *ptr=new demo[n];
    // demo *ptrTemp=ptr;             <<----------store address of intial index so that we can derefrance it while 
    // for(int i=0; i<n; i++){                    getting the data
    //     int p, q;
    //     cout<<"Enter the value of "<<i+1<<" number : ";
    //     cin>>p>>q;
    //     ptr->setData(p,q);
    //     ptr++;
        
    // }
    // ptr=ptrTemp;           <<-----------Store the initial address
    // for(int i=0; i<n; i++){
    //     ptr->getData();
    //     ptr++;
    // }

    // return 0;
}