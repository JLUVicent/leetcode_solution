class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int length = 0;
        int sum = 0;
        int j = 0;
        for( int i = 0; i < nums.size(); i++){
            sum += nums[i];
            while( sum >= target){
                length = i - j +1;
                res = min(res,length);
                sum -= nums[j++];
            }
        }
        return res==INT_MAX? 0 : res;

    }
};