class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // С���ͱ��ɴ�С��������
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int result = 0;
        int index = s.size()-1;

        //��ʼС���Ӵ�С������ȡ�ֲ�����
        for( int i = g.size() - 1 ; i >= 0 ; i--){
            if ( index >= 0 && s[index] >= g[i]){
                result++;
                index--;
            }
        }
        return result;

    }
};