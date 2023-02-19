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
        // ���Ժ�˫ָ�뷢���бȽ�
        // pre = cur;
        // cur = tmp;
        return reverse( cur,tmp );
    }
    ListNode* reverseList(ListNode* head) {
        // // ˫ָ�뷨
        // ListNode* cur = head;
        // ListNode* pre = nullptr;
        // while( cur ){
        //     //�ȴ���cur����һ������
        //     ListNode* tmp = cur -> next;
        //     // ��������ķ���
        //     cur->next = pre;
        //     //˫ָ����ǰ��
        //     pre = cur;
        //     cur = tmp;
        //     // delete tmp;

        // }
        // // delete tmp;
        // // �����������headΪpre��
        // return pre;

        // �ݹ鷨
        // ��˫ָ�뷽����һ����
        // ListNode* cur = head;
        // ListNode* pre = NULL;
        return reverse( NULL,head );


    }
};