class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> temp;
        int n = grid.size();
        int sum = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++){
                temp.push_back(grid[i][j]);
                sum += grid[i][j];
            }

        sort(temp.begin(), temp.end());
        int rep = -1, miss = -1;
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i] == temp[i+1]){
                rep = temp[i];
                break;
            }
        }      
        miss = (((n*n)*((n*n) + 1))/2) - (sum - rep);
        return {rep, miss}; 
    }
};