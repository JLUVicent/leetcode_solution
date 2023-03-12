class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // 小孩和饼干从小到大排序
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int result = 0;
        int index = s.size()-1;

        //开始小孩从大到小遍历，取局部最优
        for( int i = g.size() - 1 ; i >= 0 ; i--){
            if ( index >= 0 && s[index] >= g[i]){
                result++;
                index--;
            }
        }
        return result;

    }
};