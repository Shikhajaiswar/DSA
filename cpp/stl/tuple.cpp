//A tuple is an object that can hold a number of elements. The elements can be of different data types. The elements of tuples are initialized as arguments in order in which they will be accessed.


//tuple_size :- It returns the number of elements present in the tuple

//tup1.swap(tup2);

// C++ code to demonstrate tuple, get() and make_pair()
#include<iostream>
#include<tuple> // for tuple
using namespace std;
int main()
{
	// Declaring tuple
	tuple <char, int, float> geek;

	// Assigning values to tuple using make_tuple()
	geek = make_tuple('a', 10, 15.5);

	// Printing initial tuple values using get()
	cout << "The initial values of tuple are : ";
	cout << get<0>(geek) << " " << get<1>(geek);
	cout << " " << get<2>(geek) << endl;

	// Use of get() to change values of tuple
	get<0>(geek) = 'b';
	get<2>(geek) = 20.5;

	// Printing modified tuple values
	cout << "The modified values of tuple are : ";
	cout << get<0>(geek) << " " << get<1>(geek);
	cout << " " << get<2>(geek) << endl;

	return 0;
}
