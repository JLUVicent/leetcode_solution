/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* pre = (struct ListNode*)malloc(sizeof(struct ListNode));
    pre = NULL;
    struct ListNode* cur = (struct ListNode*)malloc(sizeof(struct ListNode));
    cur = head;
    while(cur){
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;

}