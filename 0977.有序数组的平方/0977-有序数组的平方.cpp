class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int j = nums.size()-1;
        vector<int> res(nums.size());
        while(left <= right){
            if(nums[left] * nums[left] > nums[right]* nums[right]){
                res[j--] = nums[left]*nums[left];
                left++;
            }else if(nums[left]*nums[left] <= nums[right]*nums[right]){
                res[j--] = nums[right]*nums[right];
                right--;
            }
        }
        return res;
    }
};