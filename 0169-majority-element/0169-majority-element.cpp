class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        for(int num : nums ){
            mpp[num]++;
        }
        int index = -1;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(mpp[nums[i]] > max){
                index = i;
                max = mpp[nums[i]];
            } 
        }
        return nums[index];
    }
};