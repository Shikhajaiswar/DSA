class Solution {
public:                                   //eg : "   shikha is a good   girl  ";
    int lengthOfLastWord(string s) {
        int c=0;
        
        for(int i=s.size()-1; i>=0; i--) //we are starting from the last of string
        {
            if(s[i] == ' ')              //if any spaces from the last ignore it and if the space after word then break from it
            {
                if(c > 0) break;
            } 
            else 
            {
                c++;                    //counting the no of word in last word;
            }
        }
        
        return c;
    }
};