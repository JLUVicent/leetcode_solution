class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // ʱ�䣺O(logn)
        // �ռ䣺O(n)
        int left = 0;
        int right = nums.size()-1;
        vector<int> result(nums.size(),0);
        int k = nums.size()-1;
        while( left <= right){
            if( nums[left]*nums[left] > nums[right]*nums[right]){
                result[k--]=nums[left]*nums[left];
                left++;
            }else{
                result[k--]=(nums[right]*nums[right]);
                right--;
            }
        }
        // sort();
        // reverse(result.begin(),result.end());
        return result;

    }
};