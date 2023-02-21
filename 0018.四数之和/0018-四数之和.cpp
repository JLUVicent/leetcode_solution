class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // 创建二维数组
        vector<vector<int>> result;
        // 对原数组进行排序
        sort( nums.begin(), nums.end());
        // 第一层遍历 第一个元素
        for ( int i = 0; i < nums.size(); i++){
            // 剪枝操作
            if ( nums[i] > target && nums[i] >= 0) break;
            // 去重操作
            if ( i > 0 && nums[i] == nums[i-1] ) continue;
            // 第二层遍历 第二个元素
            for ( int t = i+1; t < nums.size(); t++){   //注意细节，这里是t++ 开始写的i++
                // 剪枝操作
                if ( nums[i]+nums[t] > target && nums[i]+nums[t] >= 0) break;
                // 去重操作
                if ( t > i+1 && nums[t] == nums[t-1]) continue;
                int left = t+1;
                int right = nums.size()-1;
                while( left < right){
                    if ((long) nums[i] + nums[t] + nums[left] + nums[right] > target) right--;
                    else if ((long) nums[i] + nums[t] + nums[left] + nums[right] < target) left++;
                    else{
                        result.push_back(vector<int>{nums[i] , nums[t] , nums[left] , nums[right]});
                        while( left < right && nums[right]==nums[right-1]) right--;
                        while( left < right && nums[left]==nums[left+1]) left++;
                        // 找到答案回收双指针
                        left++;
                        right--;
                    }

                }

            }
        }
        return result;

    }
};