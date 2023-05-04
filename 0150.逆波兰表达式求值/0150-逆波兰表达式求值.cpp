class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for( int i = 0; i < tokens.size(); i++){
            if( tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){
                int nums1 = st.top();
                st.pop();
                int nums2 = st.top();
                st.pop();
                if( tokens[i] == "+" ) st.push(nums1+nums2);
                else if( tokens[i] == "-" ) st.push( nums2 - nums1);
                else if( tokens[i] == "*" ) st.push( nums2 * nums1);
                else if( tokens[i] == "/" ) st.push( nums2 / nums1);
            }else{
                st.push(stoi(tokens[i]));
            }
        }
        int result = st.top();
        st.pop();
        return result;
    }
};