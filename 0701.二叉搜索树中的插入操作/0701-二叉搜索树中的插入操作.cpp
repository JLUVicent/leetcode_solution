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

    // 递归插入节点
    TreeNode* insert( TreeNode* node,int val){
        // 确定终止条件
        if ( node == NULL ){
             TreeNode* result = new TreeNode(val);
             return result;
        }

        if( node->val > val ) node->left = insert( node->left ,val);
        if( node->val < val ) node->right = insert( node->right , val);
        return node;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {

        return insert( root,val);
    }
};