class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        int sum = 0;
        int j = 0;
        int len = 0;
        for( int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while( sum >= target){
                len = i - j + 1;
                result = min( len,result);
                sum -= nums[j++];
            }
        }
        return result == INT_MAX ? 0 : result;

    }
};