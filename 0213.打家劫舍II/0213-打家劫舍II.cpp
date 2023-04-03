class Solution {
public:

    int myrob( vector<int>& nums,int start,int end){
        if( start == end) return nums[start];
        vector<int> dp(nums.size(),0);
        dp[start] = nums[start];
        dp[start+1] = max(nums[start+1],nums[start]);
        for( int i = start+2; i <= end; i++){
            dp[i] = max( dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[end];
    }

    int rob(vector<int>& nums) {
        if( nums.size() == 1) return nums[0];
        int result1 = myrob( nums,0,nums.size()-2);
        int result2 = myrob( nums,1,nums.size()-1);
        return max(result1,result2);

    }
};