/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummyhead->next = head;
    struct ListNode* cur = dummyhead;
    while( cur->next && cur->next->next){
        struct ListNode* tmp1 = cur->next;
        struct ListNode* tmp2 = cur->next->next;
        struct ListNode* tmp3 = cur->next->next->next;
        cur->next = tmp2;
        cur->next->next = tmp1;
        cur->next->next->next = tmp3;
        cur = cur->next->next;
    }
    return dummyhead->next;
}