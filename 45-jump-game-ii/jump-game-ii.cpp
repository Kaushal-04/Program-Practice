class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0, l = 0, r = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            r = max(r, nums[i] + i);
            if(i == l) {
                l = r;
                count++;
            }      
        }
        return count;
    }
};