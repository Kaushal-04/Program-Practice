class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int mark = 0;
        for(auto i=1; i<n; i++){
            if(nums[i] != nums[mark]){
                mark ++;
                nums[mark] = nums[i];
            }
        }
        return mark + 1; 
    }
};