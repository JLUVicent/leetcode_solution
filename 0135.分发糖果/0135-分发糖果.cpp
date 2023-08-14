class Solution {
public:
    int candy(vector<int>& ratings) {
        // 初始时候每人都有一个糖果
        int n = ratings.size();
        vector<int> vec(n,1);
        // 从前向后遍历，大于相邻的就加1
        for( int i = 1; i < n; i++){
            if( ratings[i] > ratings[i-1]){
                vec[i] = vec[i-1]+1;
            }
        }
        // 从后向前遍历，大于相邻的就加1
        for( int i = n-2; i >=0; i--){
            if( ratings[i] > ratings[i+1]){
                vec[i] = max(vec[i],vec[i+1]+1);
            }
        }
        int res = 0;
        for( auto i : vec){
            res += i;
        }

        return res;

    }
};