class Solution {
    public void setZeroes(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int affectedRow = -1, affectedCol = -1;
        for(int i=0; i<n; i++){
            if(matrix[i][0] == 0){
                affectedRow = i;
                break;
            }
        }
        for(int i=0; i<m; i++){
            if(matrix[0][i] == 0){
                affectedCol = i;
                break;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i=1; i<n; i++){
            if(matrix[i][0] == 0){
                for(int j=1; j<m; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j=1; j<m; j++){
            if(matrix[0][j] == 0){
                for(int i=1; i<n; i++){
                    matrix[i][j] = 0;
                }
            }
        }
        if(affectedRow != -1){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
        if(affectedCol != -1){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
    }
}
