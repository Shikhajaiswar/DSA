// To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.

// 1) Each object gets its own copy of the data member.
// 2) All-access the same function definition as present in the code segment.

// Meaning each object gets its own copy of data members and all objects share a single copy of member functions.
// Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated?
// The compiler supplies an implicit pointer along with the names of the functions as ‘this’.

// Following are the situations where ‘this’ pointer is used:

// 1) When local variable’s name is same as member’s name
// #include<iostream>
// using namespace std;

// /* local variable is same as a member's name */
// class Test
// {
// private:
// int x;
// public:
// void setX (int x)
// {
// 	// The 'this' pointer is used to retrieve the object's x
// 	// hidden by the local variable 'x'
// 	this->x = x;
// }
// void print() { cout << "x = " << x << endl; }
// };

// int main()
// {
// Test obj;
// int x = 20;
// obj.setX(x);
// obj.print();
// return 0;
// }

// 2) To return reference to the calling object
#include<iostream>
using namespace std;

class Test
{
private:
int x;
int y;
public:
Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
Test &setX(int a) { x = a; return *this; }
Test &setY(int b) { y = b; return *this; }
void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
Test obj1(5, 5);

// Chained function calls. All calls modify the same object
// as the same object is returned by reference
obj1.setX(10).setY(20);

obj1.print();
return 0;
}

