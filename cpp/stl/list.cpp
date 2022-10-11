// C++ Lists can shrink or expand from both ends at run time. The storage requirement is fulfilled automatically by the internal allocator. By default, the list is doubly linked. Since it is a doubly-linked list, the insertion and deletion are fast on the list.

#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> list1 ;   //list with 0 elements
    // list<int> list2(7)   //empty list of size seven
    // list<int> list3()
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(8);
    list1.push_back(6);
    list1.push_front(20);    //--------------->>List gives us push front operation also

    list<int>::iterator iter=list1.begin();
    while(iter!=list1.end()){
        cout<<*iter<<" ";
        iter++;
    }

    // for(auto i:list1){
    //     cout<<i<<endl;
    // }
    return 0;
}