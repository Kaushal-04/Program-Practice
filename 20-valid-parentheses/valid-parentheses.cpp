class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        stack<char> st;
        for(auto i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(s[i] == ')'){
                    if(!st.empty() && st.top() == '(')
                        st.pop();
                    else
                        return false;
                }
                else if(s[i] == '}'){
                        if(!st.empty() && st.top() == '{')
                            st.pop();
                        else
                            return false;
                }
                else if(s[i] == ']'){
                    if(!st.empty() && st.top() == '[')
                        st.pop();
                    else
                        return false;
                }
            }

        }
        if(st.empty())
            return true;
        return false;
    }
};