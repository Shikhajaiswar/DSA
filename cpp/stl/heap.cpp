// In stl implemented heap is of MAXHEAP

// 1) MAXHEAP  priority_queue<int, vector<int>>
                        //First element is int, second is a container

// 2) MINHEAP  priority_queue<int, vector<int>, greater<int>>                        

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);

    // cout<<pq.top();       //result is 6(highest element)
    pq.pop();
    // cout<<pq.top();

    priority_queue<int, vector<int>, greater<int>> min;
    min.push(2);
    min.push(3);
    min.push(4);
    min.push(5);
    min.push(6);
    cout<<min.top();     //result is 2(lowest element)
    return 0;
}                        
