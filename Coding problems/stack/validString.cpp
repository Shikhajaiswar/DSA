// #include<stack>

bool isValidParenthesis(string expression)
{
        stack<char> s;
     for(int i=0; i<expression.length(); i++) {
         
         char ch = expression[i];
         
         //if opening bracket, stack push
         //if close bracket, stacktop check and pop
         
         if(ch == '(' || ch == '{' || ch == '['){
             s.push(ch);
         }
         else
         {
             //for closing bracket
             if(!s.empty()) {
                  char top = s.top();
                  if( (ch == ')' && top == '(') || 
                     ( ch == '}' && top == '{') || 
                     (ch == ']' && top == '[') ) {
                      s.pop();
                  }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }  
     }
    
    if(s.empty())
        return true;
    else
        return false;
}














// ------------------------------------------>>ANother Method
class Solution {
public:
    bool isValid(string s) {
        stack<char>str;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '(' ){
                str.push(s[i]);
            }
            else{
                if(str.size() == 0){
                    return false;
                }
                 else if(s[i] == '}' && str.top() == '{'){
                     str.pop();
                 }
                else if(s[i] == ']' && str.top() == '['){
                     str.pop();
                 }
                else if(s[i] == ')' && str.top() == '('){
                     str.pop();
                 }
                else if(str.top() != s[i]){
                    return false;
                }
            }
        }
        
        if(str.size()==0)
            return true;
        else
            return false;
    }
};