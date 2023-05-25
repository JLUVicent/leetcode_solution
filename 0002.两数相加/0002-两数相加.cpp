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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = 1,len2 = 1;
        ListNode* p = l1;
        ListNode* q = l2;
        //短位补0
        while(p->next != NULL){
            len1++;
            p = p->next;
        }
        while(q->next != NULL){
            len2++;
            q = q->next;
        }
        if( len1 > len2){
            for( int i = 1; i <= len1-len2; i++){
                q->next = new ListNode(0);
                q = q->next;
            }
        }else{
            for( int i = 1; i <= len2-len1; i++){
                p->next = new ListNode(0);
                p = p->next;
            }           
        }
        p = l1; //重新置位
        q = l2;
        bool count = false; //进位标志位
        ListNode* l3 = new ListNode(-1);    //存放结果
        ListNode* w = l3;   //移动指针
        int i = 0;  //记录相加结果
        while(p != NULL && q != NULL){
            i = count+p->val+q->val;
            w->next = new ListNode(i%10);
            count = i >= 10 ? true : false;
            w = w->next;
            p = p->next;
            q = q->next;
        }
        if(count){  //最后如果有进位
            w->next = new ListNode(1);
            w = w->next;
        }
        return l3->next;

    }
};