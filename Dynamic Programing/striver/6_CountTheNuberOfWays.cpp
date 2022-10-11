// Count Ways To Reach The N-th Stairs
// ---------------------------------------->>By top-down
// #include<iostream>
// using namespace std;

// int countDistinctWays(int nStairs) {              //Not Valid in long numbers llike >50
//    //  Write your code here.
//     int arr[nStairs+1];
//     arr[0] = 1, arr[1] = 1;
//     for(int i=2; i<nStairs+1; i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }

//     return arr[nStairs];  
// }

// int main()
// {
//     int n;
//     cin>>n; 
//     cout<<countDistinctWays(n);
//     return 0;
// }


//-------------------------------------->>By recursion
// #include<iostream>
// using namespace std;

// int countDistinctWays(int nStairs) {              //Not Valid in long numbers llike >50
//    if(nStairs ==  0){
//     return 1;
//    }
//    if(nStairs == 1){
//     return 1;
//    }
//     return countDistinctWays(nStairs-2) + countDistinctWays(nStairs-1); 
// }

// int main()
// {
//     int n;
//     cin>>n; 
//     cout<<countDistinctWays(n);
//     return 0;
// }



// // ----------------------------------------------->>Memoation
// #include<iostream>
// using namespace std;

// int countDistinctWays(int nStairs) { 
//     int arr[nStairs+1];
//     for(int i=0; i<nStairs; i++){
//         arr[i] = -1;
//     }                                      //Not Valid in long numbers llike >50
//    if(nStairs ==  0){
//     return 1;
//    }
//    if(nStairs == 1){
//     return 1;
//    }
//    if(arr[nStairs]!=-1){
//     return arr[nStairs];
//    }
//     return arr[nStairs] = countDistinctWays(nStairs-2) + countDistinctWays(nStairs-1); 
// }

// int main()
// {
//     int n;
//     cin>>n; 
//     cout<<countDistinctWays(n);
//     return 0;
// }

// -------------------------------------------->>Optimised solution for larger input
#include<iostream>
#include<math.h>
using namespace std;

int countDistinctWays(int nStairs) {
   int m=pow(10,9)+7;
   int *ans=new int[nStairs+1];
   ans[0]=1;
   ans[1]=1;
   for(int i=2;i<=nStairs;i++)
   {
       ans[i]=(ans[i-1]%m+ans[i-2]%m)%m;
   }
   return(ans[nStairs]);
    
}

int main()
{
    int n;
    cin>>n; 
    cout<<countDistinctWays(n);
    return 0;
}
