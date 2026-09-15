class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        List<Integer> res = new ArrayList<>();
        for(int i=0; i<(Math.min(n, m) + 1) / 2; i++){
            for(int j=0+i; j<m-i; j++){
                res.add(matrix[i][j]);
            }
            for(int k=i+1; k<n-i; k++){
                res.add(matrix[k][m-i-1]);
            }
            // Only if there is a separate bottom row
            if (n - i - 1 > i)
                for(int l=m-i-2; l>=i; l--){
                    res.add(matrix[n-i-1][l]);
                }
            // Only if there is a separate left column
            if (m - i - 1 > i)
                for(int u=n-i-2; u>=i+1; u--){
                    res.add(matrix[u][i]);
                }
        }
        return res;
    }
}