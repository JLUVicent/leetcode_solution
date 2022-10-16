class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        #Ê¹ÓÃ¹þÏ£±í
        # if len(s)==0 and len(t)!=0:
        #     return t[0]
        # hashtable={}
        # for i in t:
        #     for j in s:
        #         if i==j:
        #             hashtable[i]=j
        #             break
        #         else:
        #             hashtable[i]=1
        #             continue
        # # for key,values in hashtable.items():
        # #     if key in t:       
        # for key,values in hashtable.items():
        #     if values==1:
        #         return key

        hashtable1={}
        hashtable2={}
        for i in s:
            if i not in hashtable1.keys():
                hashtable1[i]=1
            else:
                temp=hashtable1[i]
                hashtable1[i]=temp+1
        for j in t:
            if j not in hashtable2.keys():
                hashtable2[j]=1
            else:
                temp=hashtable2[j]
                hashtable2[j]=temp+1
        for key1 in hashtable1.keys():
            for key2 in hashtable2.keys():
                if key1==key2:
                    hashtable2[key2]=hashtable2[key2]-hashtable1[key1]
        for keys,values in hashtable2.items():
            if values!=0:
                return keys

