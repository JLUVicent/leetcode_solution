

class Solution:
    def countSegments(self, s: str) -> int:
        # if not s or all(i == ' ' for i in s):
        #     return 0
        # s = s.split(' ')
        # num = 0
        # for i in s:
        #     if i != '':
        #         num += 1
        # return num
        count_seg = 0
        for i in range(len(s)):
            if((i == 0 or s[i-1] == ' ') and s[i] != ' '):
                count_seg += 1
        return count_seg