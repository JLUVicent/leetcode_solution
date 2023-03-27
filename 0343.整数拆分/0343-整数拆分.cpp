class Solution {
public:
    int integerBreak(int n) {
        // vector<int> dp(n+1,0);    //定义dp数组
        // dp[0] = 0;
        // dp[1] = 0;
        // dp[2] = 1;
        // for( int i = 3; i <= n; i++){
        //     for( int j = 1; j <= i/2; j++){
        //         dp[i] = max(j * dp[i-j], dp[i]);
        //         dp[i] = max( j * (i - j ), dp[i]);
        //     }
        // }
        // return dp[n];
        int result = 1;
        if( n == 1 ) return 0;
        if( n == 2 ) return 1;
        if( n == 3 ) return 2;
        while( n > 4 ){
            result *= 3;
            n -= 3;
        }
        result *= n;
        return result;
    }
};