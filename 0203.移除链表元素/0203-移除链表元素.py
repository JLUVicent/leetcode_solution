# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        dummy=ListNode(-1,head)
        ans=dummy
        while dummy.next:
            if dummy.next.val!=val:
                dummy=dummy.next
            else:
                dummy.next=dummy.next.next
        return ans.next