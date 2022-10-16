class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        hashmap={}
        for i in range(len(nums)):
            if nums[i] in hashmap.keys():
                hashmap[nums[i]]+=1
            else:
                hashmap[nums[i]]=1
        new_list=[]
        for key,value in hashmap.items():
            if value==2:
                new_list.append(key)
        return sorted(new_list)