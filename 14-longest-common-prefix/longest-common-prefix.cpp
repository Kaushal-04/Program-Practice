class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1)
            return strs[0];
        string s = strs[0];
        for(auto i=1; i<strs.size(); i++){
            while(strs[i].find(s) != 0){
                s = s.substr(0, s.size()-1);
            }
        }
        return s;
    }
};