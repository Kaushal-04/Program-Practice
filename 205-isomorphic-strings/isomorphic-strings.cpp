class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        set<char> mapp;
        for(auto i=0; i<s.length(); i++){
            auto it = mapp.find(t[i]);
            if(it == mapp.end()){
                mapp.insert(t[i]);
                mp[s[i]] = t[i];
            }else
                continue;
        }
        string temp = "";
        for(auto i=0; i<s.length(); i++){
            temp += mp[s[i]];
        }
        if(temp == t)
            return true;
        return false;
    }
};