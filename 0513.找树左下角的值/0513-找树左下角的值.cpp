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

    // ��������ȫ�ֱ���
    int MaxDepth = INT_MIN;
    int result;
    // ʹ�õݹ����
    void traversal( TreeNode* node, int depth){
        // ȷ����ֹ����
        if( node->left == NULL && node->right == NULL){
            if( depth > MaxDepth){
                MaxDepth = depth;
                result = node->val;
            }
        }
        //��
        if(node->left){
            traversal( node->left,depth+1); //
        }
        //��
        if( node->right){
            traversal( node->right,depth+1);//�л��ݵĹ���
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        traversal( root,0);
        return result;

    }
};