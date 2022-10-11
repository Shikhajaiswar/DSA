#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        
        for(int i=0; i<str.length(); i++){
            char ch=str[i];
            int number=0;
            if(str[i]>='a' && str[i]<='z'){
                number = ch-'a';
            }
            else if(str[i]>='A' && str[i]<='Z'){
                number = ch-'A';
            }
            
            arr[number]++;
        }

        for(int i=0; i<26; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
        
        int max=-1; int ans=0;
        for(int i=0; i<26; i++){
            if(max<arr[i]){
                ans=i;
                max=arr[i];
            }
        }
        
        return ans+'a';
    }

int main()
{
    cout<<getMaxOccuringChar("aaaaa");
    return 0;
}