class Solution {
public:
    string replaceSpace(string s) {
        // 时间 O(n)
        // 空间 O(1)
        int count = 0;
        int OldSize = s.size();
        // 计算原字符串中空格的数量
        for ( int i = 0; i < s.size() ; i++){
            if ( s[i] == ' ' ){
                count++;
            }
        }
        // 扩充新数组
        s.resize( s.size() + count*2 );

        int NewSize = s.size();

        for ( int i = OldSize -1 , j = NewSize - 1; i < j ;  i--,j--){

            if ( s[i] != ' '){
                s[j] = s[i];
            }
            else{
                s[j] = '0';
                s[j-1] = '2';
                s[j-2] = '%';
                j -=2;
            }
        }
        return s;
    }
};