class Solution:
    def addBinary(self, a: str, b: str) -> str:
        # return "{0:b}".format(int(a, 2)+int(b, 2))
        ans = ''
        b = b[::-1]
        a = a[::-1]
        n, carry = max(len(a), len(b)), 0
        for i in range(n):
            carry += int(a[i] == "1") if i < len(a) else 0
            carry += int(b[i] == '1') if i < len(b) else 0
            ans += '1' if (carry % 2) else '0'
            carry //= 2
        if carry:
            ans += '1'
        ans = ans[::-1]
        return ans
