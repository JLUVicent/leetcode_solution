class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // //贪心
        // int low = INT_MAX;
        // int result = 0;
        // for( int i = 0; i < prices.size(); i++){
        //     low = min( low,prices[i]);
        //     result = max( result,prices[i] - low);
        // }
        // return result;
        int len = prices.size();
        vector<vector<int>> dp(len,vector<int>{0,0});
        // dp[i][0]表示当前持有股票的利润，初始肯定是负的
        dp[0][0] = -prices[0];
        dp[0][1] = 0;
        for(int i = 1; i < len; i++){
            dp[i][0] = max( dp[i-1][0],-prices[i]);
            dp[i][1] = max( dp[i-1][1],prices[i]+dp[i-1][0]);
        }
        return max(dp[len-1][0],dp[len-1][1]);
    }
};