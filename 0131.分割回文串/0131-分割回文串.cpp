class Solution {
public:

    // 判断回文串
    bool isPalinrome(const string& s,int startIndex, int i){
        int left = startIndex;
        int right = i;
        while( left <= right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    // 递归函数
    vector<string> path;
    vector<vector<string>> result;
    void backTracking(const string&s,int startIndex){
        // 确定终止条件
        if( startIndex >= s.size() ){   //如果切割点到了size()这，就加入，判断回文逻辑放下面
            result.push_back(path);
            return;
        }

        for( int i = startIndex; i < s.size(); i++){
            if( isPalinrome(s,startIndex,i) ){  //判断是否回文
                string str = s.substr(startIndex , i - startIndex + 1); // 开始startIndex, 第二个参数是截取的数量
                path.push_back(str);
            }
            else{ continue;}
            backTracking(s,i+1);
            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        backTracking( s,0);
        return result;
    }
};