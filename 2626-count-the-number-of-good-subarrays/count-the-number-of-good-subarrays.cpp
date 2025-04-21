class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long res = 0, count = 0;
        unordered_map<int, int> freq;
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            count += freq[nums[r]];
            freq[nums[r]]++;
            while (count >= k) {
                res += (nums.size() - r);
                freq[nums[l]]--;
                count -= freq[nums[l]];
                l++;
            }
        }
        return res;
    }
};
