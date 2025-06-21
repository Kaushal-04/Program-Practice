class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        unordered_map<char, int> tmap, wind;
        for (char c : t) {
            tmap[c]++;
        }

        int have = 0, need = tmap.size();
        int l = 0, r = 0, minLen = INT_MAX, start = 0;

        while (r < s.length()) {
            char c = s[r];
            wind[c]++;
            if (tmap.count(c) && wind[c] == tmap[c]) {
                have++;
            }

            // Try to shrink the window
            while (have == need) {
                if ((r - l + 1) < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                wind[s[l]]--;
                if (tmap.count(s[l]) && wind[s[l]] < tmap[s[l]]) {
                    have--;
                }
                l++;
            }
            r++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
