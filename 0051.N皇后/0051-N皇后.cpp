class Solution {
public:

    //判断合法规则：不能同行，不能同列，不能同斜线
    bool isVaild( int row, int col, vector<string>& chessboard, int n){
        //不用检查同行的元素，其在递归中已经去掉
        //检查列
        for( int i = 0; i < row; i++){  //剪枝操作 只检查到本行，下面行没有元素
            if( chessboard[i][col] == 'Q') return false;
        }

        //检查45度角
        for( int i = row-1, j = col-1; i>=0&&j>=0; i--,j--){
            if( chessboard[i][j] == 'Q')    return false;
        }
        //检查135度角
        for( int i = row-1, j = col+1; i>=0&&j <n; i--,j++){
            if(chessboard[i][j] == 'Q')     return false;
        }
        return true;
    }

    vector<vector<string>> result;
    // 递归
    void backtracking(vector<string>&chessboard, int n, int row){
        if( row == n){
            result.push_back(chessboard);
            return;
        }
        for( int col = 0; col < n; col++){
            if( isVaild( row,col,chessboard,n)){
                chessboard[row][col] = 'Q';
                backtracking( chessboard,n,row+1);
                chessboard[row][col] = '.'; //回溯，撤回皇后
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        result.clear();
        std::vector<std::string> chessboard(n,std::string(n,'.'));
        backtracking(chessboard,n,0);
        return result;
    }
};