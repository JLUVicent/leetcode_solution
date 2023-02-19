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
        // ʹ��ԭ������������Ƴ��ڵ�Ĳ���
        //ɾ��ͷ�ڵ�
        // while( head != NULL && head->val==val){
        //     ListNode* tmp = head;
        //     head = head->next;
        //     delete tmp;
        // }

        // //ɾ����ͷ�ڵ�
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

        //ʹ������ͷ�ڵ���
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