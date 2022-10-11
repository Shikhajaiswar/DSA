// A B C 
// B C D
// C D E

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     // char k='A';
//     for(int i=1; i<=n; i++){
//         char k='A'+i-1;    
//         for(int j=1; j<=n; j++){
            
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// A 
// B B
// C C C
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     // char k='A';
//     for(int i=1; i<=n; i++){ 
//         char  k='A'+ i-1;
//         for(int j=1; j<=i; j++){
            
//             cout<<k<<" ";
//         }
//             // k++;
//         cout<<endl;
//     }
//     return 0;
// }

// A 
// B C
// C D E
// D E F G

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     // char k='A';
//     for(int i=1; i<=n; i++){ 
//         char  k='A'+ i-1;
//         for(int j=1; j<=i; j++){
            
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// C 
// C B
// C B A

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     // char k='A';
//     for(int i=1; i<=n; i++){ 
//         char  k='A'+ char(n)-1;
//         for(int j=1; j<=i; j++){
            
//             cout<<k<<" ";
//             k--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//       * 
//     * *
//   * * *
// * * * *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i+j<n-1)
//             cout<<"  ";
//             else
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// * * * * 
// * * *
// * *
// *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i+j<n)
//             cout<<"* ";
//             else
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//         *
//       * * *
//     * * * * *
//   * * * * * * *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<(2*n+1); j++){
//             if(i+j<n || j-i>n)
//             cout<<"  ";
//             else
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//           1
//         1 2 1
//       1 2 3 2 1
//     1 2 3 4 3 2 1
//   1 2 3 4 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main()
// {

//     int n; cin>>n;
    
//     for(int i=0; i<n; i++){
//         int k=0;
//         for(int j=0; j<(2*n+1); j++){
//             if(i+j<n || j-i>n)
//             cout<<"  ";
//             else if(j<=n && i+j>n-1){
//                 k++;
//                 cout<<k<<" ";
//             }
//             else if(j>n && i+j>=n){
//                 k--;
//                 cout<<k<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

// #include<iostream>
// using namespace std;

// int main()
// {

//     int n; cin>>n;
    
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<(2*n+1); j++){
//             if(i+j<n && j<n){
//                 cout<<j+1<<" ";
//             }  
//             else if(j<=n && i+j>n){
//                 cout<<"* ";
//             } 
//             else if(j>n && i+j>n && j-i<=n){
//                 cout<<"* ";
//             }
//             else if(j>n && j-i>=n){
//                 cout<<(2*n)-j+1<<" ";
//                 // j--;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }