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

    int getHeight(TreeNode* node){
        if( node == NULL) return 0;
        //µ•≤„¬ﬂº≠
        int leftHeight = getHeight(node->left); //◊Û
        int rightHeight = getHeight(node->right);// ”“
        int height = 1 + max(rightHeight,leftHeight);
        return height;
    }

    int maxDepth(TreeNode* root) {
        return getHeight(root);
    }
};