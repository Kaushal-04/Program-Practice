class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int, int> , int>> q;
        int count = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, count});
                }
            }
        }
        while(!q.empty()){
            auto fr = q.front();
            q.pop();
            int i = (fr.first).first, j = (fr.first).second;
            int cnt = fr.second;
            if(i > 0)
                if(grid[i-1][j] == 1){
                    grid[i-1][j] = 2;
                    q.push({{i-1, j}, cnt+1});
                }
            if(i < grid.size()-1)
                if(grid[i+1][j] == 1){
                    grid[i+1][j] = 2;
                    q.push({{i+1, j}, cnt+1});
                }
            if(j > 0)
                if(grid[i][j-1] == 1){
                    grid[i][j-1] = 2;
                    q.push({{i, j-1}, cnt+1});
                }
            if(j < grid[0].size()-1)
                if(grid[i][j+1] == 1){
                    grid[i][j+1] = 2;
                    q.push({{i, j+1}, cnt+1});
                }
            
            count = max(count, cnt);
        }
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return count;
    }
};