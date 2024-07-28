class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long  sum = 0;
        for(int num : nums){
            sum+=num;
        }
        int n = nums.size();
        long long sum2 = n *( n+1)/2;
        return sum2 - sum; 
    }
};