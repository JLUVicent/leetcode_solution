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

    string s;
    vector<string> result;
    void backtracking(const string& digits,int index){
        // ȷ����ֹ����
        if( index == digits.size()){
            result.push_back(s);
            return ;
        }

        int digit = digits[index]-'0';
        string letter = letterMap[digit];
        for( int i = 0; i < letter.size(); i++){
            s.push_back(letter[i]);
            backtracking( digits, index+1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if( digits.size() == 0) return {};
        backtracking( digits, 0);
        return result;

    }
};