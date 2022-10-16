class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        #ÎÒµÄ´úÂë
        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if nums1[i]==nums2[j]:
                    if len(nums2)-1-j==0:
                        temp=-1
                    else:
                        for t in range(j+1,len(nums2)):
                            if nums2[t]>nums1[i]:
                                temp=nums2[t]
                                # nums1[i]=temp
                                break
                            else:
                                temp=-1
            nums1[i]=temp             
        return nums1




