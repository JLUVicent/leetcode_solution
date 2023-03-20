class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candy( ratings.size(),1);   //初始每个人都有糖果
        // 从左向右遍历
        for( int i = 1; i < ratings.size(); i++){
            if( ratings[i - 1] < ratings[i]){
                candy[i] = candy[i-1] + 1;
            }
        }
        // 从右向左
        for( int i = ratings.size()-2; i >=0; i--){
            if( ratings[i] > ratings[i+1]){
                candy[i] = max( candy[i] , candy[i+1] + 1);
            }
        }
        int result = 0;
        for( int i = 0; i < candy.size(); i++){
            result += candy[i];
        }
        return result;
    }
};