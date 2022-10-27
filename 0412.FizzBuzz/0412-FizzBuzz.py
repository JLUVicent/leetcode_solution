class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = [0]*n
        for i in range(n):
            t = i+1
            if t % 3 == 0 and t % 5 == 0:
                answer[i] = "FizzBuzz"
            elif t % 3 == 0 and t % 5 != 0:
                answer[i] = "Fizz"
            elif t % 3 != 0 and t % 5 == 0:
                answer[i] = "Buzz"
            else:
                answer[i] = str(t)
        return answer