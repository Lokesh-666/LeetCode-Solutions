class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      vector<string> ans;
      if(nums.empty()) return ans;
        int size = 1;
        for(int i = 1; i < nums.size();i++){
            if(nums[i] - 1 == nums[i-1]){
                size++;
                continue;
            }
            else{
                if(size>1){
                    
                    ans.push_back(to_string(nums[i-size]) + "->" + to_string(nums[i-1]));
                }
                else{
                    ans.push_back(to_string(nums[i-1]));
                }
                size = 1;
            }
        }
        if(size>1){
                    
                    ans.push_back(to_string(nums[nums.size() - size]) + "->" + to_string(nums[nums.size()-1]));
                }
                else{
                    ans.push_back(to_string(nums[nums.size()-1]));
                }
        return ans;  
    }
};