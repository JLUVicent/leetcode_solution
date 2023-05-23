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
    int sumOfLeftLeaves(TreeNode* root) {
        if( root == NULL) return 0;
        if( root->left == NULL && root->right == NULL) return 0;
        //ºóÐò±éÀú
        //×ó
        int leftNum = sumOfLeftLeaves(root->left);
        if(  root->left != NULL && root->left->left == NULL && root->left->right == NULL ){
            leftNum = root->left->val;  
        }
        //ÓÒ
        int rightNum = sumOfLeftLeaves(root->right);
        //ÖÐ
        // int sum = leftNum+rightNum;
        return leftNum+rightNum;
    }
};