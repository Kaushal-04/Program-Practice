class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> s1Freq(26, 0), windFreq(26, 0);
        int len = s1.length();

        for (int i = 0; i < len; i++) {
            s1Freq[s1[i] - 'a']++;
            windFreq[s2[i] - 'a']++;
        }

        if (s1Freq == windFreq) return true;

        for (int i = len; i < s2.length(); i++) {
            windFreq[s2[i] - 'a']++;               
            windFreq[s2[i - len] - 'a']--;         

            if (s1Freq == windFreq) return true;  
        }

        return false;
    }
};
