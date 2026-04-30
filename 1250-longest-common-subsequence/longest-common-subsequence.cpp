class Solution {
public:
    bool allSameChar(const string& s) {
        for (int i = 1; i < (int)s.size(); i++) {
            if (s[i] != s[0]) return false;
        }
        return true;
    }

    int help(string& s1, string& s2, int i, int j, vector<vector<int>>& dp) {
        if (i < 0 || j < 0) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        if (s1[i] == s2[j])
            return dp[i][j] = 1 + help(s1, s2, i - 1, j - 1, dp);
        else
            return dp[i][j] = max(
                help(s1, s2, i - 1, j, dp),
                help(s1, s2, i, j - 1, dp)
            );
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        // Early return if both strings are made of the same repeated char
        if (n > 0 && m > 0 && text1[0] == text2[0] && allSameChar(text1) && allSameChar(text2)) {
            return min(n, m);
        }
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return help(text1, text2, n - 1, m - 1, dp);
    }
};
