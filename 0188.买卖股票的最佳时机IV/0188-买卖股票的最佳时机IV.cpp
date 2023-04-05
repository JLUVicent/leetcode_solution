class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2*k+1));
        // �����ʼ��
        for( int i = 0; i <= 2*k; i++){
            if( i % 2 == 1) dp[0][i] = -prices[0];
        }
        for( int i = 1; i < n; i++){
            // dp[i][0] = 0;
            // dp[i][1] = max( dp[i-1][1], -prices[i]);    //��һ�γ���
            // dp[i][2] = max( dp[i-1][2],dp[i-1][1]+prices[i]);   //��һ�β�����
            // dp[i][3] = max( dp[i-1][3],dp[i-1][2]-prices[i]);   //�ڶ��γ���
            // dp[i][4] = max( dp[i-1][4],dp[i-1][3]+prices[i]);   //�ڶ��β�����
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