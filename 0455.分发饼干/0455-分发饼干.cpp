class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // 先从小到大排序
        sort( g.begin(),g.end());
        sort( s.begin(),s.end());
        int res = 0;
        int index = s.size()-1;
        for(int  i = g.size()-1; i >= 0; i--){  //外层遍历胃口，里面判断是否能满足
            if( index >= 0 && s[index] >= g[i]){
                index--;
                res++;
            }
        }
        return res;

    }
};