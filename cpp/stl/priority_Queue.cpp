// Priority queues are a type of container adapters, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue and elements are in nonincreasing order (hence we can see that each element of the queue has a priority

// However in C++ STL, by default, the top element is always the greatest element.

// #include<iostream>
// #include<queue>
// using namespace std;

// int main()
// {
//     priority_queue<int> q;
//     q.push(10);
//     q.push(60);
//     q.push(30);
//     q.push(90);
//     q.push(70);
//     q.push(20);


//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     return 0;
// }


// How to create a min-heap for the priority queue? 
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(10);
    q.push(60);
    q.push(30);
    q.push(90);
    q.push(70);
    q.push(20);


    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}
