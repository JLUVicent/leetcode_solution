/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    // 1.确定递归函数的返回值和参数
    TreeNode* traversal(TreeNode* node, TreeNode* p, TreeNode* q){
        // 2.确定终止条件
        if( node == NULL ) return node;
        if( node == p || node == q) return node;
        // 3.确定单层递归逻辑 后序遍历
        // 左
        TreeNode* left = traversal( node->left, p, q);
        // 右
        TreeNode* right = traversal( node->right, p, q);
        // 中 判断左右是否为空
        if( left != NULL && right != NULL ) return node;    //左右不为空都向上返回root
        else if( left != NULL && right == NULL ) return left;   //
        else if( left == NULL && right!= NULL ) return right;
        else{ return NULL; }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal( root,p,q);
    }
};