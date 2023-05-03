class Solution {
public:
    string replaceSpace(string s) {
        //先计算有多少个空格，也就是还原后的s总长度
        int count = 0;
        int oldSize = s.size();
        for( char c:s){
            if(c == ' ') count++;
        }
        s.resize(s.size()+2*count);
        // for( int )
        int newSize = s.size();
        
        int flag = 0;
        for( int i = oldSize-1,j = newSize-1; i < j; i--,j--){
            if(s[i] != ' '){
                s[j] = s[i];
            }else{
                s[j--] = '0';
                s[j--] = '2';
                s[j] = '%';
                // j-=2;
            }
        }
        return s;
    }
};