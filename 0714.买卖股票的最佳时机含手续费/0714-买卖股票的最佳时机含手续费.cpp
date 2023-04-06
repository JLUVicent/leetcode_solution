class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        // 时间：O(n)
        // 空间：O(n)
        // 和买卖股票II一样，只需要加上手续费的操作
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2));
        dp[0][0] = -prices[0];
        for( int i = 1; i < n; i++){
            dp[i][0] = max( dp[i-1][0],dp[i-1][1]-prices[i]);
            dp[i][1] = max( dp[i-1][1],dp[i-1][0]+prices[i]-fee);
        }
        return max(dp[n-1][0],dp[n-1][1]);
    }
};