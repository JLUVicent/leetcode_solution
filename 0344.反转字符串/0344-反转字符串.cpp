class Solution {
public:
    void reverse(vector<char>& s){
        for( int i = 0, j = s.size()-1; i < j; i++,j--){
            swap( s[i], s[j]);
        }
    }
    void reverseString(vector<char>& s) {
        // ˫ָ�뷨
        // int left = 0;
        // int right = s.size()-1;
        // while( left < right ){
        //     char tmp = s[left];
        //     s[left] = s[right];
        //     s[right] = tmp;
        //     left++;
        //     right--;
        // }
        reverse( s );

        
    }
};