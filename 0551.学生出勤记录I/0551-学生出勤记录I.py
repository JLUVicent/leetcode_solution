from operator import truediv


class Solution:
    def checkRecord(self, s: str) -> bool:
        t = 0
        numl = 0
        numa = 0
        for i in s:
            if i == 'L':
                t += 1
                numl = max(t, numl)
            else:
                t = 0
            if i == 'A':
                numa += 1
        return (numl < 3 and numa < 2)
        # if numl < 3 and numa < 2:
        #     return True
        # return False