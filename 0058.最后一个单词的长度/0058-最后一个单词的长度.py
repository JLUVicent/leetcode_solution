class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # s = s.split(' ')
        # re_list = []
        # for i in s:
        #     if i != '':
        #         re_list.append(i)
        # return len(re_list[-1])
        n = len(s)
        ans = 0
        for i in range(n-1, -1, -1):
            if s[i] != ' ':
                ans += 1
            else:
                if ans:
                    return ans
        return ans
