class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-1;
        while(i > 0){
            if(nums[i-1] < nums[i])
                break;
            i--;
        }
        if(i == 0){
            sort(nums.begin(), nums.end());
            return ;
        }
        int pointValue = nums[i-1];
        int currGreat = INT_MAX;
        int gInd;
        int j = i;
        while(j < n){
            if(nums[j] > pointValue && nums[j] < currGreat){
                currGreat = nums[j];
                gInd = j;
            }
            j++;
        }
        swap(nums[i-1], nums[gInd]);
        sort(nums.begin() + i , nums.end());
    }
};