class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> store;
        int l = 0;
        int res = 0;
        for (int r = 0; r < s.length(); r++) {
            while (store.find(s[r]) != store.end()) {
                store.erase(s[l]);
                l++;
            }
            store.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};