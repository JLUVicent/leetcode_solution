class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> dp(triangle.size());
        dp[0] = triangle[0][0];
        for( int i = 1; i < triangle.size(); i++){
            for( int j = triangle[i].size()-1; j >= 0 ; j--){
                if( j == triangle[i].size() - 1){
                    dp[j] = dp[j-1] + triangle[i][j];
                }else if (j == 0){
                    dp[j] = dp[j] + triangle[i][j];
                }else{
                    dp[j] = min(dp[j] , dp[j-1]) + triangle[i][j];
                }
            }
        }
        int res = INT_MAX;
        for( auto i : dp){
            res = min(i,res);
        }
        return res;


    }
};