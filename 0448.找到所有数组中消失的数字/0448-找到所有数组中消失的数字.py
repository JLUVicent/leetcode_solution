class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        hashmap={}
        for i in range(len(nums)):
            hashmap[i+1]=0
        for i in range(len(nums)):
            if nums[i] in hashmap.keys():
                hashmap[nums[i]]+=1
        newlist=[]
        for key,value in hashmap.items():
            if value==0:
                newlist.append(key)
        return sorted(newlist)
