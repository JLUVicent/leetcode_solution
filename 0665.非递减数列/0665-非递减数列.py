class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        #��һ�۸о�Ӧ�������������ǲ����Ǵ��
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

        #�ο���
        count=0
        for i in range(1,len(nums)):
            if nums[i]<nums[i-1]:
                count+=1
                if i==1 or nums[i]>=nums[i-2]:
                    nums[i-1]=nums[i]
                else:
                    nums[i]=nums[i-1]
        return count<=1
