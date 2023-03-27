class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;  // dp数组初始化
        for( int i = 1; i <= n; i++){
            for( int j = 1; j <= i ; j++){
                dp[i] += dp[j -1] * dp[i - j];  //第一个为左子树的个数，第二个为右子树的个数
            }
        }
        return dp[n];

    }
};