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

    // 1.确定递归函数返回值和参数
    TreeNode* traversal( TreeNode* node, int target){
        // TreeNode*  result = new TreeNode(0);
        // 2.确定终止条件
        if( node == NULL || node->val == target ) return node;
        // 3.确定单层递归逻辑
        // 目标值大于根节点值 右子树遍历
        TreeNode*  result = NULL;
        if (target > node->val){
            result = traversal( node-> right ,target);
        }
        if ( target < node->val){
            result = traversal( node->left,target );
        }
        return result;
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return traversal( root,val);

    }
};