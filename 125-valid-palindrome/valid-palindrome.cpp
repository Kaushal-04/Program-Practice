class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto i=0; i<s.length(); i++){
            if(isalnum(s[i]))
                str += tolower(s[i]);
        }
        string newS = str; 
        reverse(newS.begin(), newS.end());
        if (str == newS)
            return true;
        return false;
    }
};