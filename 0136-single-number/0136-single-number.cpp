class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // Using built-in XOR operator
        }
        return result;
    }
};