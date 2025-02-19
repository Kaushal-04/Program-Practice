class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m = part.size();
        while(s.find(part)!=string::npos){ // loop runs till there is no 'part' substr left
            int i= s.find(part); // finds index of first occurred part substr
            s.erase(i,m);
        }
        return s;

    }
};