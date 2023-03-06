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

    // 中序遍历，搜索二叉树的数组是有序的
    vector<int> vec;
    void traversal(TreeNode* root){
        if( root == NULL ) return;
        traversal( root->left ); //左
        vec.push_back( root->val );//中
        traversal( root->right );//右
    }

    bool isValidBST(TreeNode* root) {
        traversal(root);
        for( int i = 1;i < vec.size(); i++){
            //判断小于等于，搜索树中不能有相同元素
            if(vec[i] <= vec[i-1] ) return false;
        }
        return true;
    }
};