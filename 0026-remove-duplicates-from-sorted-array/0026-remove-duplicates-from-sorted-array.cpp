class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n = nums.size();
        // int temp = nums[0];
        int j = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]!=nums[j-1]){
                nums[j] = nums[i];
                // temp = nums[j];
                ++j;
            }
        }
        return j;
    }
};