class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            bool swapped = false;
            for(int j = i+1; j<n; j++){
                if(nums[j] < nums[i]){
                    swapped = true;
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};