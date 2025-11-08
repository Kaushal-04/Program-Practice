class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool found = false;
        int row = 0;
        while(row < n){
            if(target < matrix[row][0])
                break;
            row++;
        }
        if(row) row--;
        for(int i= 0; i<m; i++){
            if(matrix[row][i] == target)
                found = true;
        }
        return found;
    }
};