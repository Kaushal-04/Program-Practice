class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length;
        int N = n * n;

        long gridSum = 0;
        long gridSqSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long val = grid[i][j];
                gridSum += val;
                gridSqSum += val * val;
            }
        }

        long expectedSum = (long) N * (N + 1) / 2;
        long expectedSqSum = (long) N * (N + 1) * (2 * N + 1) / 6;

        long y = expectedSum - gridSum;       
        long x = gridSqSum - expectedSqSum;   

        long duplicate = (-x / y - y) / 2;
        long missing = duplicate + y;

        int[] res = new int[2];
        res[0] = (int)duplicate;
        res[1] = (int)missing;
        return res;
    }
}