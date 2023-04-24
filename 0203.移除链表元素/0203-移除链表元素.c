/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* dummyhead;
    dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummyhead->next = head;
    struct ListNode* cur = dummyhead;
    while( cur->next ){
        if( cur->next->val == val){
            struct ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        }else{
            cur = cur->next;
        }
    }
    head = dummyhead->next;
    free(dummyhead);
    return head;

}