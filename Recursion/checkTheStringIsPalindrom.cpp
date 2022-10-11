#include <iostream>
#include <string.h>
using namespace std;

void check(string str, int index){
    int len = str.size()-1;
    cout<<len<<endl;
    if (str[index] == str[len]){
        if (index + 1 == len || index == len){
            printf("The entered word is a palindrome\n");
            return;
        }
        check(str, index + 1);
    }
    else{
        printf("The entered word is not a palindrome\n");
    }
}

int main()
{
    string str = "madam";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << " ";
    // }
    // cout << endl;
    check(str, 0);
    return 0;
}