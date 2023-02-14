class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // // 暴力法 时间O(n) 空间O(1)
        // for (int i = 0 ; i < nums.size() ; i++){
        //     if ( nums[i] >= target ){
        //         return i;
        //     }
        
        // }
        // return nums.size();
        // // 二分法解决
        int left = 0 ;
        int right = nums.size() - 1 ;
        while ( left <= right ){
            int middle = left + ( right - left ) / 2 ;
            if ( nums[middle] > target ) {
                right = middle - 1 ;
            }
            else if ( nums[middle] < target ) {
                left = middle + 1 ;
            }
            else{
                return middle;
            }
        }
        return right + 1;
        


    }
};