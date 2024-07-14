class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int n = nums.size();
        int l = 0;
        int h = nums.size()-1;
        int mid = (l + h)/2;
        for(;l <= h; ){
            mid = (l + h)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                h = mid - 1;
                continue;
            }
            else{
                l = mid + 1;
                continue;
            }
        }
        return l;

    }
};