class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    void backtracking( int k, int n, int startIndex){
        int sum = 0; 
        if( path.size() == k){
            for( int i = 0; i < path.size(); i++){
                sum+=path[i];
            }
            if( sum == n){
                res.push_back(path);
                return;
            }
        }

        for( int i = startIndex; i <= 9; i++){
            path.push_back(i);
            backtracking( k, n, i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k, n,1);
        return res;
    }
};