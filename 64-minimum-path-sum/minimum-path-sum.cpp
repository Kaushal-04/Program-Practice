class Solution {
public:
    int help(vector<vector<int>>& grid, int i, int j, int n, int m, vector<vector<int>>& dp) {
        // Out of bounds
        if (i >= n || j >= m)
            return INT_MAX;

        if(dp[i][j] != -1)
            return dp[i][j];
        // Destination cell
        if (i == n - 1 && j == m - 1)
            return grid[i][j];

        int right = help(grid, i, j + 1, n, m, dp);
        int down  = help(grid, i + 1, j, n, m, dp);

        dp[i][j] = grid[i][j] + min(right, down);
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n , vector<int>(m, -1));
        return help(grid, 0, 0, n, m, dp);
    }
};
