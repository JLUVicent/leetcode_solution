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

    // 1.确定递归参数和返回值
    TreeNode* traversal( TreeNode* node, int low, int high){
        // 2.确定终止条件
        if( node == NULL ) return NULL;
        // 3.单层逻辑 当小于low时候，找该节点的右节点有没有满足条件
        if ( node->val < low ) return traversal( node->right, low, high);
        // 当大于high，找该节点的左节点有没有比val小的
        else if( node->val > high ) return traversal( node->left,low,high);

        node->left = traversal( node->left,low,high);
        node->right = traversal( node->right,low,high);
        return node;
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return traversal( root,low,high );

    }
};