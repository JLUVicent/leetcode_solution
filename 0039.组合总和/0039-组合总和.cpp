class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    //1.确定参数和返回值
    void backtracking(vector<int>& candidates,int target ,int startIndex){
        // if( sum > target) return;
        int sum = 0;
        for( int i = 0;i < path.size();i++){
            sum+=path[i];
        }
        if( sum == target){
            res.push_back(path);
            return;
        }
        for( int i = startIndex;i < candidates.size() && sum+candidates[i] <= target;i++){
            path.push_back(candidates[i]);
            // sum+=candidates[i];
            backtracking(candidates,target,i);
            path.pop_back();
            // sum-=candidates[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtracking(candidates,target,0);
        return res;
    }
};