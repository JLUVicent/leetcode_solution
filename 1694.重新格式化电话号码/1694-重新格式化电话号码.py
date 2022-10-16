class Solution:
    def reformatNumber(self, number: str) -> str:
        number=number.replace(" ","")
        number=number.replace("-","")
        n,pt=len(number),0
        ans=list()

        while n>0:
            if n>4:
                ans.append(number[pt:pt+3])
                pt+=3
                n-=3
            else:
                if n==4:
                    ans.append(number[pt:pt+2])
                    ans.append(number[pt+2:pt+4])
                else:
                    ans.append(number[pt:pt+n])
                break
        return "-".join(ans)