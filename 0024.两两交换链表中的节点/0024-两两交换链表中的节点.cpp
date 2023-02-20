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
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while ( cur->next != NULL && cur->next->next != NULL){
            ListNode* tmp = cur->next;
            ListNode* tmp1 = cur->next->next->next;
            cur->next = cur->next->next;
            cur->next->next = tmp;
            tmp->next = tmp1;
            cur = cur->next->next;
        }
        return dummyhead->next;

    }
};