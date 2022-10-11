// Consider the situation where we have one class A.This class is A is inherited by two other classes B and C.Both these class are inherited into another in a new class D as shown in figure below.

//     As we can see from the figure that data members /
//     function of class A are inherited twice to class D.One through class B and second through class C.When any data / function member of class A is accessed by an object of class D,
//     ambiguity arises as to which data / function member would be called ? One inherited through B or the other inherited through C.This confuses compiler and it displays error.

// #include <iostream>
// using namespace std;

// class A {
// public:
// 	void show()
// 	{
// 		cout << "Hello form A \n";
// 	}
// };

// class B : public A {
// };

// class C : public A {
// };

// class D : public B, public C {
// };

// int main()
// {
// 	D object;
// 	object.show();
// }

// ---------------------------------->>solution<<-----------------------------
#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() // constructor
	{
		a = 10;
	}
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main()
{
	D object; // object creation of class d
	cout << "a = " << object.a << endl;

	return 0;
}
