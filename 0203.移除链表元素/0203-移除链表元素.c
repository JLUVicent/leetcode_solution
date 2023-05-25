/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    // dummyhead->val = 0;
    dummyhead->next = head;
    struct ListNode* cur = dummyhead;
    while(cur->next){
        if( cur->next->val != val){
            cur = cur->next;
        }else{
            struct ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        }
    }
    head = dummyhead->next;
    free(dummyhead);
    return head;
}   