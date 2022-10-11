// 1) Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

// 2) Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

//3)In vectors, data is inserted at the end.

//4)

#include<iostream>
#include<vector>
using namespace std;

 template <class T>  // As per the standard definition, a template class in C++ is a class that allows the          programmer to operate with generic data types. This allows the class to be used on many different data types as per the requirements without the need of being re-written for each type. 
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}


int main()
{

    //-------------------->>Ways to declare a vector
    vector<int> vec;     //0 length int vector

    vector<char> vec1(5);        // 5 element char vector (by default all the values are 0)

    vector<char> vec2(vec1);     //5 element charector vector form vec1
    
    vector<int> vec3(6,3);       //6 index char vector all the elements intilize to 0.you declare the size but if you want to increse the size you can
    int i=2;
    cout<<vec3[i];
    vector<vector<int>> vec4;    // vector which store the vectors as the elements

    // vector<pair<int, int>>shikha;  //vector whose data type is pair
    // shikha.push_back({10,20},{1,2},{4,5});

    //-------------------->> Ways to create an vector
    // display(vec3);
    int element,size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter the element to add this array : ";
        cin>>element;
        vec.push_back(element);    //O(1)
    }


    // display(vec);

    //----------------->>How to add elements in a vector (method 1)
    // vector<int> :: iterator iter = vec.begin();
    // vec.insert(iter, 32);
    // display(vec);

    //------------------->> How to add elements in a vector (method 2)
    // vec.insert(iter,3, 32);
    // display(vec);

    //-------------------->>ways to display vector elements
    //1) 
    // for(int i=vec.begin(); i<=vec.end(); i++){
    //     cout<<i;
    // }
    // 2)
    // vector<int>::iterator it=vec3.begin();
    // cout<<*(it);



    // 2)display(vec);


    //--------------------->>In vectors we can directly copy the whole vector
    //vector<int> vec6 = vec;     O(n)  //if you change in vec6 there will be no change in vec (it just make another copy of v ans paste in vec6)
    return 0;
}