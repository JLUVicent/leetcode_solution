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
    int countNodes(TreeNode* root) {
        //1. 层序遍历
        // queue<TreeNode*> que;
        // int res = 0;
        // if(root != NULL) que.push(root);
        // while(!que.empty()){
        //     int size = que.size();
        //     while(size--){
        //         TreeNode* node = que.front();
        //         que.pop();
        //         res++;
        //         if( node->left) que.push(node->left);
        //         if( node->right) que.push(node->right);
        //     }
        // }
        // return res;
        //2.普通解法：递归遍历
        // if (root == NULL) return 0;
        // int leftCount = countNodes(root->left);
        // int rightCount = countNodes( root->right);
        // int count = leftCount+rightCount+1;
        // return count;
        //3.完全解法
        if( root == NULL) return 0;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        int leftDepth = 0;
        int rightDepth = 0;
        while(left){
            left = left->left;
            leftDepth++;
        }
        while(right){
            right = right->right;
            rightDepth++;
        }
        if(rightDepth == leftDepth){
            return (2<<leftDepth)-1;
        }
        //确定单层逻辑
        int leftNum = countNodes(root->left);
        int rightNum = countNodes(root->right);
        return leftNum+rightNum+1;
    }
};