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
        // 递归翻转二叉树
        // 第一步：确定递归函数返回值和参数 返回值：TreeNode* 参数 root

        // 第二步：确定终止条件
        if( root == NULL) return root;
        // 第三步：确定递归逻辑 前序遍历：中左右 后序遍历将中放在最后面，中序遍历比较特殊
        swap( root->left, root->right ); //中
        invertTree( root -> left );     //左
        invertTree( root -> right );    //右

        return root;    //最终返回root

    }
};