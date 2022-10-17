class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        # hashmap={}
        # for i in range(len(nums)):
        #     hashmap[i+1]=0
        # for i in range(len(nums)):
        #     if nums[i] in hashmap.keys():
        #         hashmap[nums[i]]+=1
        # newlist=[]
        # for key,value in hashmap.items():
        #     if value==0:
        #         newlist.append(key)
        # return sorted(newlist)
        #一种进阶优化不需要额外空间的解法

        n = len(nums)
        for num in nums:
            x = (num - 1) % n
            nums[x] += n
        
        ret = [i + 1 for i, num in enumerate(nums) if num <= n]
        return ret
