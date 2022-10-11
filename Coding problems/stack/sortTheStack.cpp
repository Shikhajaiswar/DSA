#include <bits/stdc++.h> 

void insert(stack<int> &stack, int data){
    if(stack.empty() || (!stack.empty() && stack.top()<data)){
        stack.push(data);
        return ;
    }
     
    int n = stack.top();
    stack.pop();
    
    insert(stack, data);
    
    stack.push(n);
    
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
        return ;
    }  
    int data = stack.top();
    stack.pop();
    
    sortStack(stack);
    insert(stack, data);
}