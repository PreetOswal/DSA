class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1) return false;
       stack<char>st;
       st.push(s[0]);
       for(int i=1; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else{
                if(!st.empty() && s[i] == ')' && st.top() == '('){
                    st.pop();
                }else if(!st.empty() && s[i] == ']' && st.top() == '['){
                    st.pop();
                }else if(!st.empty() && s[i] == '}' && st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }
       }

       if(st.empty()) return true;

       return false;
    }
};