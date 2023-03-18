class Solution {
public:
    bool canJump(vector<int>& nums) {
        // for( int i = 0; i < nums.size(); i++){
        //     if( i + nums[i] >= nums.size()){
        //         return true;
        //     }
            
        // }
        // return false;
        int cover = 0;
        if( nums.size() == 1) return true;

        for( int i = 0; i <= cover ; i++){
            cover = max( i+nums[i], cover);
            if( cover >= nums.size()-1) return true;
        }
        return false;
    }
};