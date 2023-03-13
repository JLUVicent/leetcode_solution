/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // 定义快慢指针
        ListNode* fast = head;
        ListNode* slow = head;
        while( fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if( slow == fast){
                return true;
                // ListNode* index1 = fast; //找环的入口 
                // ListNode* index2 = head;
                // while( index1 != index2){
                //     index1 = index1->next;
                //     index2 = index2->next;
                // }
                // return index1;
            }
        }
        
        return false;
        
    }
};