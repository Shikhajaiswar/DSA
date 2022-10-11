#include <bits/stdc++.h>
void solve(stack<int>&myStack,int data) {
    //base case
    if(myStack.empty()) {
        myStack.push(data);
        return ;
    }
    
    int num = myStack.top();
    myStack.pop();
    
    //RECURSIVE CALL
    solve(myStack,data);
    
    myStack.push(num);
    
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    
//     int n = myStack.size();
    solve(myStack,x);
    return myStack;
}
