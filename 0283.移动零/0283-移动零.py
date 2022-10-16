class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        num=0
        for i in range(len(nums)):
            if nums[i]==0:
                num+=1
        for n in range(num):
            nums.remove(0)
        # for n in range(num):
            nums.append(0)

        # index=0
        # for i in range(len(nums)):
        #     if(nums[i]!=0):
        #         nums[index]=nums[i]
        #         index=index+1
        # for i in range(index,len(nums)):
        #     nums[i]=0