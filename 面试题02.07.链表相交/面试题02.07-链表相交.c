/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    //双指针，现将两个链表向后对齐
    struct ListNode* curA = headA;
    struct ListNode* curB = headB;
    int lenA = 0,lenB = 0;
    while( curA ){
        curA = curA->next;
        lenA++;
    }
    while( curB ){
        curB = curB->next;
        lenB++;
    }
    curA = headA;
    curB = headB;
    int error = abs(lenA-lenB);
    while(error--){
        if( lenA > lenB){
            curA = curA->next;
        }else{
            curB = curB->next;
        }
    }

    while(curA){
        if( curA == curB) return curA;
        curA = curA->next;
        curB = curB->next;
    }
    return NULL;
}