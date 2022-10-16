class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        #´´½¨¹şÏ£±í
        hashmap={}
        for i in range(len(nums)):
            if nums[i] not in hashmap.keys():
                hashmap[nums[i]]=1
            else:
                hashmap[nums[i]]+=1
        max_value=max(hashmap.values())
        max_list=[]
        for key,value in hashmap.items():
            if value==max_value:
                max_list.append(key)
        num_list=[]
        for i in range(len(max_list)):
            for key,value in hashmap.items():
                if key==max_list[i]:
                    result_list=[]
                    num=0
                    for index,v in enumerate(nums):
                        if v==key:
                            result_list.append(index)
                    num=max(result_list)-min(result_list)+1
                    num_list.append(num)
        return min(num_list)