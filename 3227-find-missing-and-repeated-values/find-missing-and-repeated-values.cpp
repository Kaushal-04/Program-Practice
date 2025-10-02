class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int sum =(( n*n )* ((n * n)+1))/2;
        vector<int> res(2);
        unordered_set<int> st;
        int repeat = -1;
        int actualSum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                actualSum += grid[i][j];
                if(st.find(grid[i][j]) != st.end()){
                    repeat = grid[i][j];
                }
                else st.insert(grid[i][j]);
            }
        }
        res[0] = repeat;
        res[1] = sum + repeat - actualSum;
        return res;
    }
};