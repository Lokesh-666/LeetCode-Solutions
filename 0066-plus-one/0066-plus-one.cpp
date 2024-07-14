class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> digits1 = digits;
        int flag = -1;
        int i = digits1.size() - 1;

        for(; i >= 0; i--){
            if(digits1[i] != 9){
                ++digits1[i];
                flag = 1;
                break;
            }
            
            else{
                digits1[i] = 0;
                flag = 0;
                continue;
            }
        }

        if(flag == 0){
            digits1[0] = 1;
            digits1.push_back(0);
        }

        return digits1;
    }
};