class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int flag = s.size();   //�����־λ
        for( int i =s.size()-1 ; i > 0; i--){
            if( s[i] < s[i-1]){
                flag = i;
                //ǰһ����Ҫ-1
                s[i-1]--;
            }
        }
        for( int i = flag; i < s.size(); i++){
            s[i] = '9';
        }
        return stoi(s);

    }
};