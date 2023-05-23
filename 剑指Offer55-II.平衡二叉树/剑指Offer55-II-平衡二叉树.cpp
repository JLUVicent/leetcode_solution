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
        if( node == NULL ) return false;
        int leftHeight = getHeight(node->left); //获取左子树的节点高度
        if(leftHeight == -1) return -1;
        int rightHight = getHeight(node->right);
        if(rightHight == -1) return -1;
        int result;
        if( abs(rightHight - leftHeight) > 1) return -1;
        else{ result = 1 + max(leftHeight,rightHight);} //计算总的高度
        return result;
    }

    bool isBalanced(TreeNode* root) {
        int res = getHeight(root);
        if(res == -1){
            return false;
        }else{
            return true;
        }

    }
};