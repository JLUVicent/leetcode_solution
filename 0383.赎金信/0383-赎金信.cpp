class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // 数组作为哈希表
        // int record[26]={0};
        // for( int i = 0; i < ransomNote.size();i++){
        //     record[ransomNote[i]-'a']++;
        //     }
        // for (int i = 0; i < magazine.size(); i++){
        //     if( record[magazine[i]-'a'] != 0){
        //        record[magazine[i]-'a']--; 

        //     }
        // }
        // int total = 0;
        // for ( int i = 0; i<26;i++){
        //     if (record[i]==0){
        //         total++;
        //     }
        // }
        // if (total == 26){
        //     return true;
        // }
        // return false;

        //数组作为哈西表
        int record[26] = {0};
        if ( ransomNote.size() > magazine.size() ){
            return false;
        }
        for (int i = 0; i < magazine.size(); i++){
            record[magazine[i]-'a']++;
        }
        for( int i = 0; i < ransomNote.size();i++){
            record[ransomNote[i]-'a']--;
            if (record[ransomNote[i]-'a'] < 0 ){
                return false;
            }
        }
        return true;
        
                
    }
};