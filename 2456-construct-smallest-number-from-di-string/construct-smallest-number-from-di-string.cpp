class Solution {
public:
    string smallestNumber(string pattern) {
        string res;
        int n = pattern.length();
        for(int i = 1; i <= n + 1; i++) {
            res += '0' + i;
        }
        for(int i = 0; i < n; i++) {
            if (pattern[i] == 'I') {
                continue;
            } else {
                int s = i;
                while (i < n && pattern[i] == 'D') {
                    i++;
                }
                reverse(res.begin() + s, res.begin() + i + 1);
            }
        }

        return res;
    }
};
