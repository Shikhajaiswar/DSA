//  Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.

// The values are stored in a specific sorted order i.e. either ascending or descending.

#include<iostream>
#include<set>
using namespace std;

int main()
{
    // Methods to declare the sets
    set<int> val; // defining an empty set
    set<int> val = {6, 10, 5, 1}; // defining a set with values
    set<datatype, greater<datatype>> setname; //------>>s used for storing values in a set in descending order. 


    set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for(auto& str: a)
    {
      std::cout << str << ' ';  //The reason it printed only F and G is that set does not take multiple same values it only accepts a unique value; 
    }
    return 0;
}