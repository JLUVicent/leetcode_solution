class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        if( s.size()%2 != 0 ) return false;
        for( int i = 0; i < s.size(); i++){
            if( s[i] == '(') st.push(')');
            else if( s[i] == '{') st.push('}');
            else if( s[i] == '[') st.push(']');\
            else if( st.empty() || s[i] != st.top()) return false;
            else if( st.top() == s[i]) st.pop();
        }
        return st.empty();

    }
};