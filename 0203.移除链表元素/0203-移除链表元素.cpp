/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 使用原来的链表进行移除节点的操作
        //删除头节点
        // while( head != NULL && head->val==val){
        //     ListNode* tmp = head;
        //     head = head->next;
        //     delete tmp;
        // }

        // //删除非头节点
        // ListNode* cur = head;
        // while( cur != NULL && cur->next != NULL){
        //     if (cur->next->val == val){
        //         ListNode* tmp=cur->next;
        //         cur->next=cur->next->next;
        //         delete tmp;
        //     }
        //     else{
        //         cur = cur->next;
        //     }
        // }

        // return head;

        //使用虚拟头节点解决
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while( cur->next != NULL ){
            if ( cur->next->val == val){
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else{
                cur = cur->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
        // return dummyHead->next;
}
};