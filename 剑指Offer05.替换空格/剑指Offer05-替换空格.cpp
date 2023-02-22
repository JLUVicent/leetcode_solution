class Solution {
public:
    string replaceSpace(string s) {
        // ʱ�� O(n)
        // �ռ� O(1)
        int count = 0;
        int OldSize = s.size();
        // ����ԭ�ַ����пո������
        for ( int i = 0; i < s.size() ; i++){
            if ( s[i] == ' ' ){
                count++;
            }
        }
        // ����������
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