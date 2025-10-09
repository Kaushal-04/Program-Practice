class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorSum = 0;
        bool hasNonZero = false;
        for (int n : nums) {
            xorSum ^= n;
            if (n != 0) 
                hasNonZero = true;
        }
        if (xorSum != 0) 
            return nums.size();
        if (!hasNonZero) 
            return 0;
        return nums.size() - 1;
    }
};