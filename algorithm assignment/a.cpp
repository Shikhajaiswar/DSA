#include<iostream>
#include<vector>
#include<utility>
#include<string.h>
using namespace std;
int main()
{
    vector<pair<int, string>> pairVec;  // create a vector of pairs
    pairVec.emplace_back(1, "One"); // adding pairs to the vector
    pairVec.emplace_back(2, "Two");
    pairVec.emplace_back(3, "Three");
    for (auto iter : pairVec) {
       cout << "First: " << iter.first << ", Second: "
        << iter.second <<endl;
    }
    return 0;
}