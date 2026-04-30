class Solution {
public:
    int help(string& s1, string& s2, int ind1, int ind2, vector<vector<int>>& dp) {
        if(ind1 < 0 || ind2 < 0) return 0;
        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];

        if(s1[ind1] == s2[ind2])
            return dp[ind1][ind2] = 1 + help(s1, s2, ind1 - 1, ind2 - 1, dp);
        else
            return dp[ind1][ind2] = max(
                help(s1, s2, ind1 - 1, ind2, dp),
                help(s1, s2, ind1, ind2 - 1, dp)
            );
    }

    int longestPalindromeSubseq(string s) {
        int n = s.length();
        string newS = s;
        reverse(newS.begin(), newS.end());  

        vector<vector<int>> dp(n, vector<int>(n, -1));
        return help(s, newS, n - 1, n - 1, dp); 
    }
};
