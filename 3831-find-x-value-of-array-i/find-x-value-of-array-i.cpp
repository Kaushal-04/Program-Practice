class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> result(k, 0);
        vector<long long> temp(k, 0);
        for (int i = 0; i < n; ++i) {
            vector<long long> demo(k, 0);
            int mod_val = nums[i] % k;
            demo[mod_val] += 1;
            for (int j = 0; j < k; j++) {
                int new_rem = (j * mod_val) % k;
                demo[new_rem] += temp[j];
            }
            for (int j = 0; j < k; j++) {
                result[j] += demo[j];
            }
            temp = demo;
        }
        return result;
    }
};
