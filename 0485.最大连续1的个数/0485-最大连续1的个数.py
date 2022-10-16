class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        result=0
        num=0
        for i in range(len(nums)):
            if nums[i]==1:
                num+=1
                
            else:
                result=max(result,num)
                num=0
        result=max(result,num)
        return result