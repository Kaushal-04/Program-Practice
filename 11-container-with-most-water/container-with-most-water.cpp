class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxi = 0;
        while(l < r){
            int cap = min(height[l], height[r]) * (r - l);
            maxi = max(maxi, cap);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxi;
    }
};