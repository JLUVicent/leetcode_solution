class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for( int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }

        vector<int> dp(10001,0);

        if( sum % 2 == 1) return false;
        int target = sum / 2;

        //01����
        for( int i = 0; i < nums.size(); i++){
            for( int j = target; j >= nums[i]; j--){
                dp[j] = max( dp[j],dp[j-nums[i]]+nums[i]);
            }
        }
        if( dp[target] == target) return true;
        return false;

    }
};