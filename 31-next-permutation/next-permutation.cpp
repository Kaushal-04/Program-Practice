class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int mark = -1;
        for(int i=n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                mark = i-1;
                break;
            }
        }
        if(mark == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int diff = INT_MAX, pos = -1;
        for(int i=n-1; i>mark; i--){
            if(nums[i] != nums[mark] && (nums[i] - nums[mark]) < diff && (nums[i] - nums[mark]) > 0){
                diff = nums[i] - nums[mark];
                pos = i;
            }
        }
        swap(nums[pos], nums[mark]);
        sort(nums.begin() + mark + 1, nums.end());
    }
};