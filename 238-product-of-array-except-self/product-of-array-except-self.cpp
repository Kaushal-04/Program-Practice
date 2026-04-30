class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n+1, 1);
        vector<int> post(n+1, 1);
        for(auto i=0; i<n; i++){
            pref[i+1] = nums[i] * pref[i];
            post[n-i-1] = post[n-i] * nums[n-i-1];
        }
        vector<int> res(n);
        for(auto i=0; i<n; i++){
            res[i] = pref[i] * post[i+1];
        }
        return res;
    }
};