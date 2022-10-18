class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        for a,b in ops:
            if a<m:
                m=a
            if b<n:
                n=b
        return m*n