class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)    return true;
        vector<int> diff;
        for(auto i=0; i<s1.length(); i++){
            if(s1[i] != s2[i])
                diff.push_back(i);
            if(diff.size() > 2)
                return false;
        }
        if(diff.size() < 2) return false;
        int i = diff[0];
        int j = diff[1];
        swap(s2[i], s2[j]);
        if(s1 == s2)    return true;
        return false;
    }
};