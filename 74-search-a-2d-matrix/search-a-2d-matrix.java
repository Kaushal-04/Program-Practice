class Solution {

    public boolean binarySearchColumn(int[][] matrix, int target, int row) {
        int left = 0;
        int right = matrix[0].length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (matrix[row][mid] == target)
                return true;

            if (matrix[row][mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return false;
    }

    public int binarySearchRow(int[][] matrix, int target) {
        int top = 0;
        int down = matrix.length - 1;

        while (top <= down) {
            int mid = top + (down - top) / 2;

            if (matrix[mid][0] > target)
                down = mid - 1;
            else
                top = mid + 1;
        }

        return down;
    }

    public boolean searchMatrix(int[][] matrix, int target) {
        int row = binarySearchRow(matrix, target);

        if (row < 0)
            return false;

        return binarySearchColumn(matrix, target, row);
    }
}
