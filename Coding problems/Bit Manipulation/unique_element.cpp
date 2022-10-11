// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"ENTER THE SIZE :";
//     cin>>a;
//     int arr[a];
//     int c=0;
//     for(int i=0;i<a;i++){
//         cin>>arr[i];
//         c=c^arr[i];  //xor operation on 0 and a number gives that number !!!
//     }
//     cout<<c;
    
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class arr{
//     int *a;
//     int size;
//     int length;
//     public:
//     arr(int s);
//     void create();
//     void display();
//     void uniqe();
// };
//  arr::arr(int s){
//     size=s;
//     a=new int[size];
// }

// void arr::create(){
//     cout<<"Enter the length of the array : ";
//     cin>>length;
//     for(int i=0; i<length; i++){
//         cout<<"Enter element "<<i<<" : ";
//         cin>>a[i];
//     }
//     cout<<endl;
// }

// void arr::display(){
//     cout<<"Your Array is : ";
//     for(int i=0; i<length; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// void arr::uniqe(){
//     int i=0,j=0;
//     for(i=0; i<length; i++){
//         for(j=0; j<length ; j++){
//             if(a[i]==a[j] && i!=j){
//                 break;
//             }

            
//         }
//         if(j==length){
//             cout<<a[i]<<" ";
//         }
       

//     }
// }
// int main()
// {
//     arr a(10);
//     a.create();
//     a.display();
//     a.uniqe();
//     return 0;
// }
