class Solution {
public:
    bool isSubsequence(string s, string t) {
        // 暴力模拟
        // int tmp = -1;
        // int count = 0;
        // for (int i = 0; i < s.size(); i++) {
        //     for (int j = 0; j < t.size(); j++) {
        //         if (s[i] == t[j] && j > tmp) {
        //             tmp = j;
        //             count++;
        //             break;
        //         }
        //     }
        // }
        // return (count == s.size());

        // 动态规划
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,0));
        for( int i = 1; i <=  s.size(); i++){
            for( int j = 1; j <= t.size(); j++){
                if( s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = max( dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return (dp[s.size()][t.size()] == s.size());
    }
};