class Solution {
public:
    string removeDuplicates(string s) {
        // if (s.size() == 1) return s;
        // // 定义一个栈
        // stack<int> st;
        // for ( int i = 0; i < s.size() ; i++){
        //     // 如果栈为空
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
        // while( !st.empty()){ //将栈中的元素result字符串汇总
        //     result += st.top();
        //     st.pop();
        // }
        // reverse( result.begin(),result.end());//此时字符串需要反转
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