class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;  
        for (int i = 0; i < n; ++i) {
            if (i > pos) 
                return false;
            pos = max(pos, i + nums[i]);
            if (pos >= n - 1)
                return true;
        }
        return false;
    }
};
