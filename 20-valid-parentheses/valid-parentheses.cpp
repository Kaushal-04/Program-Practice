class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n % 2 != 0)  return false;
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')   return false;

        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }   

            else if(!st.empty()){
                char temp = st.top();
                if(s[i] == ')' && temp == '(' || s[i] == '}' && temp == '{' || s[i] == ']' && temp == '[')
                st.pop();
                else    return false;
            }
            else return false;
        }
        if(!st.empty()) return false;
        return true;
    }
};