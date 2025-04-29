class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.length();
        string temp;
        for(int i = n - 1; i >= 0;){
            while(i >= 0 && s[i] == ' ')    i--;
            if(i < 0) 
                break;
            temp = "";
            while(i >= 0 && s[i] != ' '){
                temp += s[i--];
            }
            reverse(temp.begin(), temp.end());
            if(!res.empty()) 
                res += ' ';
            res += temp;
        }
        return res;
    }
};