class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)  return nums;
        int target = n/3;
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int count = 1;
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1])
                count++;
            else{
                if(count > target)
                    ans.push_back(nums[i-1]);
                count = 1;
            }
        }
        if(count > target)  ans.push_back(nums[n-1]);
        return ans;
    }
};