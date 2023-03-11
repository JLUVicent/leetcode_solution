class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    // void backtracking( int k,int n,int startIndex){
    //     // ��ֹ����
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
    //     // �����߼�
    //     for ( int i = startIndex; i <= 9; i++){
    //         path.push_back( i );
    //         backtracking( k , n , i + 1 );
    //         path.pop_back();
    //     }
    // }

    void backtracking( int k , int n , int sum , int startIndex){
        //��ֹ����
        if ( sum > n ) return;
        if ( path.size() == k ){
            if ( sum == n ){
                result.push_back(path);
            }
        }
        //�����߼�
        for( int i = startIndex; i <= 9 - ( k - path.size()) + 1; i++){
            sum +=i;    //��sum��ֵ
            path.push_back(i);  //������
            backtracking ( k , n, sum , i+1 );
            path.pop_back(); //����
            sum-=i; //����
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        int i = 1;
        int sum= 0 ;
        backtracking( k , n ,sum ,i );
        return result;
    }
};