#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            count++;
        }
    }
    int n = str.length() + count;

    for(int i=0; i<n; i++){
        if(str[i]==' '){
            str[i]='@';

        }
    }

    return str;
}

int main()
{
    string s="she is a girl";
    cout<<replaceSpaces(s);
    return 0;
}