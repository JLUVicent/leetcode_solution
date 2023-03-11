class Solution {
public:

    // 定义全局变量 letterMap 数组作为哈希映射
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

    // 定义全局变量存储结果
    string s;   //存储每个结果
    vector<string> result;  //存储最终结果
    void backTracking( const string digits, int index){
        // 终止条件 索引要等于数组大小，如果等于size()-1的时候下面还要继续执行
        if ( index == digits.size() ){
            result.push_back(s);    //收集结果
            return ;
        }
        // 将字符串转换为整数
        int digit = digits[index] - '0';
        // 将digit映射到letterMap中
        string letter = letterMap[digit];
        // 单层递归逻辑
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