class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& nums, vector<bool> used){
        // 确定终止条件
        if( path.size() == nums.size()){
            result.push_back( path );
            return;
        }
        for ( int i = 0; i < nums.size(); i++){
            if(( i > 0 && nums[i] == nums[i-1] && !used[i-1]) || used[i]) continue;   //去重
            // if( used[i] ) continue;
            path.push_back(nums[i]);
            used[i] = true;
            backtracking( nums,used );
            path.pop_back();    //回溯
            used[i] = false;//回溯
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());  //需要先对数组进行排序
        vector<bool> used(nums.size(),false);
        backtracking( nums,used);
        return result;

    }
};