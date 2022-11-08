from re import T


class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        n = len(s)
        result = ""
        for dic in dictionary:
            m = len(dic)
            a, b = 0, 0
            while a < n and b < m:
                if s[a] == dic[b]:
                    b += 1
                a += 1
            if b == m:
                if m > len(result) or (m == len(result) and dic < result):
                    result = dic
                # if len(dic) > len(result[0]):
                #     result = []
                #     result[0] = dic
                # elif len(dic) == len(result[0]):
                #     result.append(dic)

        # return "" if len(result) == 0 else min(result)
        return result
