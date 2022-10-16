class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        num=0
        for i in range(len(nums)):
            if(nums[i]==val):
                num+=1
        for n in range(num):
            nums.remove(val)
        return len(nums)

        