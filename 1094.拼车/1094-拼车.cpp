class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001,0);
        for(auto trip:trips){
            diff[trip[1]] += trip[0];
            diff[trip[2]] -= trip[0];
        }
        for( int i = 0; i < diff.size(); i++){
            if( i != 0 ) diff[i] = diff[i]+diff[i-1];
            if(diff[i] > capacity) return false;
        }
        return true;

    }
};