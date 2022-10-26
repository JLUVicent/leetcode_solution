class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        value, count, last, result, index = s[0], 0, 0, 0, 0
        for i in range(0, len(s)):
            if s[i] == value:
                count += 1
            else:
                result += min(count, last)
                last, value, count = count, s[i], 1
        result += min(count, last)
        return result

