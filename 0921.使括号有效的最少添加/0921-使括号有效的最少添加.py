class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        while (len(s)>0):
            if s==s.replace("()",""):
                break
            s=s.replace("()","")
        return len(s.replace("()",""))