class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        char flag = 'f';
        if(m == 0) flag = 'm';
        else if(n == 0) flag = 'n';
        vector<int> ans;
        for(; (i<m) && (j<n); ){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                flag = 'o';
            }
            else{
                ans.push_back(nums2[j]);
                j++;
                flag = 't';
            }
        }
        if(flag == 'o' || flag == 'm'){
            for(;j < n; j++){
                ans.push_back(nums2[j]);
            }
        }

        else if(flag == 't' || flag == 'n'){
            for(; i < m; i++){
                ans.push_back(nums1[i]);
            }
        }
        for(int i = 0; i < m+n; i++){
            nums1[i] = ans[i];
        }
        
    }
};