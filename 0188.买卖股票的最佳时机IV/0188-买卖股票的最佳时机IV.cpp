class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2*k+1));
        // 数组初始化
        for( int i = 0; i <= 2*k; i++){
            if( i % 2 == 1) dp[0][i] = -prices[0];
        }
        for( int i = 1; i < n; i++){
            // dp[i][0] = 0;
            // dp[i][1] = max( dp[i-1][1], -prices[i]);    //第一次持有
            // dp[i][2] = max( dp[i-1][2],dp[i-1][1]+prices[i]);   //第一次不持有
            // dp[i][3] = max( dp[i-1][3],dp[i-1][2]-prices[i]);   //第二次持有
            // dp[i][4] = max( dp[i-1][4],dp[i-1][3]+prices[i]);   //第二次不持有
            for( int j = 1; j <= 2*k; j++){
                if( j % 2 == 1){
                    dp[i][j] = max( dp[i-1][j],dp[i-1][j-1] - prices[i]);
                }else{
                    dp[i][j] = max( dp[i-1][j],dp[i-1][j-1] + prices[i]);
                }
            }
        }
        return dp[n-1][2*k];
    }
};