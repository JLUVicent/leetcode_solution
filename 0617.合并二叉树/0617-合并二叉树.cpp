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
    TreeNode* traversal( TreeNode* node1,TreeNode* node2){
        // 2.确定终止条件
        if ( node1 == NULL ) return node2;
        if ( node2 == NULL ) return node1;
        // 定义新的二叉树
        TreeNode* root = new TreeNode(0);
        // 3.确定单层递归逻辑
        root->val = node1->val + node2->val;    //中
        root->left = traversal( node1->left,node2->left);   //左
        root->right = traversal( node1->right,node2->right);    //右
        return root;
    }

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return traversal( root1,root2);

    }
};