class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tl = 0, sl = 0;
        while (tl < t.length() && sl < s.length()) {
            if (t[tl] == s[sl]) {
                sl++;
            }
            tl++;
        }
        return sl == s.length();
    }
};