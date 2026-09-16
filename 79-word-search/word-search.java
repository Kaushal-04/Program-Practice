class Solution {

    public boolean helper(char[][] board, String word, int i, int j, int ind, int n, int m){
        if(ind == word.length())
            return true;
        if(i >= n || j >= m || i < 0 || j < 0)
            return false;
        if(board[i][j] != word.charAt(ind))
            return false;

        char temp = board[i][j];
        board[i][j] = '#';
        boolean found =
                helper(board, word, i + 1, j, ind + 1, n, m) ||
                helper(board, word, i - 1, j, ind + 1, n, m) ||
                helper(board, word, i, j + 1, ind + 1, n, m) ||
                helper(board, word, i, j - 1, ind + 1, n, m);

        board[i][j] = temp;

        return found;
    }

    public boolean exist(char[][] board, String word) {
        int n = board.length;
        int m = board[0].length;
        int ind = 0;
        boolean found = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if (board[i][j] == word.charAt(0)) {
                    if (helper(board, word, i, j, ind, n, m)) 
                        return true;
                }
            }
        }

        return false;
    }
}