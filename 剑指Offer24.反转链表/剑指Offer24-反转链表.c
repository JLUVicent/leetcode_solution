/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode* pre,struct ListNode* cur){
     if(cur == NULL) return pre;
     struct ListNode* tmp = cur->next;
     cur->next = pre;
     return reverse(cur,tmp);
 }

struct ListNode* reverseList(struct ListNode* head){
    return reverse(NULL,head);
}