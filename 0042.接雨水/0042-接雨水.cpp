class Solution {
public:
    int trap(vector<int>& height) {
        // int sum = 0;    //�洢����ˮ�Ľ��
        // stack<int> st;
        // st.push(0);
        // for( int i = 1; i < height.size(); i++){
        //     if( height[i] <= height[st.top()]){
        //         st.push(i);
        //     }else{
        //         while( !st.empty() && height[i] > height[st.top()]){
        //             int mid = st.top();
        //             st.pop();
        //             if( !st.empty()){
        //                 int h = min(height[st.top()],height[i]) - height[mid];
        //                 int w = i - st.top() - 1;
        //                 sum += h*w;
        //             }
        //         }
        //         st.push(i);
        //     }
        // }
        // return sum;

        // �������
        // int sum = 0;
        // for( int i = 0; i < height.size(); i++){
        //     if( i == 0 || i == height.size()-1) continue;   //��һ�������һ��������ˮ
        //     int rHeight = height[i];
        //     int lHeight = height[i];
        //     for( int r = i + 1; r < height.size(); r++){
        //         if( height[r] > rHeight) rHeight = height[r];
        //     }
        //     for( int l = i - 1; l >= 0 ; l--){
        //         if( height[l] > lHeight) lHeight = height[l];
        //     }
        //     int h = min(lHeight,rHeight) - height[i];
        //     if( h > 0) sum+=h;
        // }
        // return sum;

        // ˫ָ���Ż�
        vector<int> maxLeft(height.size(),0);
        vector<int> maxRight(height.size(),0);
        int size = height.size();

        maxLeft[0] = height[0];
        for( int i = 1; i < size; i++){
            maxLeft[i] = max( height[i],maxLeft[i-1]);
        }
        
        maxRight[size-1] = height[size-1];
        for( int i = size-2; i >= 0; i--){
            maxRight[i] = max( height[i],maxRight[i+1]);
        }

        // ���
        int sum = 0;
        for( int i = 0; i < size; i++){
            int count = min(maxLeft[i],maxRight[i]) - height[i];  //�൱��ֻ����߶�
            if( count > 0 ) sum+=count;
        }
        return sum;

    }
};