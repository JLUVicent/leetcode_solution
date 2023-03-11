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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // //��������ָ��
        // ListNode* dummyHeadA = new ListNode(0);
        // ListNode* dummyHeadB = new ListNode(0);
        // dummyHeadA->next = headA;
        // dummyHeadB->next = headB;
        // ListNode* curA = dummyHeadA->next;
        // ListNode* curB = dummyHeadB->next;
        // while( curA != NULL){
        //     while( curB != NULL){
        //         if ( curB == curA){
        //             return curB;
        //         }
        //         curB = curB->next;   
        //     }
        //     curA = curA->next;
        //     curB = dummyHeadB;
        // }
        // return NULL;


        // ˫ָ�룬�����������ĳ���
        ListNode* curA = headA;
        ListNode* curB = headB;
        int lenA = 0, lenB = 0;
        while( curA != NULL ){
            lenA++;
            curA = curA->next;
        }
        while( curB != NULL ){
            lenB++;
            curB = curB->next;
        }
        
        curB = headB;
        curA = headA;
        int error = abs(lenA - lenB);
        //�ж��ĸ��������
        while( error--){
            if( lenA > lenB){
                curA = curA->next;
            }
            else if( lenA < lenB){
                curB = curB->next;
            }
        }

        //��ʼ�ж������Ƿ����
        while( curA != NULL){
            if( curA == curB ) return curA;
            curA = curA->next;
            curB = curB->next;
        }
        return NULL;

        
    }
};