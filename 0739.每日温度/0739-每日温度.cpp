class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // vector<int> answer(temperatures.size(),0);
        // for( int i = 0; i < temperatures.size()-1; i++){
        //     for( int j = i+1; j < temperatures.size(); j++){
        //         if(temperatures[i] < temperatures[j]){
        //             answer[i] = j-i;
        //             break;
        //         }
        //     }
        // }
        // return answer;
        vector<int> answer(temperatures.size(),0);
        stack<int> st;
        st.push(0); //第一个元素下标入栈
        for( int i = 1; i < temperatures.size(); i++){
            if( temperatures[i] <= temperatures[st.top()]){
                st.push(i);
            }else{
                while( !st.empty() && temperatures[i] > temperatures[st.top()]){
                    answer[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i); //当前元素也要push进去
            }
        }
        return answer;
    }
};