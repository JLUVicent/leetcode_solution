class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // 定义栈来解决问题
        stack<long long> st;
        for ( int i = 0; i < tokens.size(); i++){
            if ( tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                long long nums1 = st.top();
                st.pop();
                long long nums2 = st.top();
                st.pop();
                if  (tokens[i] == "+" ) st.push( nums2 + nums1);
                else if ( tokens[i] == "-" ) st.push( nums2 - nums1 );
                else if ( tokens[i] == "*"  ) st.push( nums2 * nums1 );
                else if ( tokens[i] == "/") st.push( nums2 / nums1 );
            }
            else{
                st.push( stoll(tokens[i]));
            }
        }
        int result = st.top();
        st.pop();
        return result;

    }
};