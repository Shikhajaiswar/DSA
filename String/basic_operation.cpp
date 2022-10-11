// -------------------->>Length of the string<<--------------
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     char demo[]="shikhaJaiswar";
//     int i;
//     for( i=0; demo[i]!='\0'; i++){
//         // cout<<i;
//     }
//     cout<<i;
//     return 0;
// }


// --------------------->>Counting words in the string<<----------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int count=0;
//     char str[]="How are     you i   shikha";
//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]==' ' && (str[i-1]!=' ')){
//             count++;
//         }
//     }

//     cout<<"The number of words are : "<<count+1;
//     return 0;
// }

// ---------------------->>Validating a String<<--------------------------------
// #include<iostream>
// using namespace std;

// int validate(char *name){
//     for(int i=0; name[i]!=0; i++){
//         if(!(name[i]>=65 && name[i<=90]) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57)){
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     char *name = "dtdthd!ht";
//     if(validate(name)){
//         cout<<"Valid String";
//     }
//     else
//     cout<<"Not a Valid String";
//     return 0;
// }

// ------------------------------>>Reversing a String<<---------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     char A[]="Nothing";
//     char B[8];
//     int i;
//     for(i=0; A[i]!='\0'; i++){

//     }
//     i=i-1;
//     for(int j=0; i>=0; i--, j++){
//         B[j]=A[i];
//     }
//     B[i]='\0';
//     cout<<B;
//     return 0;
// }


// ----------------------------->>Another Method<<----------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     char A[]="Python";
//     int i,j;
//     for(j=0; A[j]!='\0'; j++){

//     }
//     j=j-1;
//     for(i=0; i<j; i++, j--){
//         int temp=A[i];
//         A[i]=A[j];
//         A[j]=temp;
//     }

//     for(int i=0; A[i]!='\0'; i++){
//         cout<<A[i];
//     }
//     return 0;
// }

// ---------------------->>        Checking the strings           <<----------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     char A[]="Painting";
//     char B[]="Painting";
//     int i, j;
//     for(i=0, j=0; A[i]!='\0',B[j]!='\0'; i++ , j++){
//         if(A[i]!=B[j])
//         break;
//     }
//     if(A[i]==B[j]) cout<<"Equal";
//     else if(A[i]<B[j]) cout<<"Smaller";
//     else cout<<"Greater";
//     return 0;
// }

// ----------------------------->>  palindrome  <<----------------------------
// #include<iostream>
// using namespace std;

// bool palindrom(char *A, char *B){
//     for(int i=0,j=0 ; B[i]!='\0', A[j]!='\0'; j++,i++){
//         if(A[j]!=B[i])
//         return false;
//     }
//     return true;
// }
// int main()
// {
//     char A[]="iojhh";
//     int i,j;
//     for(i=0; A[i]!='\0'; i++){

//     }
//     i=i-1;
//     char B[i];
//     for(j=0; i>=0; i--, j++){
//         B[j]=A[i];
//     }
//     B[j]='\0';
    

//     if(palindrom(A, B))
//     cout<<"A palindrom";
//     else
//     cout<<"Not a Palindrom";
//     return 0;
// }

// -------------------------->>Finding Duplicate in a string<<----------------
#include<iostream>
using namespace std;

int main()
{
    char A[]="priyanshu";
    for(int i=0; A[i]!='0'; i++){
        for(int j=i; A[j]!='\0'; j++){
            if(A[i]!=A[j])
            return false;
        }
    }
    return 0;
}
