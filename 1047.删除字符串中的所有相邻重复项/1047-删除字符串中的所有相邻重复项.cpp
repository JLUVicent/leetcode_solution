class Solution {
public:
    string removeDuplicates(string s) {
        // if (s.size() == 1) return s;
        // // ����һ��ջ
        // stack<int> st;
        // for ( int i = 0; i < s.size() ; i++){
        //     // ���ջΪ��
        //     if ( st.empty() || s[i] != st.top() ){
        //         st.push(s[i]);
        //     }
        //     else if ( s[i] == st.top()){
        //         st.pop();
        //     }
        //     // else if ( s[i] != st.top() ){
        //     //     st.push(s[i]);
        //     // }
        // }
        // string result = "";
        // while( !st.empty()){ //��ջ�е�Ԫ��result�ַ�������
        //     result += st.top();
        //     st.pop();
        // }
        // reverse( result.begin(),result.end());//��ʱ�ַ�����Ҫ��ת
        // return result;
        string result;
        for( char t: s){
            if ( result.empty() || result.back() != t){
                result.push_back(t);
            }
            else{
                result.pop_back();
            }
        }
        return result;
    }
};