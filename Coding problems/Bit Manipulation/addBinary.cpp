class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;                     //sum = carry + a[i] + b[j]
            if(i >= 0) sum += a[i--] - '0';     //the char will be in ascii value so we have to make it 0 ans 1
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);          
        }
        //at the last if any carry left then add in the number
        if(carry) res += to_string(carry); 
        reverse(res.begin(), res.end());
        return res;
    }

};