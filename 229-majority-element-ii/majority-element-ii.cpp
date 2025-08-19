class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]] >= (int)n/3)
                st.insert(nums[i]);
            mp[nums[i]]++;
        }
        vector<int> res(st.begin(), st.end());
        return res;
    }
};