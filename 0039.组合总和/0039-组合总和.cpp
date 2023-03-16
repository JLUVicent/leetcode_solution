class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& candidates, int target,int sum,int startIndex){
        // if( sum > target ) return;
        if( sum == target ){
            result.push_back( path );
            return ;
        }

        for( int i = startIndex; i < candidates.size() && sum + candidates[i] <= target; i++){
            path.push_back(candidates[i]);
            sum += candidates[i];
            backtracking( candidates, target , sum,i);
            sum -= candidates[i];
            path.pop_back();
        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // ÅÅĞò
        sort( candidates.begin(),candidates.end());
        backtracking( candidates, target, 0,0);
        return result;
        
    }
};