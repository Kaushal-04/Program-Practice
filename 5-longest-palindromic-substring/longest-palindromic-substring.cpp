class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        int maxi = 0;
        int end = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s[i - 1] == rev[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    if (dp[i][j] > maxi && i - dp[i][j] == n - j) {
                        maxi = dp[i][j];
                        end = i;
                    }
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        return s.substr(end - maxi, maxi);
    }
};
