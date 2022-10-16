class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left = 0
        right = len(nums)-1
        while(left <= right):
            mid = (left+right)//2
            guess = nums[mid]
            if guess == target:
                return mid
            elif guess > target:
                right = mid-1
            elif guess < target:
                left = mid+1
        return -1