// * * * * 
// * * *
// * *
// *
// #include<iostream>
// using namespace std;

// void printStar(int row, int coloum) {
//     if(row==0){
//         return ;
//     }
//     if(coloum<row){
//         cout<<"* ";
//         printStar(row, coloum+1);
//     }
//     else{
//         cout<<endl;
//         printStar(row-1, 0);
//     }
// }

// int main()  
// {
//     printStar(4,0);
//     return 0;
// }



// * 
// * *
// * * *
// * * * *
// #include<iostream>
// using namespace std;

// void printStar(int row, int coloum) {
//     if(row==0){
//         return ;
//     }
//     if(coloum<row){
//         printStar(row, coloum+1);
//         cout<<"* ";
//     }
//     else{
//         printStar(row-1, 0);
//         cout<<endl;
//     }
// }

// int main()  
// {
//     printStar(4,0);
//     return 0;
// }

// ---------------------------->>Bubble sort<<----------------------------
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;

}

void printStar(int *arr,int row, int coloum) {
    if(row==0){
        return ;
    }
    if(coloum<row){
        if(arr[coloum]>arr[coloum+1 ])
            swap(row, coloum);
            
        printStar(arr,row, coloum+1);
    }
    else{
        printStar(arr, row-1, 0);
    }
}

int main()  
{
    int arr[]={4,8,2,9,1,5};

    printStar(arr,6,0);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}