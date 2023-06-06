class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int trow=matrix.size();
        int tcol= matrix[0].size();
        
//         for(int r=0; r<trow; r++){
//             int scol=0;
//             int ecol=tcol-1;
//             while(scol<ecol){
//                 swap(matrix[r][scol],matrix[r][ecol]);
//                 scol++;
//                 ecol--;
//             }
//         }
        reverse (matrix.begin() , matrix.end());
        
        for(int i=0; i<trow; i++){
            for(int j=0; j<tcol; j++){
                if(i<j){
                   swap(matrix[i][j],matrix[j][i]); 
                }
            }
        }
        
    }
};