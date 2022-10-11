// #include<iostream>
// using namespace std;
// class arr
// {
// public:
//     int *a;
    // int size;
//     int length;
//     arr(int b)
//     {
//         size = b;
//         a = new int[size];
//     }
//     void create()
//     {
//         cout << "length ";
//         cin >> length;
//         for (int i = 0; i < length; i++)
//         {
//             cin >> a[i];
//         }
//     }
//     void dispaly()
//     {
//         for (int i = 0; i < length; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     arr Union(arr y)
//     {
//         arr z(20);
//         z.length = length + y.length;
//         static int k = 0; 
//         for(int i=0; i<length; i++){
//             z.a[k]=a[i];
//             k++;
//         }
//         for(int j=0; j<y.length; j++){
//             int m=0;
//             for(int i=0; i<k; i++){
//                 if(z.a[i]==y.a[j])
//                 m++;
//             }
//             if(m==0){
//                 z.a[k]=y.a[j];
//                 k++;
//             }
//         }

//         return z;
//     }
// };
// int main()
// {
//     arr a1(10);
//     arr a2(10);
//     // arr a3(20);
//     a1.create();
//     a2.create();
//     arr a3(20);
//     a3 = a1.Union(a2);
//     a3.dispaly();
//     return 0;
//     return 0;
// }

// -----------------------
// #include<iostream>
// using namespace std;
// class arr
// {
// public:
//     int *a;
//     int size;
//     int length;
//     arr(int b)
//     {
//         size = b;
//         a = new int[size];
//     }
//     void create()
//     {
//         cout << "length ";
//         cin >> length;
//         for (int i = 0; i < length; i++)
//         {
//             cin >> a[i];
//         }
//     }
//     void dispaly()
//     {
//         for (int i = 0; i < length; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     arr Union(arr y)
//     {
//         arr z(20);
//         int k=0;
//         z.length = length + y.length;
//         for(int i=0; i<length; i++){
//             int  m=0;
//             for(int j=0; j<y.length; j++){
//                 if(a[i]==y.a[j])
//                 m++;
//             } 
//             if(m!=0){
//             z.a[k]=a[i];
//             k++;
//             }
            
//         }

//         return z;
//     }
// };
// int main()
// {
//     arr a1(10);
//     arr a2(10);
//     // arr a3(20);
//     a1.create();
//     a2.create();
//     arr a3(20);
//     a3 = a1.Union(a2);
//     a3.dispaly();
//     return 0;
//     return 0;
// }




