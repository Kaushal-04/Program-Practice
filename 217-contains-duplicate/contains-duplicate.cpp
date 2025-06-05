class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(auto i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size() == nums.size())
            return false;
        return true;
    }
};