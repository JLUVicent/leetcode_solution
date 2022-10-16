class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n=len(citations)
        sotred_citations=sorted(citations,reverse=True)
        h=0
        i=0
        while i<n and sotred_citations[i]>h:
            h+=1
            i+=1
        return h