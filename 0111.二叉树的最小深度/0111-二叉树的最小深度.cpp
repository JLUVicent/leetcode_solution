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
    int minDepth(TreeNode* root) {
        // 1.ȷ���ݹ麯������ֵ�Ͳ���
        // 2.ȷ����ֹ����
        if ( root == NULL ) return 0;
        // 3.ȷ������ݹ��߼�
        int leftHeight = minDepth( root -> left );//��
        int rightHeight = minDepth( root -> right ); //��
        if ( root->left == NULL && root->right != NULL ) return 1+rightHeight;  //ע������root->left д��
        else if ( root->left != NULL && root->right == NULL ) return 1+leftHeight;
        int result = 1 + min( leftHeight,rightHeight);
        return result;
    }
};