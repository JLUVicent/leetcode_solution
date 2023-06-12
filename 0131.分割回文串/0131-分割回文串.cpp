class Solution {
public:

    // ÅÐ¶Ï»ØÎÄ´®
    bool isPalinrome( const string& s, int startIndex, int i){
        int left = startIndex;
        int right = i;
        while( left <= right){
            if( s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    // µÝ¹éº¯Êý
    vector<string> path;
    vector<vector<string>> res;
    void backTracking(const string& s,int startIndex){
        if( startIndex >= s.size()){
            res.push_back(path);
            return;
        }
        for( int i = startIndex; i < s.size(); i++){
            if(isPalinrome(s,startIndex,i)){
                string str = s.substr(startIndex,i-startIndex+1);  
                path.push_back(str);
            }
            else{continue;}
            backTracking(s, i+1);
            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        backTracking(s,0);
        return res;

    }
};