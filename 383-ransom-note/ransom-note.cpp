class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> a;
        map<char, int> b;
        for(auto ch : ransomNote){
            a[ch]++;
        }
        for(auto ch : magazine){
            b[ch]++;
        }
        for(auto it : a){
            if(a[it.first] <= b[it.first])
                continue;
            else
                return false;
        }
        return true;
    }
};