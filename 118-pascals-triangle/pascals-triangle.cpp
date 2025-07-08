class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ps;
        ps.push_back({1});
        if(numRows == 1)
            return ps;
        ps.push_back({1,1});
        if(numRows == 2)
            return ps;
        for(int i = 2; i < numRows; i++){
            vector<int> temp(i + 1, 1);
            for(int j = 1; j < i; j++){
                temp[j] = ps[i - 1][j - 1] + ps[i - 1][j];
            }
            ps.push_back(temp);
        }
        return ps;
    }
};