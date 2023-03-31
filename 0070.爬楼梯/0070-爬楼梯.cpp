class Solution {
public:
    int climbStairs(int n) {
        // // 按照完全背包理论处理
        // vector<int> nums = {1,2};
        // vector<int> dp(n+1,0);
        // dp[0] = 1;
        // for( int j = 0; j <= n; j++){
        //     for( int i = 0; i < nums.size(); i++){
        //         if( j >= nums[i]){
        //             dp[j] += dp[j - nums[i]];
        //         }
        //     }
        // }
        // return dp[n];

        if( n <= 2) return n;
        int dp[2];
        dp[0] = 1;
        dp[1] = 2;
        int sum ;
        for( int i = 3; i <= n; i++){
            sum = dp[0] + dp[1];
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};