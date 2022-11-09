

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        num1, num2 = num1[::-1], num2[::-1]
        n, carry = max(len(num1), len(num2)), 0
        ans = ''

        for i in range(n):
            a = int(num1[i]) if i < len(num1) else 0
            b = int(num2[i]) if i < len(num2) else 0
            sum_ = (a+b+carry) % 10
            ans += str(sum_)
            carry = (a+b+carry)//10
        if carry:
            ans += '1'
        return ans[::-1]

