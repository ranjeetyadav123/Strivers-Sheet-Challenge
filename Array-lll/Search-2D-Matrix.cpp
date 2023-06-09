class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(); int col=matrix[0].size();
         int p=1;
         if(row == 1){
            for(int j=0; j<col; j++){
            if(matrix[0][j]==target) return 1;
             }
            return 0; 
         }
          if(col == 1){
            for(int j=0; j<row; j++){
            if(matrix[j][0]==target) return 1;
             }
            return 0; 
         }
       
        for(int i=1; i<row; i++ ){
            if(matrix[i][0]==target){
                p=i;
                break;
            }
            if(matrix[i][0]>target){
                p=i-1;
                break;
            }
        }
        for(int j=0; j<col; j++){
            if(matrix[p][j]==target) return 1;
        }
        for(int j=0; j<col; j++){
            if(matrix[row-1][j]==target) return 1;
        }
        return 0;
    }
};