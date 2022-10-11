// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int temp = 0, num = 0;
//     while(n!=0){
//         temp = n%10;
//         n = n/10;
//         num = num*10 +temp;
//     }
//     cout<<"The number is : "<<num;
//     return 0;
// }

// ----------------------->>Checking if a number is prime or not by a function<<---------------
// #include<iostream>
// using namespace std;

// bool isPrime(int a){
//     int k=0;
//     for(int i=2; i<a; i++){
//         if(a%i==0)
//             k++;
//     }
//     if(k==0){
//         return true;
//     }
//     else
//     return false;
// }

// int main()
// {
//     int n; cin>>n;
//     // int result= isPrime(n);
//     if(!isPrime(n))
//     cout<<"The number is not prime";
//     else 
//     cout<<"The number is prime";
    
//     return 0;
// }


// ---------------------->>Code to print Prime number between two prime numbers<<-------------------
// #include<iostream>
// using namespace std;

// void isPrime(int a, int b){
//     for(int i=a; i<=b; i++){
//         int k=0;
//         for(int j=2; j<i; j++){
//             if(i%j==0){
//                 k++;
//             }
//         }
//         if(k==0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     isPrime(a,b);
//     return 0;
// }

//--------------->>Code to print fibbonacci series<<-------------------------
// #include<iostream>
// using namespace std;

// void fib(int x){
//     int f0=0, f1=1;
//     int temp, sum=0;
//     for(int i=0; i<x; i++){
//         cout<<f0<<" ";
//         temp=f0+f1;
//         f0=f1;
//         f1=temp;
//     }
// }
// int main()
// {
//     int n; cin>>n;
//     fib(n);
//     return 0;
// }


// --------------->>factorial of a number<<-------------------
// #include<iostream>
// using namespace std;

// void fact(int n){
//     int sum =1;
//     for(int i=n; i>0; i--){
//         cout<<i;
//         sum = sum*i;
//     }
//     cout<<"\n";
//     cout<<"The sum is : "<<sum;
// }
// int main()

// {
//     int n; cin>>n;
//     fact(n);
//     return 0;
// }

// -------------------->> calculate nCr<<----------------------
// #include<iostream>
// using namespace std;

// int fun(int x, int y){
//     int z=x-y;
//     int res1=1, res2=1, res3=1;
//     for(int i=1; i<=x; i++){
//         res1 = res1*i;
//     }
//     for(int i=1; i<=y; i++){
//         res2 = res2*i;
//     }
//     for(int i=1; i<=z; i++){
//         res3 = res3*i;
//     }
//     int sum = res1/(res2*res3);
//     return sum;
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int result= fun(n,r);
//     cout<<"The result is : "<<result;
//     return 0;
// }

// ------------------->>pascal triangle<<-----------------------
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1
// #include<iostream>
// using namespace std;

// int fun(int x, int y){
//     if(x==0 && y==0){
//         return 1;
//     }
//     int z=x-y;
//     int res1=1, res2=1, res3=1;
//     for(int i=1; i<=x; i++){
//         res1 = res1*i;
//     }
//     for(int i=1; i<=y; i++){
//         res2 = res2*i;
//     }
//     for(int i=1; i<=z; i++){
//         res3 = res3*i;
//     }
//     int sum = res1/(res2*res3);
//     return sum;
// }
// int main()
// {
//     int n; cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<fun(i,j)<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// ------------------->>Sum of n natural number<<-----------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     int sum=0; 
//     for(int i=1; i<=n; i++){
//         sum  = sum+i;
//     }
//     cout<<"The sum of the numbers is "<<sum;
//     return 0;
// }


// ------------------>>check whether the given number is a triplet or not<<---------------------
// #include<iostream>
// using namespace std;

// int great(int a,int b,int c){
//     int x= a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
//     int y,z;
//     if(x==a){
//         y=b;z=c;
//     }
//     else if(x==b){
//         y=a; z=c;
//     }
//     else{
//         y=a; z=b;
//     }
//     if(x*x==y*y+z*z){
//         cout<<"This is a triplet";
//     }
//     else
//     cout<<"Not a triplet";
// }

// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     great(a,b,c);
    
//     return 0;
// }

// ------------------->>Conversion binary to decimal<<------------------
// #include<iostream>
// using namespace std;

// int binaryToDecimal(long int n){
//     int ans = 0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans += y*x;
//         x *=2;
//         n /=10;
//     }
//     return ans;
// }
// int main()
// {
//     long int n;
//     cin>>n;
//     cout<<"The ans is : "<<binaryToDecimal(n);
//     return 0;
// }


// ------------------->>Conversion octal to decimal<<------------------
// #include<iostream>
// using namespace std;

// int octalToDecimal(long int n){
//     int ans = 0;
//     int x=1;
//     while(n>0){
//         int y = n%10;
//         ans += y*x;
//         x *=8;
//         n /=10;
//     }
//     return ans;
// }
// int main()
// {
//     long int n;
//     cin>>n;
//     cout<<"The ans is : "<<octalToDecimal(n);
//     return 0;
// }

// ------------------->>Conversion hexadecimal to decimal<<------------------
// #include<iostream>
// using namespace std;

// int hexaToDecimal(string n){
//     int ans = 0; 
//     int x = 1;

//     int s = n.size();
//     for(int i=s-1; i>=0; i--){
//         if(n[i]>='0' && n[i]<='9'){
//             ans = ans+x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i]<='F'){
//             ans = ans+ x*((n[i]-'A')+10);
//         }
//         x = x*16;

//     }
//     return ans;
// }
// int main()
// {
//     string str;
//     cin>>str;
//     cout<<"The ans is : "<<hexaToDecimal(str);
//     return 0;
// }

// ---------------------------->>Decimal to binary number<<-------------------------
// #include<iostream>
// using namespace std;

// int decimalToBinary(int n){
//     int arr[30];
//     int k=0;
//     while(n>0){
//         int temp=n/2;
//         int temp2 = n%2;
//         arr[k]=temp2;
//         k++;
//         n=temp;
//     }
//     for(int i=k-1; i>=0; i--){
//         cout<<arr[i];
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     decimalToBinary(n);
//     return 0;
// }

