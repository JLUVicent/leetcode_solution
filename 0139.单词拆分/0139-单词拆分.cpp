class Solution {
public:
    // bool backtracking( const string& s,const unordered_set<string>& wordset,int startIndex){
    //     if( startIndex >= s.size()){
    //         return true;
    //     }

    //     for( int i = startIndex;i < s.size(); i++){
    //         string word = s.substr(startIndex,i-startIndex+1);
    //         if( wordset.find(word) != wordset.end() && backtracking(s,wordset,i+1)){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordset(wordDict.begin(),wordDict.end());
        vector<bool> dp(s.size()+1,false);
        dp[0] = true;
        for( int j = 0; j <= s.size(); j++){
            //排列问题先遍历背包
            for( int i = 0; i < j; i++){
                string word = s.substr(i,j-i);
                if( wordset.find(word) != wordset.end() && dp[i]){
                    dp[j] = true;
                }
            }
        }
        return dp[s.size()];
        // return backtracking( s,wordset,0);
    }   
};