class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int el = 0;
        for(auto i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[el] = nums[i];
                el++;
            }
        }
        return el;
    }
};