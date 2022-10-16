class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        # mapping={for i in range(nu)}
        keys=[i+1 for i in range(len(nums))]
        values=[0 for i in range(len(nums))]
        hashmap=dict(zip(keys,values))
        for i in range(len(nums)):
            if nums[i] in hashmap:
                hashmap[nums[i]]+=1
        new_list=[]
        for key,value in hashmap.items():
            if value==2:
                new_list.append(key)
        for key,value in hashmap.items():
            if value==0:
                new_list.append(key)
        return new_list