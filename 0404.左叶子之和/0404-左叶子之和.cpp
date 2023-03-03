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
    int sumOfLeftLeaves(TreeNode* root) {
        // 1.ȷ���ݹ麯���Ĳ����ͷ���ֵ
        // 2.ȷ����ֹ����
        if ( root == NULL ) return 0;   //�ڵ�Ϊ��ֱ�ӷ���0
        if ( root->left == NULL && root->right == NULL ) return 0;//�ڵ���ӽڵ�Ϊ��ֱ�ӷ���0��ע��ݹ���Ե��Ǹ��ڵ�
        // ��
        int leftNum = sumOfLeftLeaves( root->left );
        if ( root->left != NULL && root->left->left == NULL && root->left->right == NULL ){
            leftNum = root->left->val;//���������Ǹ��ڵ�����ӽڵ��ֵ
        }
        // ��
        int rightNum = sumOfLeftLeaves( root->right );
        // ��
        int sum = leftNum + rightNum;
        return sum;
    }
};