class Solution {
public:
    bool isValid(string s) {
        // 定义栈
        stack<int> st;
        // 如果为奇数个直接返回false，肯定不匹配
        if ( s.size() % 2 != 0) return false;
        for( int i = 0; i < s.size(); i++){
            if ( s[i] == '{') st.push('}');
            else if ( s[i] == '[') st.push(']');
            else if ( s[i] == '(') st.push(')');
            else if ( st.empty() || s[i] != st.top()) return false;
            else st.pop(); //如果都不满足删除栈顶元素，也就是说这种是s[i] == st.top()的情况，移除栈顶元素
        }
        return st.empty();
    }
};