class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //默认从小到大进行排序
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};