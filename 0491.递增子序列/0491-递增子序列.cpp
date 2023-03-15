class Solution {
public:

    // 判断是否为递增序列
    // bool isIncrease(vector<int>& path){
    //     if( path.size() <= 1) return false;
    //     for( int i = 1; i < path.size(); i++){
    //         if( path[i] < path[i-1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    //全局变量
    vector<int> path;
    vector<vector<int>> result;
    // // 返回值和参数
    // void backtracking(vector<int>& nums,int startIndex){

    //     if(isIncrease(path)) result.push_back(path);
    //     unordered_set<int> uset;        //对于每一层递归都会重新进行记录 注意这个集合是在每层递归之前
    //     for( int i = startIndex; i < nums.size(); i++){
    //         // 收集结果
    //         // 定义集合
            
    //         // if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
    //         if( uset.find(nums[i]) != uset.end()) continue;
    //         uset.insert(nums[i]);
    //         path.push_back(nums[i]);
    //         backtracking( nums, i+1);   //递归
    //         path.pop_back();    //回溯
    //     }  
    // }

    void backtracking( vector<int>& nums, int startIndex){
        if ( path.size() > 1){
            result.push_back(path);
        }
        unordered_set<int> uset;
        for( int i = startIndex; i < nums.size(); i++){
            // 去重
            if(( !path.empty() && nums[i] < path.back()) || uset.find(nums[i]) != uset.end()){ continue; }

            uset.insert(nums[i]);   //添加用过的元素
            path.push_back(nums[i]);
            backtracking( nums, i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking( nums,0);
        return result;

    }
};