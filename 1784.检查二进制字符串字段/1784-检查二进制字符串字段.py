class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        if len(s)==1:
            return True
        l=0
        r=len(s)-1

        while(s[l]=='1'):
            l+=1
            if l>=len(s):
                break
        while(s[r]=='0'):
            r-=1
        return l-r==1