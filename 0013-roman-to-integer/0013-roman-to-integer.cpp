class Solution {
public:
    int romanToInt(string s) {
        // making a unordered hash to represent roman symbol and it's value
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int n = s.length();
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i + 1 < n && romanMap[s[i]] < romanMap[s[i + 1]])
                sum -= romanMap[s[i]];
            else
                sum += romanMap[s[i]];
        }
        return sum;
    }
};