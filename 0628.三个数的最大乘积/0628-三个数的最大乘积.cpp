class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //Ĭ�ϴ�С�����������
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};