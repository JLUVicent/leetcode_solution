class Solution {
public:
    int lengthOfLastWord(string s) {
        // int flag = 0;
        // int result = 0;
        // for( int i = s.size()-1; i >=0 ; i--){
        //     if( flag == 1 && s[i] == ' '){
        //         return result;
        //     }
        //     if( s[i] != ' ' ){
        //         flag = 1;
        //         result++;
        //     }
        // }
        // return result;
        int index = s.size()-1;
        while( s[index] == ' '){
            index--;
        }
        int result = 0;
        while(index >= 0 && s[index] != ' '){
            result++;
            index--;
        }
        return result;

    }
};