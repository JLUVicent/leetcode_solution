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

    ListNode* reverse( ListNode* pre,ListNode* cur){
        if( cur == NULL) return pre;
        ListNode* tmp = cur->next;
        cur->next = pre;
        // 可以和双指针发进行比较
        // pre = cur;
        // cur = tmp;
        return reverse( cur,tmp );
    }
    ListNode* reverseList(ListNode* head) {
        // // 双指针法
        // ListNode* cur = head;
        // ListNode* pre = nullptr;
        // while( cur ){
        //     //先存着cur的下一个变量
        //     ListNode* tmp = cur -> next;
        //     // 更改链表的方向
        //     cur->next = pre;
        //     //双指针往前走
        //     pre = cur;
        //     cur = tmp;
        //     // delete tmp;

        // }
        // // delete tmp;
        // // 最终新链表的head为pre。
        // return pre;

        // 递归法
        // 和双指针方法是一样的
        // ListNode* cur = head;
        // ListNode* pre = NULL;
        return reverse( NULL,head );


    }
};