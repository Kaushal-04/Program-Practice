class Solution {
public:
    bool check(vector<vector<char>>& board, int i, int j){
        vector<bool> track(9, false);
        for(int a = i; a < i + 3; a++){
            for(int b = j; b < j + 3; b++){
                if(board[a][b] != '.'){
                    int num = board[a][b] - '1';
                    if(track[num])
                        return false;
                    track[num] = true;
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows and columns
        for(int i = 0; i < 9; i++){
            vector<bool> row(9, false), col(9, false);
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';
                    if(row[num]) return false;
                    row[num] = true;
                }
                if(board[j][i] != '.'){
                    int num = board[j][i] - '1';
                    if(col[num]) return false;
                    col[num] = true;
                }
            }
        }

        // Check 3x3 boxes
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                if(!check(board, i, j))
                    return false;
            }
        }

        return true;
    }
};