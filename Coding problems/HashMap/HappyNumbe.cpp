class Solution
{
    int digitSqSum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = sum + ((n % 10) * (n % 10));
            n = n / 10;
        }
        return sum;
    }

public:
    bool isHappy(int n)
    {
        unordered_map<int, int> mp;
        while (n != 1)
        { // checking if the num is 1 or not
            if (mp[n] == 0)
                mp[n]++; // every num we traverse make them 1 so we can't come to them again otherwise we fall in the loop
            else         // if the map is already 1 for the num return false
                return false;

            n = digitSqSum(n);
        }
        return true; // if we find 1 then return true
    }
};