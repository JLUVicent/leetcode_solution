class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // �ȴ�С��������
        sort( g.begin(),g.end());
        sort( s.begin(),s.end());
        int res = 0;
        int index = s.size()-1;
        for(int  i = g.size()-1; i >= 0; i--){  //������θ�ڣ������ж��Ƿ�������
            if( index >= 0 && s[index] >= g[i]){
                index--;
                res++;
            }
        }
        return res;

    }
};