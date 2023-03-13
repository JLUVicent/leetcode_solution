class Solution {
public:

    // 全局变量存放结果
    vector<int> path;
    vector<vector<int>> result;

    // 确定返回值和参数
    void backtracking(vector<int>& candidates,int target,int sum, int startIndex){
        // 确定终止条件
        if( sum > target) return;
        if( sum == target ){
            result.push_back(path);
            return ;
        }

        // 确定单层递归逻辑
        for( int i = startIndex; i < candidates.size() && sum+candidates[i]<=target; i++){
            // 保存结果
            path.push_back(candidates[i]);
            sum += candidates[i];
            // 递归
            backtracking(candidates,target,sum, i);
            //回溯
            path.pop_back();
            sum -= candidates[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        int startIndex = 0;
        sort(candidates.begin(),candidates.end());  //剪枝需要排序
        backtracking(candidates,target,sum,startIndex);
        return result;
        
    }
};