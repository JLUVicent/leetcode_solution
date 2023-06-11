class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    void backTracking( vector<int>& candidates,int target,int sum, int startIndex){
        if( sum > target) return;   //如果sum > target直接退出即可
        if( target == sum){
            res.push_back(path);
            return;
        }
        for( int i = startIndex; i < candidates.size() && sum+candidates[i] <= target; i++){
            path.push_back(candidates[i]);
            sum += candidates[i];
            backTracking(candidates,target,sum,i);
            path.pop_back();
            sum -= candidates[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());  //剪枝需要排序
        backTracking(candidates,target,0,0);
        return res;
    }
};