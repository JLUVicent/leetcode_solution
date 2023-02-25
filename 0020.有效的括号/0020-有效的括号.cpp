class Solution {
public:
    bool isValid(string s) {
        // ����ջ
        stack<int> st;
        // ���Ϊ������ֱ�ӷ���false���϶���ƥ��
        if ( s.size() % 2 != 0) return false;
        for( int i = 0; i < s.size(); i++){
            if ( s[i] == '{') st.push('}');
            else if ( s[i] == '[') st.push(']');
            else if ( s[i] == '(') st.push(')');
            else if ( st.empty() || s[i] != st.top()) return false;
            else st.pop(); //�����������ɾ��ջ��Ԫ�أ�Ҳ����˵������s[i] == st.top()��������Ƴ�ջ��Ԫ��
        }
        return st.empty();
    }
};