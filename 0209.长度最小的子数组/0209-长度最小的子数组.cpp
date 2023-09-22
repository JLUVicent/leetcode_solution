class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int i = 0;
        //int length = 0;
        int res = INT_MAX;
        
        for( int j = 0; j < nums.size(); j++){
            sum+= nums[j];
            while(sum >= target){
                //length = j - i + 1;
                //res = min(length,res);
                res = min(res,j-i+1);
                
                sum-=nums[i++];
            }
        }
        return res == INT_MAX? 0 : res;

    }
};