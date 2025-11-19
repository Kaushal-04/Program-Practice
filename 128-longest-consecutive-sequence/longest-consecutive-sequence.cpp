class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)  return n;
        set<int> st(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int maxi = 1;
        for(auto it : st){
            if(mp[it - 1] == 0 && mp[it + 1] == 0)
                mp[it]++;
            else if(mp[it-1] != 0){
                mp[it] = mp[it-1] + 1;
                maxi = max(maxi, mp[it]);
            }
            else if(mp[it + 1] != 0){
                mp[it] = mp[it+1] + 1;
                maxi = max(maxi, mp[it]);
            }
        }
        return maxi;
    }
};