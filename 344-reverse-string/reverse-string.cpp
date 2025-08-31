class Solution {
public:
    void help(vector<char>& s, int left, int right){
        if(left >= right)   return;
        swap(s[left], s[right]);
        help(s, left+1, right-1);
    }
    void reverseString(vector<char>& s) {
        help(s, 0, s.size()-1);
    }
};