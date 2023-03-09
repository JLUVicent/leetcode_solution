/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    // 1.ȷ���ݹ�����ͷ���ֵ
    TreeNode* traversal( TreeNode* node, int low, int high){
        // 2.ȷ����ֹ����
        if( node == NULL ) return NULL;
        // 3.�����߼� ��С��lowʱ���Ҹýڵ���ҽڵ���û����������
        if ( node->val < low ) return traversal( node->right, low, high);
        // ������high���Ҹýڵ����ڵ���û�б�valС��
        else if( node->val > high ) return traversal( node->left,low,high);

        node->left = traversal( node->left,low,high);
        node->right = traversal( node->right,low,high);
        return node;
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return traversal( root,low,high );

    }
};