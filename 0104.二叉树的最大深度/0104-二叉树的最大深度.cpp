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

// //  C++ʵ�ֶ������ṹ��
// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x):val(x),left(NULL),right(NULL){} //���캯��
// };
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // 1.ȷ���ݹ麯���ķ���ֵ�Ͳ���
        // 2.ȷ����ֹ����
        if( root == NULL ) return 0;
        // 3.ȷ������ݹ���߼���ʹ�ú������
        int leftHeight = maxDepth( root-> left );   //��
        int rightHeight = maxDepth( root-> right ); //��
        int result =  1 + max( rightHeight,leftHeight ); //��
        return result;
    }
};