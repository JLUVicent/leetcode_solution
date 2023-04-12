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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyhead = new ListNode(-101);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while( cur->next != NULL && cur->next->next != NULL){
            if( cur->next->val == cur->next->next->val){
                int tmp = cur->next->val;
                while( cur->next != NULL && cur->next->val == tmp){
                    cur->next = cur->next->next;
                }
            }else{
                cur = cur->next;
            }
        }
        return dummyhead->next;
    }
};