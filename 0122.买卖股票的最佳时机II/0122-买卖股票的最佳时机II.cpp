class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        vector<int> dp(len,0);
        dp[0] = 0;
        for( int i = 1; i < prices.size(); i++){
            int sum = prices[i] - prices[i-1] ? (prices[i] - prices[i-1]) : 0;
            dp[i] = max( dp[i-1], sum+dp[i-1]);
        }
        return dp[len-1];

    }
};