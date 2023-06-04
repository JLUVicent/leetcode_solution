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

    // 定义两个全局变量
    int MaxDepth = INT_MIN;
    int result;
    // 使用递归遍历
    void traversal( TreeNode* node, int depth){
        // 确定终止条件
        if( node->left == NULL && node->right == NULL){
            if( depth > MaxDepth){
                MaxDepth = depth;
                result = node->val;
            }
        }
        //左
        if(node->left){
            traversal( node->left,depth+1); //
        }
        //右
        if( node->right){
            traversal( node->right,depth+1);//有回溯的过程
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        traversal( root,0);
        return result;

    }
};