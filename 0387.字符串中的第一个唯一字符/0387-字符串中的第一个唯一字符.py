class Solution:
    def firstUniqChar(self, s: str) -> int:
        # hashmap = {}
        # for i in range(len(s)):
        #     if s[i] not in hashmap.keys():
        #         hashmap[s[i]] = 1
        #     else:
        #         hashmap[s[i]] += 1
        # for key, value in hashmap.items():
        #     if value == 1:
        #         str1 = key
        #         break
        #     else:
        #         str1 = ''
        # for j in range(len(s)):
        #     if s[j] == str1:
        #         return j
        # return -1
        fre = collections.Counter(s)
        for i, ch in enumerate(s):
            if fre[ch] == 1:
                return i
        return -1
