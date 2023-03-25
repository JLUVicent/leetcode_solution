class Solution {
public:
    int fib(int n) {
        // // ¶¯Ì¬¹æ»®
        // if( n <= 1) return n;
        // vector<int> dp(2);
        // dp[0] = 0;
        // dp[1] = 1;
        // int sum;
        // for( int i = 2; i <= n; i++ ){
        //     sum = dp[0] + dp[1];
        //     dp[0] = dp[1];
        //     dp[1] = sum;
        // }
        // return sum;
        // µÝ¹é
        if( n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};