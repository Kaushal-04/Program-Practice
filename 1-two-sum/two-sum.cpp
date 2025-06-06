class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(auto i=0; i<nums.size(); i++){
            int search = target - nums[i];
            if(mp.find(search) != mp.end())
                return {i, mp[search]};
            else
                mp[nums[i]] = i;
        }
        return {};
    }
};