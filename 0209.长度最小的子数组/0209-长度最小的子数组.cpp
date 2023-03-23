class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int j = 0;
        int result = INT_MAX;
        int length = 0;
        for( int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while( sum >= target){
                length = i-j+1;
                result = min( result,length);
                sum -= nums[j];
                j++;
            }
        }
        return result == INT_MAX ? 0 : result;

    }
};