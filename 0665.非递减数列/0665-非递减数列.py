class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        #第一眼感觉应该这样做，但是测试是错的
        # t=0
        # # nums=sorted(nums)
        # for i in range(len(nums)-1):
        #     if nums[i]<=nums[i+1]:
        #         continue
        #     else:
        #         nums[i]=nums[i-1]
        #         t+=1
        #         if t>=2:
        #             return False
        # return True

        #参考答案
        count=0
        for i in range(1,len(nums)):
            if nums[i]<nums[i-1]:
                count+=1
                if i==1 or nums[i]>=nums[i-2]:
                    nums[i-1]=nums[i]
                else:
                    nums[i]=nums[i-1]
        return count<=1
