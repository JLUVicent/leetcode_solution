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

    // 1.ȷ���ݹ麯������ֵ�Ͳ���
    TreeNode* traversal( TreeNode* node, int target){
        // TreeNode*  result = new TreeNode(0);
        // 2.ȷ����ֹ����
        if( node == NULL || node->val == target ) return node;
        // 3.ȷ������ݹ��߼�
        // Ŀ��ֵ���ڸ��ڵ�ֵ ����������
        TreeNode*  result = NULL;
        if (target > node->val){
            result = traversal( node-> right ,target);
        }
        if ( target < node->val){
            result = traversal( node->left,target );
        }
        return result;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return traversal( root,val);

    }
};