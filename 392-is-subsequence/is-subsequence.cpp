class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.length();
        int m = s.length();
        if(m > n)   return false;
        if(m == 0)  return true;
        int sm = 0;
        for(auto i=0; i<n; i++){
            if(s[sm] == t[i])
                sm++;
            if(sm > m-1)    return true;
        }
        return false;
    }
};