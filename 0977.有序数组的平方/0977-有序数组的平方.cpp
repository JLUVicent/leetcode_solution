#include <algorithm>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // ˫ָ�뷨
        // C++��������������ע������
        vector<int> result(nums.size(), 0);
        int k = nums.size() - 1;
        for( int i = 0 , j = nums.size()-1; i <= j; ){
            if ( nums[i]*nums[i] > nums[j]*nums[j] ){
                result[k--] = nums[i]*nums[i];
                i++;
            }
            else{
                result[k--] = nums[j]*nums[j];
                j--;
            }
        }
        return result;

        // // ��������
        // for ( int i = 0; i < nums.size(); i++){
        //     nums[i] *= nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

    }
};