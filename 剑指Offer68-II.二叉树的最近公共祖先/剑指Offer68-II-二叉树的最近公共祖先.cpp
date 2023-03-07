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

    // 1.ȷ���ݹ麯���ķ���ֵ�Ͳ���
    TreeNode* traversal(TreeNode* node, TreeNode* p, TreeNode* q){
        // 2.ȷ����ֹ����
        if( node == NULL ) return node;
        if( node == p || node == q) return node;
        // 3.ȷ������ݹ��߼� �������
        // ��
        TreeNode* left = traversal( node->left, p, q);
        // ��
        TreeNode* right = traversal( node->right, p, q);
        // �� �ж������Ƿ�Ϊ��
        if( left != NULL && right != NULL ) return node;    //���Ҳ�Ϊ�ն����Ϸ���root
        else if( left != NULL && right == NULL ) return left;   //
        else if( left == NULL && right!= NULL ) return right;
        else{ return NULL; }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal( root,p,q);
    }
};