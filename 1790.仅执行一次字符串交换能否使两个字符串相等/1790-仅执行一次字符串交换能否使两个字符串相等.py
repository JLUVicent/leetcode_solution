class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        ls1=[]
        ls2=[]
        if s1==s2:
            return True
        else:
            for i in range(len(s1)):
                if s1[i]!=s2[i]:
                    ls1.append(s1[i])
                    ls2.append(s2[i])
        
        if len(ls1)!=2:
            return False
        else:
            ls1.reverse()
        if ls1==ls2:
            return True
        else:
            return False
