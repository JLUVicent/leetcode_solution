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
    TreeNode* invertTree(TreeNode* root) {
        // �ݹ鷭ת������
        // ��һ����ȷ���ݹ麯������ֵ�Ͳ��� ����ֵ��TreeNode* ���� root

        // �ڶ�����ȷ����ֹ����
        if( root == NULL) return root;
        // ��������ȷ���ݹ��߼� ǰ������������� ����������з�������棬��������Ƚ�����
        swap( root->left, root->right ); //��
        invertTree( root -> left );     //��
        invertTree( root -> right );    //��

        return root;    //���շ���root

    }
};