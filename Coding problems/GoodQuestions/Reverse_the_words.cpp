#include<iostream>
#include<string>
#include<string.h>
#include<stack>
using namespace std;

string reverseWords(string s) {
    stack<string> s1;
    int n = s.length();
    string str = "";
    for(int i=0; i<n; i++){
        if(s[i]!=' '){
            str = str + s[i];
        }       
        else{
            if(str!="")
                s1.push(str);
            str = ""; 
        }
    }
    
    if(str!="")
        s1.push(str);
    
    string ans = "";
    
    while(!s1.empty()){
        if(s1.size()!=1)
            ans = ans + s1.top() + " ";        
        else
            ans = ans + s1.top();       
        s1.pop();
    }
    
    return ans;
}

int main()
{
    cout<<reverseWords("Shikha is a good girl");
    return 0;
}