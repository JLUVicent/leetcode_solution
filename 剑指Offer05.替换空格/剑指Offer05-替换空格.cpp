class Solution {
public:
    string replaceSpace(string s) {

        // 统计空格出现的次数
        int OldSize = s.size() - 1;
        int count = 0;
        for ( int i = 0; i < s.size(); i++){
            if ( s[i] == ' '){
                count++;
            }
        }
        s.resize(s.size()+2*count);
        
        int NewSize = s.size() - 1;
        for ( int i = OldSize, j = NewSize; i < j ; i-- , j--){
            if (s[i] != ' '){
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