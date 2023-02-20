class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[26] = {0};
        for( int i = 0; i < 26; i++){
            cout<<hash1[i]<<endl;
        }
        for( int i = 0;i < s.size();i++){
            // 并不用记住字符a的值，有相对数值即可
            hash1[ s[i]-'a' ]++;
        }
        for ( int i = 0;i < t.size();i++){
            hash1[ t[i]-'a']--;
        }
        // cout<<*hash<<endl;
        for ( int i = 0; i < 26; i++){
            // cout<<i<<endl;
            // cout<<hash1[i]<<endl;
            if ( hash1[i] != 0 ){
                return false;
            }
        }
        return true;

    }
};