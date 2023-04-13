class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        for( int i = 0; i < nums1.size(); i++){
            umap[nums1[i]] = i;
        }
        vector<int> answer(nums1.size(),-1);
        stack<int> st;
        st.push(0);
        for( int i = 1; i < nums2.size(); i++){
            if( nums2[i] <= nums2[st.top()]){
                st.push(i);
            }else{
                while( !st.empty() && nums2[i] > nums2[st.top()]){
                    auto iter = umap.find(nums2[st.top()]);
                    if( iter != umap.end()){
                        answer[iter->second] = nums2[i];
                    }
                    st.pop();
                }
                st.push(i);
            }
        }
        return answer;

    }
};