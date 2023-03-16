class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    // int sum = 0;
    void backtracking(int k , int n,int sum,int startIndex){
        // ÖÕÖ¹Ìõ¼ş
        // int sum = 0;
        // for( int i = 0 ; i < path.size(); i++){
        //     sum += path[i];
        // }
        if( sum > n ) return;
        if( path.size() == k){
            if( sum == n ){
            result.push_back(path);
            // sum = 0;
            return ;
        }
        }


        for( int i = startIndex; i <= 9 - (k-path.size())+1 ; i++){
            sum += i;

            path.push_back(i);
            // sum += i;
            backtracking( k , n ,sum, i+1);
            sum -= i;
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking( k , n , 0,1);
        return result;
    }
};