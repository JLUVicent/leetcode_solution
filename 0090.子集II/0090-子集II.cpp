class Solution {
public:

    // 定义存放结果的全局变量
    vector<int> path;
    vector<vector<int>> result;
    void backtracking( vector<int>& nums,int startIndex,vector<bool>used){
        // 先收获结果
        result.push_back(path);
        if( startIndex >= nums.size()) return;

        // 单层逻辑
        for( int i = startIndex; i < nums.size(); i++){
            if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;  //确定前一个元素是否被使用过
            path.push_back(nums[i]);    //加入元素
            used[i] = true;
            backtracking(nums,i+1,used);
            // 回溯
            path.pop_back();
            used[i] = false;
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // 对数组进行排序
        sort( nums.begin(), nums.end());        //排序
        vector<bool> used(nums.size(),false);   //定义使用数组
        backtracking( nums,0,used);
        return result;
    }
};