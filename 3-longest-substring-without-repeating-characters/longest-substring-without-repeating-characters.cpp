class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0)  return 0;
        if(n == 1)  return 1;
        int ans = 0;
        unordered_map<char, int> mp;
        int l = 0, r = 0;
        while(r < n){
            if(mp.find(s[r]) != mp.end()){
                ans = max(ans, r-l);
                if(mp[s[r]] >= l){
                    l++;
                }
                else{
                    mp[s[r]] = r;
                    r++;
                }
            }
            else{
                mp.insert({s[r], r});
                r++;
            }
        }
        ans = max(ans, r-l);
        return ans;
    }
};