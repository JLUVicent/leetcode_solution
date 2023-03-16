class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& candidates, int target, int startIndex, vector<bool>used,int sum){
        // if( sum > target) return;
        if( sum == target){
            result.push_back(path);
            return;
        }
        // µ¥²ãÂß¼­
        for( int i = startIndex; i < candidates.size() && sum+candidates[i] <= target; i++){
            if( i > 0 && candidates[i] == candidates[i-1] && !used[i-1]) continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            used[i] = true;
            backtracking( candidates, target, i+1, used,sum);
            sum -= candidates[i];
            path.pop_back();
            used[i] =false;
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool> used( candidates.size(),false);
        sort( candidates.begin(),candidates.end());
        backtracking( candidates, target, 0, used,0);
        return result;

    }
};