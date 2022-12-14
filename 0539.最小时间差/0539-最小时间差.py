def getMinutes(t: str) -> int:
    return((ord(t[0])-ord('0'))*10+ord(t[1])-ord('0'))*60+(ord(t[3])-ord('0'))*10+ord(t[4])-ord('0')


class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        timePoints.sort()
        ans = float('inf')
        t0Minutes = getMinutes(timePoints[0])
        preMinutest = t0Minutes
        for i in range(1, len(timePoints)):
            minutes = getMinutes(timePoints[i])
            ans = min(ans, minutes-preMinutest)
            preMinutest = minutes
        ans = min(ans, t0Minutes+1440-preMinutest)  # 首尾时间的时间差
        return ans