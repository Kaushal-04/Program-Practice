class Solution {
public:
    string reverseVowels(string s) {
        set<char> vov = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int l = 0;
        int r = s.length()-1;
        while(l < r){
            while(vov.find(s[l]) == vov.end() && l < r){
                l++;
            }
            while(vov.find(s[r]) == vov.end() && l < r){
                r--;
            }
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
};