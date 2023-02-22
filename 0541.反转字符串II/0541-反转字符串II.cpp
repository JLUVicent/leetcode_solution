class Solution {
public:
    void reverse( string& s , int start, int end){
        for ( int i = start, j = end ; i< j; i++,j--){
            swap (s[i],s[j]);
        }
    }

    string reverseStr(string s, int k) {
        // ¶¨Òåº¯Êı
        for( int i = 0; i < s.size(); i += 2*k){
            if ( i + k <= s.size()){
                // reverse( s.begin() + i , s.begin()+i+k );
                reverse( s, i, i+k-1);
            }
            else{
                // reverse (s.begin() + i , s.end());
                reverse( s, i, s.size()-1);
            }
        }
        return s;
    }
};