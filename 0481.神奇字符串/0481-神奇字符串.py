class Solution:
    def magicalString(self, n: int) -> int:
        s = [1, 2, 2]
        i = 2
        while len(s) < n:
            # ^Òì»ò²Ù×÷
            s += [s[-1] ^ 3]*s[i]
            i += 1
        return s[:n].count(1)
        # if n < 4:
        #     return 1
        # s = ['']*n
        # s[:3] = '122'
        # res = 1
        # i, j = 2, 3
        # while j < n:
        #     size = int(s[i])
        #     num = 3-int(s[j-1])
        #     while size and j < n:
        #         s[j] = str(num)
        #         if num == 1:
        #             res += 1
        #         j += 1
        #         size -= 1
        #     i += 1
        # return res