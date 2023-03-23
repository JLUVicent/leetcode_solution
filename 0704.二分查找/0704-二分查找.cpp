class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;  //×ó±ÕÓÒ±Õ
        while( left <= right ){
            int mid = left+(right-left)/2;  //·ÀÖ¹Òç³ö
            if( nums[mid] > target){
                right = mid-1;
            }
            else if( nums[mid] < target){
                left = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;

    }
};