class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = INT_MIN;
        int left = 0;
        int right = height.size() - 1;
        while(left < right){
            int area = (right - left) * min(height[left], height[right]);
            if(area > maxi)
                maxi = area;
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxi;
    }
};