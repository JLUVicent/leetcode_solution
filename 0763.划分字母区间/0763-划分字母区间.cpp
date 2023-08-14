class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> vec(26,0);
        for( int i = 0; i < s.size(); i++){
            vec[s[i] - 'a'] = i;
        }

        int left = 0, right = 0;
        vector<int> res;
        for( int i = 0; i < s.size(); i++){
            right = max( right,vec[s[i] - 'a']);
            if( i == right){
                
                res.push_back(right-left + 1);
                left = i+1;
            }
        }
        return res;

    }
};