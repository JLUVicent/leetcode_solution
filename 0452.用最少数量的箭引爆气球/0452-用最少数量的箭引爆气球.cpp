class Solution {
public:

    static bool cmp(vector<int>& a,vector<int>& b){
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int res = 1;

        for( int i = 0; i < points.size()-1; i++ ){
            if( points[i][1] >= points[i+1][0]){
                points[i+1][1] = min(points[i+1][1],points[i][1]);
            }else{
                res += 1;
            }
        }
        return res;

    }
};