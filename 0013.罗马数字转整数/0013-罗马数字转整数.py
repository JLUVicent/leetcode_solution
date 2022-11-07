

class Solution:
    def romanToInt(self, s: str) -> int:
        result = 0
        s_value = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        for i in range(len(s)):
            if i < len(s)-1 and s_value[s[i]] < s_value[s[i+1]]:
                result -= s_value[s[i]]
            else:
                result += s_value[s[i]]
        return result

