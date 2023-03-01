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
 
    // ʹ�õݹ鷽��
    // 1.ȷ���ݹ麯���ķ���ֵ�Ͳ���
    bool compare( TreeNode* left, TreeNode* right){
        // 2.ȷ���ݹ麯������ֹ����                              // ��  ��
        if ( left != NULL && right == NULL) return false;       // ��  ��
        else if ( left == NULL && right != NULL) return false;  // ��  ��
        else if ( left == NULL && right == NULL ) return true;  // ��  ��   hhh������ע���жϵ�˳�򣬰�ָ��Ϊ�����ж����ж�ֵ������
        else if ( left->val != right->val ) return false;       // ֵ����
        // 3.������ݹ��߼�
        bool outside = compare( left->left , right -> right);   //��/��
        bool inside = compare( left -> right , right -> left ); //��/��
        bool result =  outside && inside;                       //��

        return result;
    }

    bool isSymmetric(TreeNode* root) {
        // ���ú���
        return compare( root->left,root->right);

    }
};