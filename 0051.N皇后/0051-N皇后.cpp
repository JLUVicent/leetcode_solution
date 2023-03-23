class Solution {
public:

    //�жϺϷ����򣺲���ͬ�У�����ͬ�У�����ͬб��
    bool isVaild( int row, int col, vector<string>& chessboard, int n){
        //���ü��ͬ�е�Ԫ�أ����ڵݹ����Ѿ�ȥ��
        //�����
        for( int i = 0; i < row; i++){  //��֦���� ֻ��鵽���У�������û��Ԫ��
            if( chessboard[i][col] == 'Q') return false;
        }

        //���45�Ƚ�
        for( int i = row-1, j = col-1; i>=0&&j>=0; i--,j--){
            if( chessboard[i][j] == 'Q')    return false;
        }
        //���135�Ƚ�
        for( int i = row-1, j = col+1; i>=0&&j <n; i--,j++){
            if(chessboard[i][j] == 'Q')     return false;
        }
        return true;
    }

    vector<vector<string>> result;
    // �ݹ�
    void backtracking(vector<string>&chessboard, int n, int row){
        if( row == n){
            result.push_back(chessboard);
            return;
        }
        for( int col = 0; col < n; col++){
            if( isVaild( row,col,chessboard,n)){
                chessboard[row][col] = 'Q';
                backtracking( chessboard,n,row+1);
                chessboard[row][col] = '.'; //���ݣ����ػʺ�
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