class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,0);
        dp[0] = 1;
        // for( int i = 0; i < nums.size(); i++){
        //     for( int j = nums[i]; j <= target; j++){
        //         dp[j] += dp[j - nums[i]];
        //     }
        // }
        for( int j = 0; j <= target; j++){
            for( int i = 0; i < nums.size(); i++){
                if( j - nums[i] >= 0  && dp[j] < INT_MAX - dp[j - nums[i]])
                dp[j] += dp[j-nums[i]];
            }
        }
        return dp[target];
    }
};


// #define MAX (a) > (b) ? (a) :(b);