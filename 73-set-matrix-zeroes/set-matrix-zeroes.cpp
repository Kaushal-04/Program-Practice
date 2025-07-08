class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> mark;
        for(auto i=0; i<matrix.size(); i++){
            for(auto j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    mark.push_back({i,j});
                }
            }
        }
        for(auto i=0; i<mark.size(); i++){
            int r = mark[i].first;
            int c = mark[i].second;
            for(auto j=0; j<matrix[0].size(); j++){
                matrix[r][j] = 0;
            }
            for(auto j=0; j<matrix.size(); j++){
                matrix[j][c] = 0;
            }
        }
    }

};