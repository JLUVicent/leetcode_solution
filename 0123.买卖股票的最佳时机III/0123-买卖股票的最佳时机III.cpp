class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(5));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];	//�ڵ�ǰ����
        dp[0][2] = 0;
        dp[0][3] = -prices[0];	//����ڶ��������൱�ڵ�һ������������
        dp[0][4] = 0;
        for( int i = 1; i < n; i++){
            dp[i][0] = 0;
            dp[i][1] = max( dp[i-1][1], -prices[i]);    //��һ�γ���
            dp[i][2] = max( dp[i-1][2],dp[i-1][1]+prices[i]);   //��һ�β�����
            dp[i][3] = max( dp[i-1][3],dp[i-1][2]-prices[i]);   //�ڶ��γ���
            dp[i][4] = max( dp[i-1][4],dp[i-1][3]+prices[i]);   //�ڶ��β�����
        }
        return dp[n-1][4];
    }
};