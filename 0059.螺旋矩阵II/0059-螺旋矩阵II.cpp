class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // 定义二维数组
        vector<vector<int>> num(n,vector<int>(n,0));
        int startx = 0;
        int starty = 0;
        int loop = n / 2;
        int offset = 1;
        int count = 1;
        int mid = n/2;
        int i,j;
        while ( loop-- ){
            for (  j = starty; j < n - offset; j++){
                num[startx][j] = count++;
            }
            for (  i = startx; i<n-offset;i++){
                num[i][j] = count++;
            }
            for (;j > starty;j--){
                num[i][j] = count++;
            }
            for (;i > startx;i--){
                num[i][j] = count++;
            }
            startx++;
            starty++;
            offset++;
        }
        if ( n % 2 == 1){
            num[mid][mid]=count;
            // num[i][j]=count;

        }
        return num;
        // return {i,j};

    }
};