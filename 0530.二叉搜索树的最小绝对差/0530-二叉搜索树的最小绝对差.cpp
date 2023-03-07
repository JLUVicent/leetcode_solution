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

    int result = INT_MAX;
    TreeNode* pre = NULL;
    // 1.ȷ������ֵ�Ͳ���
    void traversal( TreeNode* node){
        // 2.ȷ����ֹ����
        if ( node == NULL ) return;
        // ȷ������ݹ��߼�
        // ��
        traversal( node->left );
        // ��
        if ( pre != NULL ) result = min(result,node->val - pre->val);
        pre = node; //��preָ�븳ֵ
        //��
        traversal( node->right );
        // return result;
    }

    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return result;

    }
};