// ---------------------------------------->> Fibbonacci series by recursion<<-----------------------------
// #include<iostream>
// using namespace std;

// int fun(int n){
//     if(n<=1)
//         return n;
//     return fun(n-1)+fun(n-2);    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fun(n);
//     return 0;
// }


// -------------------------------->>Fibonacci series by memoazation
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//   int arr[n+1] = {};       //initialation of matrix 
//   for(int i=0; i<=n; i++){
//       arr[i] = -1;
//   }
//   cout<<endl;
//   if (n==0 || n==1)
//     return n;
//   else{
//     if(arr[n] !=-1){         //checking if the element is not -1 then return that value 
//       return arr[n];
//     }
//     return arr[n] = fib(n - 1) + fib(n - 2);    //storing the value of the ans
//   }  
  
// }

// int main()
// {
//   int n;
//   cin >> n;
//   cout<<fib(n);
//   return 0;
// }


// -------------------------------->>Fibonacci series by top down approach
// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//   int arr[n+1];
//   arr[0] = 0; arr[1] = 1;
//   for(int i=2; i<=n; i++){
//     arr[i] = arr[i-1] + arr[i-2];
//   }

//   return arr[n];
// }

// int main()
// {
//   int n;
//   cin >> n;
//   cout<<fib(n);
//   return 0;
// }

// --------------------->>Iterative method<<-----------------------------
// #include<iostream>
// using namespace std;
// int f[10];
// int fun(int n){
//     if(n<=1){
//         f[n]=n;
//         return n;
//     }
//     else{
//         if(f[n-2]==-1)
//         f[n-2]=fun(n-2);
//         if(f[n-1]==-1)
//         f[n-1]=fun(n-1);

//        return fun(n-2)+fun(n-1); 
//     }
// }
// int main()
// {
//     int n; cin>>n;
//     for(int i=0; i<10; i++){
//         f[i]=-1;
//     }
//     cout<<fun(n);
//     return 0;
// }

