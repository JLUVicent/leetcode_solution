class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    int sum = 0;
    void backTracking(int k, int n, int sum,int startIndex){
        if( path.size() == k){
                if( sum == n){
                res.push_back(path);
                return;
        }
        }


        for( int i = startIndex; i <= 9; i++){
            path.push_back(i);
            sum += i;
            backTracking(k,n,sum,i+1);
            path.pop_back();
            sum -= i;
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backTracking(k,n,0,1);
        return res;
    }
};