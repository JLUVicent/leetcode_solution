

class Solution:
    def compress(self, chars: List[str]) -> int:
        def reverse(left: int, right: int) -> None:
            while left < right:
                chars[left], chars[right] = chars[right], chars[left]
                left += 1
                right -= 1
        n = len(chars)
        write = left = 0
        for read in range(n):
            if read == n-1 or chars[read] != chars[read+1]:
                chars[write] = chars[read]
                write += 1
                num = read-left+1
                if num > 1:
                    anchor = write
                    while num > 0:
                        chars[write] = str(num % 10)
                        write += 1
                        num //= 10
                    reverse(anchor, write-1)
                left = read+1
        return write

        # first_char = chars[0]
        # n = len(chars)
        # result = []
        # start, prev = 0, 0

        # for i in range(n):
        #     num = 0
        #     # while prev < n:
        #     while prev < n and chars[prev] == chars[start]:
        #         prev += 1
        #         num += 1
        #     if num == 0:
        #         result.append(chars[start])
        #         start = prev
        #     elif 1 < num < 10:
        #         result.append(chars[start])
        #         result.append(str(num))
        #         start = prev
        #     elif 10 <= num < 100:
        #         a = num//10
        #         b = num % 10
        #         result.append(chars[start])
        #         result.append(str(a))
        #         result.append(str(b))
        #     if start == n:
        #         break
        # chars = result
        # return num

