class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        if( n == 1) return 1;
        vector<int> dp(n,1);
        int result = 0;
        for( int i = 1; i < n; i++){
            if( nums[i] > nums[i-1]){
                dp[i] = dp[i-1] + 1;
            }
            if( dp[i] > result) result = dp[i];
        }
        return result;

    }
};