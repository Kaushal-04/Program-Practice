class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int top = 0, down = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= down && left <= right) {
            // left → right (top row)
            for (int i = left; i <= right; i++)
                res.push_back(matrix[top][i]);
            top++;

            // top → down (right column)
            for (int i = top; i <= down; i++)
                res.push_back(matrix[i][right]);
            right--;

            // right → left (bottom row)
            if (top <= down) {
                for (int i = right; i >= left; i--)
                    res.push_back(matrix[down][i]);
                down--;
            }

            // down → top (left column)
            if (left <= right) {
                for (int i = down; i >= top; i--)
                    res.push_back(matrix[i][left]);
                left++;
            }
        }

        return res;
    }
};
