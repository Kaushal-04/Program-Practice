class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(auto i=0; i<nums.size(); i++){
            if(nums[j] == 0){
                if(nums[i] != 0){
                    swap(nums[j], nums[i]);
                    j++;
                } else {
                    continue;
                }
            } else {
                j++;
                continue;
            }
        }
    }
};