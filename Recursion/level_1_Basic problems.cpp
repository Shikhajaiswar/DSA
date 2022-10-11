// --------------------------------->> Power of an Number <<-----------------------------------
// #include<iostream>
// using namespace std;

// int fun(int n,int r){
//     if(r<=0){
//         return 1;
//     }
//     return fun(n,r-1)*n;
    
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     cout<<fun(n,r);
//     return 0;
// }

//----------------------------->>factorial a number<<---------------------------------
// #include<iostream>
// using namespace std;
// int factorail(int n){
//     if(n==1){
//         return 1;
//     }
//     return factorail(n-1)*n;
// }

// int main()
// {
//     int n; cin>>n;
//     cout<<factorail(n);
    
//     return 0;
// }

//------------------------------------->>LCM of A Number<<-----------------------------------
// #include<iostream>
// using namespace std;

// int lcm(int m, int n){
//     int t=m%n;
//     if(t==0){
//         return m;
//     }
//     return m * lcm(n, t) / t;
// }

// int main()
// {
//     cout<<lcm(6,4);
//     return 0;
// }


// --------------------------------------->>HCF of the two numbers<<----------------------------
// #include<iostream>
// using namespace std;

// int hcf(int m, int n){
//     int least= min(m,n);
//     int high = max(m,n);

//     if(least==0){
//         return high;
//     }
//     else if(least==1){
//         return 1;
//     }
//     else{
//         return hcf(least, high%least);
//     }
// }

// int main()
// {
//     cout<<hcf(12,6);
//     return 0;
// }


//-------------------------------------->>sum of digits<<-------------------------------------
// #include<iostream>
// using namespace std;

// int sumofDigits(int n){
//     if(n==0) return 0;

//     return sumofDigits(n/10)+n%10;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sumofDigits(n);
//     return 0;
// }


//-------------------------------->>Recursive function to get product of the digits<<-------------------

// #include <iostream>
// using namespace std;

// int getProduct(int n){
// 	// Base Case
// 	if(n == 0){
// 		return 1 ;
// 	}
	
// 	// get the last digit and multiply it with remaining digits
// 	return (n%10) * getProduct(n/10) ;
// }

// int main() {

// // call the function
// 	cout<<getProduct(125) ;
// 	return 0;
// }


//-------------------------------------->>Revesing a number<<--------------------------------
// #include<iostream>
// using namespace std;
// int ans=0;
// int reverse(int n){
//     if(n==0){
//         return ans;
//     }
    
//     int temp=n%10;
//     ans=ans*10 + temp;
//     return  reverse(n/10) ;
// }

// int main()
// {
//     int n ; cin>>n;
//     cout<<reverse(n);
//     return 0;
// }


//------------------------------------->>Palindrome of a number<<------------------------
// Recursive C++ program to check if the
// number is palindrome or not
// #include <bits/stdc++.h>
// using namespace std;

// int rev(int n, int temp)
// {
// 	// base case
// 	if (n == 0)
// 		return temp;

// 	temp = (temp * 10) + (n % 10);
// 	return rev(n / 10, temp);
// }

// int main()
// {
// 	int n = 121;
// 	int temp = rev(n, 0);

// 	if (temp == n)
// 		cout << "yes" << endl;
// 	else
// 		cout << "no" << endl;
// 	return 0;
// }

//----------------------------------->>Count the number of zero in a number<<---------
// #include<iostream>
// using namespace std;

// // int ans=0;
// int count(int n, int ans){
//     if(n==0){
//         return ans;
//     }
//     int temp=n%10;
//     if(temp==0){
//         return count(n/10, ans+1);
//     }
//     return count(n/10, ans);
    
// }

// int main()
// {
//     cout<<count(230,0);
//     return 0;
// }

// ------------------------->>Another Method<<---------------
// #include<iostream>
// using namespace std;
// int ans=0;

// int count(int n){
//     if(n==0){
//         return ans;
//     }

//     int temp=n%10;
//     if(temp==0){
//         ans++;
//         return count(n/10);
//     }
//     return count(n/10);
// }

// int main()
// {
//     cout<<count(20010);
//     return 0;
// }


//-------------------------------------->>Print the number <<-------------------------------
// #include<iostream>
// using namespace std;

// void printNatural(int n){
//     if(n==0) return ;

//     else{
//         printNatural(n-1);
//         cout<<n;
//     } 
// }

// int main()
// {
//     int n; cin>>n;
//     printNatural(n);
//     return 0;
// }


// --------------------------------------->> Sum of n term <<---------------------------------
// #include<iostream>
// using namespace std;

// int fun(int n){
//     if(n==0){
//         return 0;
//     }
//     return fun(n-1)+n;
// }
// int main()
// {
//     int n;cin>>n;
//     cout<<fun(n);
//     return 0;
// }

// --------------------------------------->> Taylor Series by recursion <<-------------------------
// #include<iostream>
// using namespace std;

// double taylor(int x,int n){
//     static double p=1,f=1;
//     double r;
//     if(n==0)
//         return 1;
//     else{
//         r=taylor(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+p/f;
//     }    
// }
// int main()
// {
//     int n,x;
//     cin>>x>>n;
//     cout<<taylor(x,n);
//     return 0;
// }

// ------------------------------------->> taylor series by recursion <<-------------------------
// #include<iostream>
// using namespace std;

// double taylor(double x, double n){
//     static double s=1;
//     if(n==0)
//         return s;
//     s= (1+x/n)*s;
//     return taylor(x,n-1);

// }
// int main()
// {
//     int x,n;
//     cin>>x>>n;
//     cout<<taylor(x,n);
//     return 0;
// }

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

// -------------------------------------->>    nCr  <<--------------------------------
// #include<iostream>
// using namespace std;

// int fun(int n, int r){
//     if(r==0||n==r){
//         return 1;
//     }
//     else{
//         return fun(n-1,r-1)+fun(n-1, r);
//     }
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     cout<<fun(n,r);
//     return 0;
// }

// ------------------------------------>>Tower of Hanoi<<-------------------------
// #include<iostream>
// using namespace std;

// int fun(int n, int A, int B, int C){
//     if(n>0){
//         fun(n-1,A,C,B);
//         cout<<"("<<A<<","<<C<<")"
//         <<endl;
//         fun(n-1, B,A,C);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     fun(n,1,2,3);
//     return 0;
// }

// ------------------------------------------>>Merging of Two Array in Sorted manner<<-----------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int A[]={12,34,56,67,89,90};
//     int B[]={42,45,67,89,98};
//     int n=sizeof(A)/sizeof(A[0]);
//     int m=sizeof(B)/sizeof(B[0]);
//     int C[n+m];
//     int i=0, j=0;
//     for(int K=0; K<n+m; K++){
//         if(A[i]>B[j]){
//             C[K]=B[j];
//             j++;
//         }
//         else if(A[i]<=B[j]){
//             C[K]=A[i];
//             i++;
//         }
//     }

//     for(int k=0; k<n+m; k++){
//         cout<<C[k]<<"  ";
//     }
//     return 0;
// }