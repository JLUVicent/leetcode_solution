class Solution {
public:
    int climbStairs(int n) {
        if( n <= 2) return n;
        int dp[2];
        dp[0] = 1;
        dp[1] = 2;
        int sum;
        for( int i = 3; i <= n; i++){
            sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};