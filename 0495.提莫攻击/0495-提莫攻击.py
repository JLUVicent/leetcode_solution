class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        ans,not_du=0,0
        for i in range(len(timeSeries)):
            if timeSeries[i]>=not_du:
                ans+=duration
            else:
                ans+=timeSeries[i]+duration-not_du
            not_du=timeSeries[i]+duration
        return ans