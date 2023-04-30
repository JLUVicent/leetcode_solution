/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    //Ë«Ö¸Õë
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    if( cur == NULL) return NULL;
    // per->next = head;
    while( cur != NULL){
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        // pre->next = NULL;
        pre = cur;
        cur = tmp;
    }
    return pre;
}