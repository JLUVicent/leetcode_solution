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
        // 1.确定递归函数返回值和参数
        // 2.确定终止条件
        if ( root == NULL ) return 0;
        // 3.确定单层递归逻辑
        int leftHeight = minDepth( root -> left );//左
        int rightHeight = minDepth( root -> right ); //右
        if ( root->left == NULL && root->right != NULL ) return 1+rightHeight;  //注意这里root->left 写法
        else if ( root->left != NULL && root->right == NULL ) return 1+leftHeight;
        int result = 1 + min( leftHeight,rightHeight);
        return result;
    }
};