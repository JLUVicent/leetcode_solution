class Solution {
public:
    string removeDuplicates(string s) {
        // stack<int> st;
        // if(  s.size() == 1) return s;
        // for( int i = 0; i < s.size(); i++){
        //     if( st.empty() || st.top() != s[i]) st.push(s[i]);
        //     else if( st.top() == s[i]){
        //         st.pop();
        //     }
        // }
        // string result;
        // while( !st.empty()){
        //     char tmp = st.top();
        //     st.pop();
        //     result+=tmp;
        // }
        // reverse(result.begin(),result.end());
        // return result;

        //直接将字符串作为栈
        string result;
        for( char c:s){
            if( result.empty() || result.back() != c) result.push_back(c);
            else if( result.back() == c) result.pop_back();
        }
        return result;
    }
};