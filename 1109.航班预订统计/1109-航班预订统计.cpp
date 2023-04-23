class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        //×ó±ÕÓÒ±Õ
        vector<int> diff(n+1,0);
        for( auto booking:bookings){
            diff[booking[0] - 1] += booking[2];
            diff[booking[1] ] -= booking[2];
        }
        for( int i = 1; i < diff.size(); i++){
            diff[i] = diff[i] + diff[i-1];
        }

        diff.resize(n);
        return diff;


    }
};