class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};
        // if( nums.size() )
        if( nums.size() == 1 && nums[0] == target) return {0,0};
        int left = 0;
        int right = nums.size()-1;
        while( left < right ){
            if( nums[left] != target){
                left++;
            }
            if( nums[right] != target){
                right--;
            }
            if( nums[left] == target && nums[right] == target){
                return {left,right};
            }
        }
        return {-1,-1};

    }
};