class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for( int i = 0; i < nums.size(); i++){
            //剪枝操作
            if( nums[i] > target && nums[i] >= 0 ) break;
            //去重操作
            if( i > 0 && nums[i] == nums[i-1]) continue;
            
            for( int j = i+1; j < nums.size(); j++){
                //去重操作
                if( nums[i] + nums[j] > target && nums[i]+nums[j]>=0) break;
                //去重
                if( j > i+1 && nums[j] == nums[j-1]) continue;
                //双指针遍历
                int left = j+1;
                int right = nums.size()-1;
                while(left < right){
                    if((long)nums[i]+nums[j]+nums[left]+nums[right] > target){
                        right--;
                    }else if((long)nums[i]+nums[j]+nums[left]+nums[right] < target){
                        left++;
                    }else{
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while( left < right && nums[right] == nums[right-1]){
                            right--;
                        }
                        while( left < right && nums[left] == nums[left+1]){
                            left++;
                        }
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};