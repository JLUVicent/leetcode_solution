/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummyhead->next = head;
    struct ListNode* cur = dummyhead;
    while( cur->next && cur->next->next){
        if( cur->next->val == cur->next->next->val){
            // int tmp = cur->next->val;
            // while( cur->next && cur->next->val == tmp){
            //     cur->next = cur->next->next;
            // }
            cur->next = cur->next->next;
        }else{
            cur = cur->next;
        }
    }
    head = dummyhead->next;
        // free(dummyhead);
    return head;

}