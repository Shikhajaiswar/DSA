// isalnum() function in C programming language checks whether the given character is alphanumeric or not. isalnum() function defined in ctype.h header file. Alphanumeric: A character that is either a letter or a number

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1; 
        
        while(i < j){
            if(!isalnum(s[i])) {
                i++; continue; 
            } 
            
            if(!isalnum(s[j])){
                j--; continue; 
            }
            
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++; j--;
        }
        return true;
    }
};