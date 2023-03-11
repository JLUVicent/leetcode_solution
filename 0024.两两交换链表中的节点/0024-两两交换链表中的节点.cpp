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
    ListNode* swapPairs(ListNode* head) {
        // ��������ͷ�ڵ�
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        // ��ֹ���� ע����ֹ��������������ż��
        while( cur->next != NULL��&& cur->next->next != NULL){
            // �洢1��3�ڵ� �м����
            ListNode* tmp = cur->next;  //1�ڵ�
            ListNode* tmp1 = cur->next->next->next;   //3�ڵ�
            cur->next = cur->next->next;    //cur->nextΪ2�ڵ�
            cur->next->next = tmp;  //cur->next->nextΪ1�ڵ�
            tmp->next->next->next = tmp1;   //3�ڵ�
            cur = cur->next->next;
        }
        return dummyHead->next;

    }
};