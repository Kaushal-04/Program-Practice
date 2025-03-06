class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int num = 0;
        for(int i=s.length(); i>=0; i--){
            int currValue = mp[s[i]];
            if (i < s.length() - 1 && currValue < mp[s[i + 1]]) {
                num -= currValue;
            } else {
                num += currValue;
            }
        }
        return num;
    }
};