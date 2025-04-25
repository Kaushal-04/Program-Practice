class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int mark = 1;
        for(auto i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1])
                continue;
            else {
                nums[mark] = nums[i];
                mark++;
            }
        }
        return mark;
    }
};