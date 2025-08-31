class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        
        if (n > m) return false;  
        vector<int> freq1(26, 0), freq2(26, 0);
        for(int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) return true;  
        int l = 0;
        for (int r = n; r < m; r++) {
            freq2[s2[r] - 'a']++;     
            freq2[s2[l] - 'a']--;  
            l++;                          
            if (freq1 == freq2) return true; 
        }

        return false;
    }
};