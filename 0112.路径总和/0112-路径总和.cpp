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
        // 1.确定返回值和参数
        // 2.确定终止条件 找到路径
    bool traversal( TreeNode* root,int targetSum){
        if( root->left == NULL && root->right == NULL && targetSum == 0){
            return true;
        }
        if( root->left == NULL && root->right == NULL && targetSum != 0){
            return false;
        }
        // 3.确定单层递归逻辑
        // 左
        if ( root->left && (traversal( root->left, targetSum-root->left->val)) ) return true;
        // if( root->left ){
        //     if ( traversal( root->left ,targetSum-root->left->val)) return true;
        // }
        
        // // 右
        if ( root->right && (traversal( root->right, targetSum-root->right->val)) ) return true;
        // if( root->right ){
        //     if ( traversal( root->right ,targetSum-root->right->val)) return true;
        // }
        return false;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {

        if( root == NULL) return false;
        return traversal(root,targetSum-root->val);

    }
};