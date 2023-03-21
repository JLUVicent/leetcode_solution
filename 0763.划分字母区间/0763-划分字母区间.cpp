class Solution {
public:
    vector<int> partitionLabels(string s) {
        // 哈希表记录每个字母的最远距离
        int hash[27] = {0};
        // 注意最远距离的代码技巧
        for( int i = 0; i < s.size(); i++){
            hash[s[i]-'a'] = i;
        }
        //定义每个数组的左右边界
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