/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


// struct ListNode* reverseList(struct ListNode* head){
//     //����cur����һ�����
//     struct ListNode* temp;
//     //preָ��ָ��ǰһ����ǰ����ǰһ�����
//     struct ListNode* pre = NULL;
//     //��head����cur��Ҳ�����ٶ���һ��cur���ָ��head��
//     while(head) {
//         //������һ������λ��
//         temp = head->next;
//         //��ת����
//         head->next = pre;
//         //���½��
//         pre = head;
//         head = temp;
//     }
//     return pre;
// }

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    while( cur){
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
        // free(tmp);
    }
    // head = cur;
    return pre;

}