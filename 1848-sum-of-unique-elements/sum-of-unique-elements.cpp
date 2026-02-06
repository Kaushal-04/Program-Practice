class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < n; i++) {
            bool leftSame  = (i > 0 && nums[i] == nums[i - 1]);
            bool rightSame = (i < n - 1 && nums[i] == nums[i + 1]);

            if (!leftSame && !rightSame)
                sum += nums[i];
        }
        return sum;
    }
};