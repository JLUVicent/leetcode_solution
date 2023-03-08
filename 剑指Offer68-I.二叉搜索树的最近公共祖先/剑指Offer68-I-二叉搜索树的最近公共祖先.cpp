/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    // 1.ֱ�Ӽ���
    // // 1.ȷ���ݹ麯�������ͷ���ֵ
    // TreeNode* traversal(TreeNode* node,TreeNode* p,TreeNode* q){
    //     // 2.ȷ����ֹ����
    //     if( node == NULL ) return node;
    //     if( node == p || node == q) return node;
    //     // 3.ȷ������ݹ��߼�
    //     // �Ե����ϣ����ú���������������
    //     TreeNode* left = traversal( node->left, p, q);
    //     TreeNode* right = traversal( node->right, p, q);
    //     // ��
    //     if( left != NULL && right != NULL ) return node;    //���Ҳ�Ϊ�����Ϸ���node
    //     else if( left != NULL && right == NULL) return left;
    //     else if( left == NULL && right != NULL) return right;
    //     else{ return NULL; }
    // }

    // 2.�������������������
    TreeNode* traversal(TreeNode* cur,TreeNode* p,TreeNode* q){
        // // ��ֹ����
        // if ( cur == NULL ) return NULL;
        // //  �����߼�
        // if ( cur->val > p->val && cur->val > q->val ){
        //     TreeNode* left = traversal( cur->left, p, q);
        //     if( left != NULL ) return left;
        // }
        // else if( cur->val < p->val && cur->val < q->val){
        //     TreeNode* right = traversal( cur->right, p, q);
        //     if( right != NULL ) return right;
        // }
        // return cur;

        // �ݹ�
        while(cur){
            if ( cur->val > p->val && cur->val > q->val ){
                cur = cur->left;
            }
            else if( cur->val < p->val && cur->val < q->val){
                cur = cur->right;
            }
            else { return cur;}
        }
        return NULL;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal( root, p, q);
        
    }
};