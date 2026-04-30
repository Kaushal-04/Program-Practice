class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() > t.length())
            return false;
        unordered_map<char, int> mp;
        for(auto i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(auto i=0; i<t.length(); i++){
            if(mp[t[i]] < 1)
                return false;
            else
                mp[t[i]]--;
        }
        return true;
    }
};