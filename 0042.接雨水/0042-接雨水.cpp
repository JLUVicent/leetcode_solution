class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        stack<int> st;
        st.push(0);
        for( int i = 0; i < height.size(); i++){
            if( height[i] <= height[st.top()]){
                st.push(i);
            }else{
                while( !st.empty() && height[i] > height[st.top()]){
                    int mid = st.top();
                    st.pop();
                    if( !st.empty()){
                        int h = min(height[i],height[st.top()]) - height[mid];
                        int w = i - st.top() - 1;
                        sum += h * w;
                    }
                }
                st.push(i);
            }
        }
        return sum;

    }
};