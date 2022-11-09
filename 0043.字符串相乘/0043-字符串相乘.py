class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        num1, num2 = num1[::-1], num2[::-1]
        sum = 0
        for i in range(len(num1)):
            for j in range(len(num2)):
                sum += (10**i)*int(num1[i])*(10**j)*int(num2[j])
        return str(sum)