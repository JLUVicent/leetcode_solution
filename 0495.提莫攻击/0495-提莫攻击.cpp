class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int expired=0;
        int n=timeSeries.size();
        for (int i=0;i<n;i++){
            if(timeSeries[i]>=expired){
                ans+=duration;
            }
            else{
                ans+=timeSeries[i]+duration-expired;
            }
        expired=timeSeries[i]+duration;
        }
        return ans;
    }
};