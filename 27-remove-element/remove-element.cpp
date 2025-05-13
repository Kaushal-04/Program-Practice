class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int mark = 0;
        for(auto i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[mark] = nums[i];
                mark++;
            }
        }
        return mark;
    }
};