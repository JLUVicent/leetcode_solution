# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # 按照饲养员解法超出时间限制
        # dummy=ListNode(0)
        # dummy.next=head
        # while head is not None and head.next is not None:
        #     dnext=dummy.next
        #     hnext=head.next
        #     dummy.next=hnext
        #     head.next==hnext.next
        #     hnext.next=dnext
        # return dummy.next
        
        #参考解法
        pre=None
        cur=head
        while cur is not None:
            temp=cur.next
            cur.next=pre
            # 更新迭代
            pre=cur
            cur=temp
        return pre

