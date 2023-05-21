class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        vector<int> vec(nums.size(),-1);
        int result;
        for( int i = 0; i < nums.size(); i++){
            if(nums[i] != vec[nums[i]]){
                vec[nums[i]] = nums[i];
                //cout<<vec[nums[i]];
            }else{
                result = nums[i];
                break;
            }
        }
        return result;
    }
};