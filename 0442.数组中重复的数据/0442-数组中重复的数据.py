class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        #该解法不符合要求
        # hashmap={}
        # for i in range(len(nums)):
        #     if nums[i] in hashmap.keys():
        #         hashmap[nums[i]]+=1
        #     else:
        #         hashmap[nums[i]]=1
        # new_list=[]
        # for key,value in hashmap.items():
        #     if value==2:
        #         new_list.append(key)
        # return sorted(new_list)
        n=len(nums)
        for num in nums:
            i=(num-1)%n
            nums[i]+=n
        return[i+1 for i,num in enumerate(nums)if num>(2*n)]