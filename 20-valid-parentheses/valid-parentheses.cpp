class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        stack<char> st;
        st.push(s[0]);
        for(auto i=1; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(s[i] == ')' && !st.empty() && st.top() == '('){
                    st.pop();
                    continue;
                }
                if(s[i] == '}' && !st.empty() && st.top() == '{'){
                    st.pop();
                    continue;
                }
                if(s[i] == ']' && !st.empty() && st.top() == '['){
                    st.pop();
                    continue;
                }
                return false;
            }
        }
        if(!st.empty())
            return false;
        return true;
    }
};