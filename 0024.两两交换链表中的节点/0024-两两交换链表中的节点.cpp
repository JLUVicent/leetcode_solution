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
        // 定义虚拟头节点
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        // 终止条件 注意终止条件，奇数或者偶数
        while( cur->next != NULL　&& cur->next->next != NULL){
            // 存储1，3节点 中间变量
            ListNode* tmp = cur->next;  //1节点
            ListNode* tmp1 = cur->next->next->next;   //3节点
            cur->next = cur->next->next;    //cur->next为2节点
            cur->next->next = tmp;  //cur->next->next为1节点
            tmp->next->next->next = tmp1;   //3节点
            cur = cur->next->next;
        }
        return dummyHead->next;

    }
};