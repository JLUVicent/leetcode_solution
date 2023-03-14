class Solution {
public:

    // 定义结果数组
    vector<vector<int>> result;
    vector<int> path;
    void backtracking( vector<int>& nums, int startIndex ){
        // 开始收获结果
        result.push_back(path); //可以理解为开始就把空集加进去
        // 终止条件
        if( startIndex >= nums.size()) return;

        // 单层逻辑
        for( int i = startIndex; i < nums.size(); i++){
            path.push_back(nums[i]);
            backtracking( nums, i+1);
            path.pop_back();
        }

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtracking( nums,0);
        return result;

    }
};