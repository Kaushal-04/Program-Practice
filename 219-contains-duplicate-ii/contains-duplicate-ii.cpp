class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int> > mp;
        for(auto i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it : mp){
            if((it.second).size() > 1){
                for(auto i=1; i<(it.second).size(); i++){
                    int temp = abs((it.second)[i] - (it.second)[i-1]);
                    if(temp <= k)
                        return true;
                }
            }
        }
        return false;
    }
};