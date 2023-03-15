class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& nums, vector<bool> used){
        // 终止条件
        if( path.size() == nums.size()){
            result.push_back(path);
            return;
        }

        // 单层逻辑
        for( int i = 0; i < nums.size(); i++){
            // 判断是否使用过
            if( used[i] ) continue;
            path.push_back(nums[i]);
            used[i] = true;     //用过的元素赋1
            backtracking( nums,used);
            path.pop_back();
            used[i] = false;    //回溯
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<bool> used(nums.size(),false);
        backtracking( nums,used);
        return result;

    }
};