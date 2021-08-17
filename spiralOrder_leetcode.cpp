class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowBegin = 0, rowEnd = matrix.size() - 1,
            columnBegin = 0, columnEnd = matrix[0].size() - 1;
        
        vector<int> answer;
        
        while(rowBegin <= rowEnd && columnBegin <= columnEnd){
            // Row l to r
            for(int i = columnBegin; i <= columnEnd; i++ ){
                 answer.push_back(matrix[rowBegin][i]);
            }
            rowBegin++;
            
            // Column up to down
            for(int i = rowBegin; i <= rowEnd; i++){
                answer.push_back(matrix[i][columnEnd]);
            }
            columnEnd--;
            
            // Row r to l
            if(rowBegin <= rowEnd){
                for(int i = columnEnd; i >= columnBegin; i--){
                    answer.push_back(matrix[rowEnd][i]);
                }
                rowEnd--;
            }
            
            // Column down to up
            if(columnBegin <= columnEnd){
                for(int i = rowEnd; i >= rowBegin; i--){
                    answer.push_back(matrix[i][columnBegin]);
                }
                columnBegin++;
            }   
        }
        
        return answer;    
    }
    
};
