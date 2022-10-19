class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        #穷举有问题
        # msum=0
        # result_list=[]
        # for k in range(len(nums)+1):
        #     nums[:1],nums[1:]=nums[-1:],nums[:-1]
        #     for i,value in enumerate(nums):
        #         msum+=i*value
        #     result_list.append(msum)
        #     msum=0
        # return max(result_list)

        #官方解法
        f,n,numSum=0,len(nums),sum(nums)
        for i,num in enumerate(nums):
            f+=i*num
        res=f
        for i in range(n-1,0,-1):
            f=f+numSum-n*nums[i]
            res=max(res,f)
        return res