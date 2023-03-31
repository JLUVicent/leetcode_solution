class Solution {
public:
    int numSquares(int n) {
        // vector<int> nums(101,0);
        // for( int i = 1; i <= 100; i++){
        //     nums[i] = i*i;
        // }
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;
        for( int i = 0; i <=100; i++){
            for( int j = i*i; j <= n; j++){
                if( dp[j - i*i] < INT_MAX - 1)
                dp[j] = min( dp[j] ,dp[j - i*i] + 1);
            }
        }
        return dp[n];

    }
};