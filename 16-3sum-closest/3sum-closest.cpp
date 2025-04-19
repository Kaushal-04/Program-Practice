class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n - 2; i++) {
            int low = i + 1, high = n - 1;
            while (low < high) {
                int curSum = nums[i] + nums[low] + nums[high];
                if (abs(curSum - target) < abs(closest - target)) {
                    closest = curSum;
                }
                if (curSum < target)
                    low++;
                else if (curSum > target)
                    high--;
                else
                    return target;
            }
        }
        return closest;
    }
};
