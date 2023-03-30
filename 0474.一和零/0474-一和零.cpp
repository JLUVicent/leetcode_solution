class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));//初始化dp数组
        for( string str:strs){
            int oneNum = 0,zeroNum = 0;
            for( char c:str){
                if( c == '0') zeroNum++;
                else oneNum++;
            }        
            for( int i = m; i >= zeroNum; i--){//倒序遍历背包
                for( int j = n; j >= oneNum; j--){  //倒序遍历背包
                dp[i][j] = max( dp[i][j],dp[i-zeroNum][j-oneNum]+1);    //这里加一表示容量加1
                }
            }
        }

        return dp[m][n];

    }
};