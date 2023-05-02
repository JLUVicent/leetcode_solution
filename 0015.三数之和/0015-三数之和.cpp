class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for( int i = 0; i < nums.size(); i++){
            //第一个元素大于0，直接return 剪枝
            if( nums[i] > 0) return result;
            //相邻相同元素去重
            if( i > 0 && nums[i] == nums[i-1]) continue;
            //双指针遍历
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                if( nums[i]+nums[left]+nums[right] > 0){
                    right--;
                }else if(nums[i]+nums[left]+nums[right] < 0){
                    left++;
                }else{
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right&& nums[right]==nums[right-1]){
                        right--;
                    }
                    while(left<right&&nums[left] == nums[left+1]){
                        left++;
                    }
                    //找到答案之后移动双指针
                    left++;
                    right--;
                }
            }

        }
        return result;
    }
};