class Solution {
public:
    vector<int> partitionLabels(string s) {
        // ��ϣ���¼ÿ����ĸ����Զ����
        int hash[27] = {0};
        // ע����Զ����Ĵ��뼼��
        for( int i = 0; i < s.size(); i++){
            hash[s[i]-'a'] = i;
        }
        //����ÿ����������ұ߽�
        int left = 0;
        int right = 0;
        vector<int> result;
        for( int i = 0; i < s.size(); i++){
            right = max(right,hash[s[i]-'a']);
            if( i == right){
                result.push_back(right-left+1);
                left = i + 1;
            }
        }
        return result;
    }
};