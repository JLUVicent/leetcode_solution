class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # len1=len(nums)
        # len2=len(set(nums))
        # if len1==len2:
        #     return False
        # else:
        #     return True

        #用自带函数创建哈希表
        #key：数组元素
        #value:元素出现次数
        
        #首先判断元素长度是否为0
        if len(nums)==0:
            return False
        hashtable={}
        for num in nums:
            if num not in hashtable.keys():
                hashtable[num]=1
            else:
                return True
        return False