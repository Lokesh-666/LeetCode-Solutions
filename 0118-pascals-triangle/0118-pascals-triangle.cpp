class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> final;
        vector<int> result;
            result.push_back(1);
            final.push_back(result);
        if(numRows == 1)   return final;
    
        if(numRows == 2){
            result.push_back(1);
            final.push_back(result);
            return final;
        }
        
        result.push_back(1);
        final.push_back(result);
        for(int i = 2; i <= numRows-1; i++){
            result.push_back(1);
            for(int j = i-1; j>0; j--){
                result[j] = result[j] + result[j-1];
            }
            final.push_back(result);
        }
    return final;
    }

};