class Solution {
public:
    bool isValid(vector<string>& board, int n, int row, int col) {
        // Check upper-left diagonal
        int r = row, c = col;
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r--; c--;
        }

        // Check left row
        c = col;
        while (c >= 0) {
            if (board[row][c] == 'Q') return false;
            c--;
        }

        // Check lower-left diagonal
        r = row, c = col;
        while (r < n && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r++; c--;
        }

        return true;
    }

    void help(vector<vector<string>>& ans, vector<string>& board, int n, int col) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isValid(board, n, row, col)) {
                board[row][col] = 'Q';
                help(ans, board, n, col + 1);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        help(ans, board, n, 0);
        return ans;
    }
};