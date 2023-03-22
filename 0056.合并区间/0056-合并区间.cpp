class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        if( a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // ����
        if( intervals.size() <= 1) return intervals;
        sort( intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for( int i = 1; i < intervals.size(); i++){
            if ( intervals[i][0] <= result.back()[1]){
                // ���ø��������䣬������ֵ��С
                result.back()[1] = max(intervals[i][1],result.back()[1]);              
            }else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};