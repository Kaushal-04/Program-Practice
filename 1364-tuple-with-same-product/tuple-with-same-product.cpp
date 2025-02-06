class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto i=0; i<n-1; i++){
            for(auto j=i+1; j<n; j++){
                mp[nums[i] * nums[j]]++;
            }
        }
        long long result = 0;
        for (auto it : mp) {
            if (it.second > 1) {
                result += (it.second * (it.second - 1)) / 2;
            }
        }
        return (8*result);
    }
};