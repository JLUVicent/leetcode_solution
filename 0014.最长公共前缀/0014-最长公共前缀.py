

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        # ×İÏòÉ¨Ãè
        # if not strs:
        #     return ""
        # length, count = len(strs[0]), len(strs)
        # for i in range(length):
        #     c = strs[0][i]
        #     if any(i == len(strs[j]) or strs[j][i] != c for j in range(1, count)):
        #         return strs[0][:i]
        # return strs[0]
        # ºáÏòÉ¨Ãè
        if not strs:
            return ""
        prefix, count = strs[0], len(strs)
        for i in range(1, count):
            prefix = self.lcp(prefix, strs[i])
            if not prefix:
                break
        return prefix

    def lcp(self, str1, str2):
        length, index = min(len(str1), len(str2)), 0
        while index < length and str1[index] == str2[index]:
            index += 1
        return str1[:index]

