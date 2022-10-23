class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = list(s)
        s = ''.join(ch.lower() for ch in s if ch.isalnum())  # 这个for用的太妙了
        # for i in range(len(s)):
        #     if s[i].isalnum():
        #         continue
        #     else:
        #         new_s[i] = ''
        # s = ''.join(new_s)
        # s = s.lower()
        left, right = 0, len(s)-1
        while(left < right):
            if s[left] == s[right]:
                left += 1
                right -= 1
            else:
                return False
        return True