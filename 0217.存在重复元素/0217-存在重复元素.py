class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # len1=len(nums)
        # len2=len(set(nums))
        # if len1==len2:
        #     return False
        # else:
        #     return True

        #���Դ�����������ϣ��
        #key������Ԫ��
        #value:Ԫ�س��ִ���
        
        #�����ж�Ԫ�س����Ƿ�Ϊ0
        if len(nums)==0:
            return False
        hashtable={}
        for num in nums:
            if num not in hashtable.keys():
                hashtable[num]=1
            else:
                return True
        return False