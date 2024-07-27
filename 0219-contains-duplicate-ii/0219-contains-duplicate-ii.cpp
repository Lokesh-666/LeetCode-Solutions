class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i =0;i<nums.size()-1;i++ ){
            int indicator = k;
            for(int j = i +1; (j <nums.size()) && (indicator > 0);j++){
                if(nums[i] == nums[j]){ return true;
                }
                indicator--;

            }
        }
        return false;
    }
};