class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(st.find(nums[i]) != st.end())
                return nums[i];
            else
                st.insert(nums[i]);
        }
        return -1;
    }
};