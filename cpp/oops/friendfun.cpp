// --------------------------------->>friend the whole class<<--------------------------------------
// #include<iostream>
// using namespace std;
// class your;
// class my{
//     int a=10;
//     friend your;
// };


// class your{
//     public:
//     my m;
//     void fun(){
//         cout<<m.a;
//     }
// };
// int main()
// {
//     your obj1;
//     obj1.fun();
//     return 0;
// }

// ------------------------------->>friend function to a class<<--------------------
// #include<iostream>
// using namespace std;

// class complex{
//     int a, b;
//     public:
//     void setdata(int x, int y){
//         a=x; b=y;
//     }
//     void showdata(){
//         cout<<"\na"<<a<<"b"<<b;
//     }
//     friend void fun(complex o1, complex o2);
// };

// void fun(complex o1, complex o2){
//     cout<<"sum of a & b is : "<<o1.a+o2.a <<"+"<<o1.b+o2.b<<"i";
// }
// int main()
// {
//     complex c1, c2, c3;
//     c1.setdata(5,10);
//     c2.setdata(1,2);
//     fun (c1,c2);
//     return 0;
// }

// ------------------------------->>friend function to two class<<----------------
// #include<iostream>
// using namespace std;
// class B;
// class A{
//     int a;
//     public:
//     void setdata(int x){
//         a=x;
//     }
//     friend void fun(A,B);
// };

// class B{
//     int b;
//     public:
//     void setdata(int x){
//         b=x;
//     }
//     friend void fun(A,B);
// };

// void fun(A o1, B o2){
//     cout<<o1.a+o2.b;
// }
// int main()
// {
//     A obj1;
//     obj1.setdata(5);
//     B obj2;
//     obj2.setdata(4);
//     fun(obj1, obj2);
//     return 0;
// }

// -------------------------------->>operator overloading in friend function<<--------------------
// #include<iostream>
// using namespace std;
// class complex{
//     int a; int b;
//     public:
//     void setdata(int x, int y){
//         a=x; b=y;
//     }
//     void showdata(){
//         cout<<"a="<<a<<" b="<<b;
//     }
//     friend complex operator +(complex, complex);
// };

// complex operator +(complex c1, complex c2){
//     complex temp;
//     temp.a=c1.a+c2.a;
//     temp.b=c1.b+c2.b;
//     return temp;
// }
// int main()
// {
//     complex c1, c2, c3;
//     c1.setdata(3,4);
//     c2.setdata(5,6);
//     c3= c1+c2;
//     c3.showdata();
//     return 0;
// }

// --------------------------------->>insertion and extraction function overloading<<-------------------
// #include<iostream>
// using namespace std;

// class complex{
//     int a, b;
//     public:
//     void setdata(int x, int y){
//         a=x; b=y;
//     }
//     void showdata(){
//         cout<<"a= "<<a<<" b="<<b;
//     }
//     friend ostream& operator <<(ostream&, complex);
//     friend istream& operator >>(istream&, complex);
// };

// ostream& operator << (ostream &dout, complex c){
//     cout<<"a="<<c.a<<"b="<<c.b;
//     return (dout);
// }
// istream& operator >> (istream &din, complex c){
//     cin>>c.a>>c.b;
//     return (din);
// }
// int main()
// {
//     complex c1;
//     c1.setdata(5,7);
//     cout<<"Enter a complex number : ";
//     cin>>c1;
//     cout<<"The Entered number is : ";
//     cout<<c1;
//     // c1.showdata();
//     return 0;
// }

// ------------------------------->>Member function of one class can become frnd to another<<------------------
#include<iostream>
using namespace std;

class A{
    int a,b;
    void setdata(int x, int y){
        a=x; b=y;
    }
    public:
    void fun(){
        cout<<"Hello shikha";
    }
    void foo(){
        cout<<"Hello niharika";
    }
};
class B{
    public:
    // friend class A;  <-----  if You want to friend all the member fun which define in A then use it 
    friend void A::fun();
    friend void A::foo();
};
int main()
{
    B obj;
    obj.fun();
    return 0;
}