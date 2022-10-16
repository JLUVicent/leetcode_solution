class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        n = len(s)
        if n == 2:
            return 1
        bal = 0
        for i, c in enumerate(s):
            bal += 1 if c == '(' else -1
            if bal == 0:
                if i == n - 1:
                    return 2 * self.scoreOfParentheses(s[1:-1])
                return self.scoreOfParentheses(s[:i + 1]) + self.scoreOfParentheses(s[i + 1:])
