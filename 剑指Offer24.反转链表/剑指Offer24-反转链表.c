/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


// struct ListNode* reverseList(struct ListNode* head){
//     //保存cur的下一个结点
//     struct ListNode* temp;
//     //pre指针指向前一个当前结点的前一个结点
//     struct ListNode* pre = NULL;
//     //用head代替cur，也可以再定义一个cur结点指向head。
//     while(head) {
//         //保存下一个结点的位置
//         temp = head->next;
//         //翻转操作
//         head->next = pre;
//         //更新结点
//         pre = head;
//         head = temp;
//     }
//     return pre;
// }

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    while( cur){
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
        // free(tmp);
    }
    // head = cur;
    return pre;

}