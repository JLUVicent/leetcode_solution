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

    //1.确定返回值和参数
    bool traversal(TreeNode* node, int targetSum){
        // 2.确定终止条件
        if( node->left == NULL && node->right == NULL && targetSum == 0){
            return true;
        }
        if( node->left == NULL && node->right == NULL && targetSum != 0){
            return false;
        }

        //确定单层递归逻辑
        //左
        if( node->left && (traversal( node->left,targetSum - node->left->val))) return true;
        //右
        if( node->right && (traversal( node->right,targetSum - node->right->val))) return true;
        
        return false;

    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if( root == NULL) return false;
        return traversal(root,targetSum - root->val);

    }
};