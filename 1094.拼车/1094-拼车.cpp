class Solution {
public:
    // static const int n = 1001;
    // int diff[n];
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n = 1001;
        vector<int> diff(n);
        for( int i = 0; i < trips.size();i++){
            diff[trips[i][1]] += trips[i][0];
            diff[trips[i][2]] -= trips[i][0];
        }
        for( int i = 0; i < n; i++){
            if(i != 0) diff[i] += diff[i-1];
            if( diff[i] > capacity) return false;
        }
        return true;

    }
};