class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n <= 1)  return n;
        unordered_map<int, int> mp;
        
        int res = 0, mark = 0;
        for(int i=0; i<n; i++){
            if(mp.find(s[i]) != mp.end() && mp[s[i]] >= mark){
                res = max(res, i - mark);
                mark = mp[s[i]] + 1;
                mp[s[i]] = i;
            }else{
                mp[s[i]] = i;
            }
        }
        res = max(res, n-mark);
        return res;
    }
};