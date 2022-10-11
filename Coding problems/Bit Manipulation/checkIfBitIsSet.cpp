// /--------------------------------------->>/check if the ith bit of a number is set or not(if bit = 1 set)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cin>>n>>i;
//     int mask = 1;
//     mask = (mask<<i-1);

//     cout<<mask<<endl;
    
//     if(n&mask){             //if the result is not 0 then this will run
//         cout<<"Bit is set";
//     }
//     else
//         cout<<"Bit is not set";
//     return 0;
// }



//------------------------------------->>setting the bit of a number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cin>>n>>i;

//     int mask = 1;
//     mask = (mask<<i-1);

//     int ans = (mask|n);
//     cout<<ans;
//     return 0;
// }


//---------------------------------------------->>clear the ith bit of the number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cin>>n>>i;
//     int mask = 1;
//     mask = ~(mask<<i-1);

//     int ans = mask&n;
//     cout<<ans;
//     return 0;
// }



//------------------------------------------>>check is the number is power of 2 or not
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     if(n&(n-1)){
//         cout<<"Number id not power of 2";
//     }
//     else{
//         cout<<"number is power of two";
//     }
//     return 0;
// }


//----------------------------------------------->>find the index of first set bit
#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0){              //complexity = O(logn)
        if(n&1){
            count++;
        }
        n=n>>1;
    }

    cout<<count;
    return 0;
}