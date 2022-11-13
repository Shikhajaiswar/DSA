//Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front.

//

// CPP code to illustrate Queue in
// Standard Template Library (STL)
// #include <iostream>
// #include <queue>

// using namespace std;

// // Print the queue
// void showq(queue<int> gq)
// {
// 	queue<int> g = gq;
// 	while (!g.empty()) {
// 		cout << '\t' << g.front();
// 		g.pop();
// 	}
// 	cout << '\n';
// }

// // Driver Code
// int main()
// {
// 	queue<int> gquiz;
// 	gquiz.push(10);
// 	gquiz.push(20);
// 	gquiz.push(30);

// 	cout << "The queue gquiz is : ";
// 	showq(gquiz);

// 	cout << "\ngquiz.size() : " << gquiz.size();
// 	cout << "\ngquiz.front() : " << gquiz.front();
// 	cout << "\ngquiz.back() : " << gquiz.back();

// 	cout << "\ngquiz.pop() : ";
// 	gquiz.pop();
// 	showq(gquiz);

// 	return 0;
// }


#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int>q;
	q.push(10);
	q.push(nullptr);
	q.push(20);
	q.push(30);

	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	return 0;
}