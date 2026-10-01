class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if(st.empty())
                    return false;

                char top = st.top();
                st.pop();

                if(s[i] == ')'){
                    if(top != '(')
                        return false;
                } 
                else if(s[i] == '}'){
                    if(top != '{')
                        return false;
                } 
                else if(top != '[')
                        return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};