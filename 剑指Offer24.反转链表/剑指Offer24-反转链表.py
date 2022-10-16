# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # ��������Ա�ⷨ����ʱ������
        # dummy=ListNode(0)
        # dummy.next=head
        # while head is not None and head.next is not None:
        #     dnext=dummy.next
        #     hnext=head.next
        #     dummy.next=hnext
        #     head.next==hnext.next
        #     hnext.next=dnext
        # return dummy.next
        
        #�ο��ⷨ
        pre=None
        cur=head
        while cur is not None:
            temp=cur.next
            cur.next=pre
            # ���µ���
            pre=cur
            cur=temp
        return pre

