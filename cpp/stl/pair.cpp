//Pair is not a part of container
//Pair is used to combine together two values that may be of different data types

// Pair provides a way to store two heterogeneous objects as a single unit

// It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

// -------------->>pair (data_type1, data_type2) Pair_name

// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;

int main()  
{
	//Declaring the pair
    //------->>MEthod 1)
	pair<int, char> PAIR1;     // if the value will not declare of pair then it automaticaly become 0
    // pair<int, int>pr;             // also
	
    //------->>Method 2)
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);

	//Method 3)
	pair<int, pair<int, int>> shikha= {2,{10,20}};
	// cout<<shikha.first<<endl<<shikha.second.first;

	//Method 4)
	pair<int,int>arr[]={{1,2},{3,4},{5,6}};
	cout<<arr[0].second;
	

	

    // //Initialising the pair values
    // //-------------->>Method 1)
	// // first part of the pair
	//  PAIR1.first = 100;
	// // second part of the pair
	// PAIR1.second = 'G';

    // //---------------Method 2)
    // PAIR1 = make_pair("GeeksForGeeks is Best", 4.56);

    // //-->>Accessing the values of pair
	// cout << PAIR1.first << " ";
	// cout << PAIR1.second << endl;
	// cout<<PAIR2.first;

	return 0;
}

//How can we swap the values of the pair
// CPP Program to demonstrate swap()
// function in pair
// #include <iostream>
// #include <utility>
// using namespace std;

// int main()
// {
// 	pair<char, int> pair1 = make_pair('A', 1);
// 	pair<char, int> pair2 = make_pair('B', 2);

// 	cout << "Before swapping:\n ";
// 	cout << "Contents of pair1 = " << pair1.first << " "
// 		<< pair1.second;
// 	cout << "Contents of pair2 = " << pair2.first << " "
// 		<< pair2.second;
// 	pair1.swap(pair2);//------------------->>Main thing

// 	cout << "\nAfter swapping:\n ";
// 	cout << "Contents of pair1 = " << pair1.first << " "
// 		<< pair1.second;
// 	cout << "Contents of pair2 = " << pair2.first << " "
// 		<< pair2.second;

// 	return 0;
// }



// #include<iostream>
// #include<math.h>
// #include<queue>
// #include<vector>
// using namespace std;

// int main()
// {
//     int arr[5]={2,4,1,5,3};
//     int arr2[5]={12,45,11,10,56};

//     priority_queue<pair<int, int>> pq;
//     for(int i=0; i<5; i++){
//         pq.push({arr[i], arr2[i]});   //------------->>Jo arr pahle gya hai uske greatest elemenet ke acc follow hoga
//     }

//     auto top=pq.top();
//     cout<<top.first<<" "<<top.second<<endl;
//     // cout<<top.first<<endl;
//     // cout<<top.second<<endl;
//     return 0;
// }


