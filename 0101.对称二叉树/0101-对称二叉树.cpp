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

    bool compare(TreeNode* left,TreeNode* right){
        if( left == NULL && right != NULL) return false;
        else if( left != NULL && right == NULL) return false;
        else if( left == NULL && right == NULL) return true;
        else if( left->val != right->val) return false;
        //×óÓÒÖÐ
        bool leftSide = compare(left->left,right->right);   //×ó±ßµÄ×óºÍÓÒ±ßµÄÓÒ
        bool rightSide = compare(left->right,right->left);  //×ó±ßµÄÓÒºÍÓÒ±ßµÄ×ó
        bool result = leftSide && rightSide;
        return result;
    }


    bool isSymmetric(TreeNode* root) {
        return compare(root->left,root->right);
    }
};