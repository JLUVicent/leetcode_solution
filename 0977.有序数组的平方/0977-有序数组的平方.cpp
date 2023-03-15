class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> result(nums.size(),0);
        int i = nums.size()-1;
        while( left <= right){
            if( nums[left]*nums[left] >= nums[right] * nums[right]){ //×ó±ß´óÓÚÓÒ±ß
                result[i] = nums[left]*nums[left];
                i--;
                left++;
            }
            else if( nums[left]*nums[left] < nums[right] * nums[right] ){
                result[i] = nums[right]*nums[right];
                i--;
                right--;
            }
        }
        return result;


    }
};