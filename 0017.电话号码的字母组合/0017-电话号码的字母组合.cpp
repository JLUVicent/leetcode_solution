class Solution {
public:

    // ����ȫ�ֱ��� letterMap ������Ϊ��ϣӳ��
    const string letterMap[10] = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };

    // ����ȫ�ֱ����洢���
    string s;   //�洢ÿ�����
    vector<string> result;  //�洢���ս��
    void backTracking( const string digits, int index){
        // ��ֹ���� ����Ҫ���������С���������size()-1��ʱ�����滹Ҫ����ִ��
        if ( index == digits.size() ){
            result.push_back(s);    //�ռ����
            return ;
        }
        // ���ַ���ת��Ϊ����
        int digit = digits[index] - '0';
        // ��digitӳ�䵽letterMap��
        string letter = letterMap[digit];
        // ����ݹ��߼�
        for( int i = 0; i < letter.size(); i++){
            s.push_back(letter[i]);
            backTracking( digits, index+1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if( digits == "") return {};
        int index = 0;
        backTracking( digits,index);
        return result;
    }
};