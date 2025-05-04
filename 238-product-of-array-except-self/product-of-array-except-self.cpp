class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n, 1), suff(n, 1), ans(n ,1);

        //Prefix array calucate karo
        for(auto i=1; i<n; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }

        //Suffix array calculate karo
        for(auto i = n-2; i >=0; i--){
            suff[i] = suff[i+1] * nums[i+1];
        }

        //Create final array
        for(auto i=0; i<n; i++){
            ans[i] = pre[i] * suff[i];
        }
        return ans;
    }
};