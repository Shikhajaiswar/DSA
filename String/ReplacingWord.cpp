#include<iostream>
#include<string>
using namespace std;

int main()
{
    // char str[]="Delhites are the people of Delhi";
    string s="shikha is a girl";
    string s2="boy";
    s.replace( 12,4 ,s2);
    cout<<s;
    return 0;
}


// #include<iostream>
// using namespace std;

// void replace(int x, int y, string s, string s2){
//     for(int i=x; i<y; i++){
//         s[i]=s2[i];
//     }
//     for(int i=0; s[i]!='\0'; i++){
//         cout<<s[i];
//     }
// }
// int main()
// {
//     char s[]="shikha is a girl";
//     char s2[]="kajal";
//     replace(0,5,s,s2);
//     return 0;
// }