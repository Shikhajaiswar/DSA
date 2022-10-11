class Solution {
public:
   string reverseWords(string s) {
    stack<string> s1;
    int n = s.length();
    string str = "";
    for(int i=0; i<n; i++)
    {
        if(s[i]!=' ')
        {
            str = str + s[i];
        }
        
        else
        {
            if(str!="")
                s1.push(str);
            
            str = "";       //every time we empty the string to store new word
            
        }
    }
    
    if(str!="")
        s1.push(str);            //adding the last element in the stack
    
    string ans = "";
    while(!s1.empty())
    {
        if(s1.size()!=1)
            ans = ans + s1.top() + " ";
        
        else
            ans = ans + s1.top();
        
        s1.pop();                 // removing the element from the stack
    }
    
    return ans;
}
};