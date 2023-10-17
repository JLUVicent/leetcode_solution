class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int startx(0),starty(0);
        int offset = 1;
        int loop = n/2;
        int i,j;
        int count = 1;
        while(loop--){
            for( j = starty; j < n-offset; j++){
                res[startx][j] = count++;
            }
            for( i = startx; i < n - offset; i++){
                res[i][j] = count++;
            }
            for( ; j > starty; j--){
                res[i][j] = count++;
            }
            for( ; i > startx; i--){
                res[i][j] = count++;
            }
            startx++;
            starty++;
            offset++;
        }
        if(n%2 != 0){
            res[n/2][n/2] = count;
        }
        return res;

    }
};