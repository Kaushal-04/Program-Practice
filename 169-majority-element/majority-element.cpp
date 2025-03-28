class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        if(nums.size() < 3)
            return nums[0];
        sort(nums.begin(), nums.end());
        for(auto i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                count++;
                if(count > nums.size()/2)
                    return nums[i];
            }else
                count  = 1;
        }
        return count;
    }
};