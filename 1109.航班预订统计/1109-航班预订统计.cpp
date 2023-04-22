class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+1,0);
        // cout<<" "<<endl;
        for(auto booking:bookings){
            diff[booking[0]-1] += booking[2];
            diff[booking[1]] -= booking[2];
        }
        // for( int i = 0; i < bookings.size();i++){
        //     diff[bookings[i][0] - 1] += bookings[i][2];
        //     diff[bookings[i][1]] -= bookings[i][2];
        // }
        // cout<<"++++++++++ "<<endl;
        for( int i = 1 ;  i < n; i++){
            diff[i] += diff[i-1];
        }
        diff.resize(n);

        return diff;
    }
};