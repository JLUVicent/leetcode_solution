class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        # fre = collections.Counter(s)
        # for i in t:
        #     if i not in fre:
        #         return i
        s_t = s+t
        fre = collections.Counter(s_t)
        for key, value in fre.items():
            if value % 2 != 0:
                return key