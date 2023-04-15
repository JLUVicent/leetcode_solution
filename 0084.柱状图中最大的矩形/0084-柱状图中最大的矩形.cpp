class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // //暴力，测试用例超时
        // int sum = 0;
        // for( int i = 0; i < heights.size(); i++){
        //     int left = i;
        //     int right = i;
        //     for(; left >= 0; left--){
        //         if( heights[left] < heights[i]) break;
        //     }
        //     for(; right < heights.size(); right++){
        //         if( heights[right] < heights[i]) break;
        //     }
        //     int w = right - left - 1;
        //     int h = heights[i];
        //     sum = max(sum ,h*w);
        // }
        // return sum;

        //双指针优化
        vector<int> minLeftIndex(heights.size());
        vector<int> minRightIndex(heights.size());
        int size = heights.size();

        //记录每个柱子左边第一个小于该柱子的下标
        minLeftIndex[0] = -1;
        for( int i = 1; i < size; i++){
            int t = i - 1;
            while( t >= 0 && heights[t] >= heights[i]) t = minLeftIndex[t];
            minLeftIndex[i] = t;
        }

        minRightIndex[size-1] = size;
        for( int i = size - 2; i >= 0; i--){
            int t = i + 1;
            while( t < size && heights[t] >= heights[i] ) t = minRightIndex[t];
            minRightIndex[i] = t;
        }
        int result = 0;
        for( int i = 0; i < size; i++){
            int sum = heights[i] * (minRightIndex[i] - minLeftIndex[i] - 1);
            result = max( sum,result);
        }
        return result;
        // // 单调栈方法，使用单调递减栈
        // int result = 0;
        // heights.insert(heights.begin(),0);
        // heights.push_back(0);
        // stack<int> st;
        // st.push(0);
        // for( int i = 1; i < heights.size(); i++){
        //     if( heights[i] >= heights[st.top()]){
        //         st.push(i);
        //     }else{
        //         while( !st.empty() && heights[i] < heights[st.top()]){
        //             int mid = st.top();
        //             st.pop();
        //             if( !st.empty()){
        //                 int left = st.top();
        //                 int right = i;
        //                 int h = heights[mid];
        //                 int w = right - left - 1;
        //                 result = max( h*w , result);
        //             }
        //         }
        //         st.push(i);
        //     }
        // }
        // return result;
    }
};