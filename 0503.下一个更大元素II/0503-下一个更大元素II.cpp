class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> answer(nums.size(),-1);
        stack<int> st;
        st.push(0);
        for( int i = 0; i < nums.size()*2; i++){
            if( nums[i%nums.size()] <= nums[st.top()]){
                st.push(i%nums.size());
            }else{
                while( !st.empty() && nums[i%nums.size()] > nums[st.top()]){
                    answer[st.top()] = nums[i%nums.size()];
                    st.pop();
                }
                st.push(i%nums.size());
            }
        }
        return answer;

    }
};