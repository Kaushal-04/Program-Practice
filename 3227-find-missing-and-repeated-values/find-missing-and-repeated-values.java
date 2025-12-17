class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        HashSet<Integer> hs = new HashSet<>();

        int rep = -1;
        int miss = -1;
        int sum = 0;

        for(int i=0; i<n; i++){
            for(int j = 0; j<m; j++){
                sum += grid[i][j];
                if(hs.contains(grid[i][j])){
                    rep = grid[i][j];
                }
                else
                    hs.add(grid[i][j]);
            }
        }

        int actualSum = ((n * n) * ((n * n) + 1)) / 2;
        miss = actualSum + rep - sum;
        return new int[] {rep, miss};   
    }
}