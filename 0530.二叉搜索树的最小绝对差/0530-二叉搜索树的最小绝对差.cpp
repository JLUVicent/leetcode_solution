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

    int result = INT_MAX;
    TreeNode* pre = NULL;
    // 1.确定返回值和参数
    void traversal( TreeNode* node){
        // 2.确定终止条件
        if ( node == NULL ) return;
        // 确定单层递归逻辑
        // 左
        traversal( node->left );
        // 中
        if ( pre != NULL ) result = min(result,node->val - pre->val);
        pre = node; //给pre指针赋值
        //右
        traversal( node->right );
        // return result;
    }

    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return result;

    }
};