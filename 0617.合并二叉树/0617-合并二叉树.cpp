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

    // 1.ȷ������ֵ�Ͳ���
    TreeNode* traversal( TreeNode* node1,TreeNode* node2){
        // 2.ȷ����ֹ����
        if ( node1 == NULL ) return node2;
        if ( node2 == NULL ) return node1;
        // �����µĶ�����
        TreeNode* root = new TreeNode(0);
        // 3.ȷ������ݹ��߼�
        root->val = node1->val + node2->val;    //��
        root->left = traversal( node1->left,node2->left);   //��
        root->right = traversal( node1->right,node2->right);    //��
        return root;
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return traversal( root1,root2);

    }
};