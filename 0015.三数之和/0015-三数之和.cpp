class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //定义一个二维数组
        vector<vector<int>> result;
        // 将原数组排序
        sort( nums.begin(),nums.end());
        // 开始遍历
        for ( int i = 0; i < nums.size(); i++){
            // 如果第一个元素都>0 直接return
            if ( nums[i] > 0 ){
                return result;
            }
            // 第一个元素去重
            if ( i > 0 && nums[i] == nums[i-1] ) continue;
            // 开始双指针遍历
            int left = i+1;
            int right = nums.size() - 1;
            // 循环揪出来result
            while( left < right ){
                // 总和>0
                if (( nums[i] + nums[left] + nums[right]) > 0){
                    right--;
                }
                // 总和<0
                else if (( nums[i] + nums[left] + nums[right]) < 0){
                    left++;
                }
                // 揪出元素
                else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                
                    // 第三个元素去重
                    while (left < right && nums[right]==nums[right-1]){
                        right--;
                    }
                    // 第二个元素去重
                    while (left < right && nums[left]==nums[left+1]){
                        left++;
                    }
                    //找到答案移动双指针
                    left++;
                    right--;               
            }
            }
        }
        return result;

    }
};