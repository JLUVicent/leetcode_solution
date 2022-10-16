class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        i=0
        if len(set(nums))<=2:
            return max(nums)
        else:
            nums=list(set(nums))
            while(len(nums)>0):
                if i>2:
                    break
                max_num=max(nums)
                nums.remove(max_num)
                i+=1
        return max_num