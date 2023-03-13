class Solution {
public:

    // 存储结果
    vector<int> path;   //存储路径
    vector<vector<int>> result;     //存储最终结果
    
    // 确定返回值和参数
    void backtracking( vector<int>& nums,int target, int sum, int startIndex,vector<bool>& used){
        // 确定终止条件
        if( sum > target ) return ;
        if( sum == target ){
            result.push_back(path);
            return;
        }

        // 确定单层逻辑
        for( int i = startIndex; i < nums.size() && sum+nums[i] <=target; i++){
            // 去重操作
            if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;  //前一个元素没有被用过
            path.push_back(nums[i]);    //添加元素
            sum += nums[i];
            used[i] = true;
            backtracking( nums,target,sum,i+1,used);
            sum -= nums[i];
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<bool> used(candidates.size(),false);
        backtracking( candidates,target,0,0,used);
        return result;

    }
};