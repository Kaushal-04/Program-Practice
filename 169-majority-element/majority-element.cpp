class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int flag;
        if(n % 2 == 0)
            flag = n / 2;
        else
            flag = (n/2) + 1;
        if(nums.size() <= 2)
            return nums[0];
        sort(nums.begin(), nums.end());
        int count = 1;
        for(auto i=1; i<n; i++){
            if(nums[i] == nums[i-1])
                count++;
            else 
                count = 1;
            if(count >= flag)
                return nums[i];
        }
        return 0;
    }
};