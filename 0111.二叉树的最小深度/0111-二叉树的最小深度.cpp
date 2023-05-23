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
        if(root == NULL) return NULL;
        
        int leftHeight = minDepth(root->left);
        int rightHeight = minDepth(root->right);
        if( root->left == NULL && root->right != NULL ){
            return 1+rightHeight;
        }
        else if( root->left != NULL && root->right == NULL){
            return 1+leftHeight;
        }
        int res = 1+min(leftHeight,rightHeight);
        return res;
    }
};