class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    // void backtracking( int k,int n,int startIndex){
    //     // 终止条件
    //     int sum = 0;
    //     if( path.size() == k ){
    //         for ( int i = 0; i < k; i++){
    //             sum+= path[i];
    //         }
    //         if( sum == n ){
    //             result.push_back(path);
    //             return;
    //         }
    //     }
    //     // 单层逻辑
    //     for ( int i = startIndex; i <= 9; i++){
    //         path.push_back( i );
    //         backtracking( k , n , i + 1 );
    //         path.pop_back();
    //     }
    // }

    void backtracking( int k , int n , int sum , int startIndex){
        //终止条件
        if ( sum > n ) return;
        if ( path.size() == k ){
            if ( sum == n ){
                result.push_back(path);
            }
        }
        //单层逻辑
        for( int i = startIndex; i <= 9 - ( k - path.size()) + 1; i++){
            sum +=i;    //给sum赋值
            path.push_back(i);  //保存结果
            backtracking ( k , n, sum , i+1 );
            path.pop_back(); //回溯
            sum-=i; //回溯
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        int i = 1;
        int sum= 0 ;
        backtracking( k , n ,sum ,i );
        return result;
    }
};