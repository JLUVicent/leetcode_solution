class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        num=0
        result=0
        for i in range(len(nums)):
            if nums[i]==1:
                num+=1
                result=max(result,num)
            else:
                result=max(result,num)
                num=0
        return result