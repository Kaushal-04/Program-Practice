class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        while(i<s.length()) {
            if('0' <= s[i] && s[i] <= '9') { 
                s.erase(i,1);
                s.erase(i-1,1);
                i--;
            }
            else 
                i++;
        }
        return s;
    }
};