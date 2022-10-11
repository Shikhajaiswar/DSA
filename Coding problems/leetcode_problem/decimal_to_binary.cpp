// if the individually digits given then 
//            for normal (ans = (ans * 10 + digit))

//            for reverse (ans = (digits * pow(10^i) +ans))

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int ans=0;
//     int i=0;
//     if(n==0){
//         cout<<1;
//     }

//     while(n!=0){
//         int bit = n&1;
//         ans = ((bit * pow(10,i)) + ans);
        
//         n = n>>1;
//         // cout<<"n  "<<n<<endl;
//         i++;
//     }
//     cout<< ans;
//     return 0;
// }

// --------------------------------->>Bianry to decimal<<-----------------------
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int temp=n%2;
//         ans = (temp*pow(2,i)) + ans;
//         n=n/10;
//         i++;
//     }

//     cout<<ans;
//     return 0;
// }


