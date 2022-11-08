

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        for i in range(n-1, -1, -1):
            if digits[i] != 9:
                digits[i] += 1
                for j in range(i+1, n):
                    digits[j] = 0
                return digits
        return [1]+[0]*n
        # num = 0
        # res = [0]*(len(digits)+1)
        # for i in range(len(digits)-1, -1, -1):
        #     if digits[i] == 9:
        #         num += 1
        #     else:
        #         break
        # if num == len(digits):
        #     res[0] = 1
        #     return res
        # if num == 0:
        #     digits[-1] += 1
        # else:
        #     for i in range(len(digits)-num, len(digits)):
        #         digits[i] = 0
        #     digits[len(digits)-num-1] += 1
        # return digits

