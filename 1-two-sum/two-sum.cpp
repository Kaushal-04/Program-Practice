class Solution {
public:
    bool help(vector<int>& nums, int target, vector<int>& ans, int i, int j) {
        if(i >= nums.size()) return false;
        if(j >= nums.size()) return help(nums, target, ans, i + 1, i + 2);

        if(nums[i] + nums[j] == target) {
            ans[0] = i;
            ans[1] = j;
            return true;
        }

        return help(nums, target, ans, i, j + 1);
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        help(nums, target, ans, 0, 1);
        return ans;
    }
};
