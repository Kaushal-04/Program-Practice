class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxi = INT_MIN;
        while(start < end){
            int w = end - start;
            int h = min(height[start], height[end]);
            if(maxi < w * h)
                maxi = h * w;
            if(height[start] < height[end])
                start++;
            else
                end--;
        }
        return maxi;
    }
};