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
        // 1.确定递归函数的参数和返回值
        // 2.确定终止条件
        if ( root == NULL ) return 0;   //节点为空直接返回0
        if ( root->left == NULL && root->right == NULL ) return 0;//节点的子节点为空直接返回0，注意递归针对的是父节点
        // 左
        int leftNum = sumOfLeftLeaves( root->left );
        if ( root->left != NULL && root->left->left == NULL && root->left->right == NULL ){
            leftNum = root->left->val;//这里计算的是父节点的左子节点的值
        }
        // 右
        int rightNum = sumOfLeftLeaves( root->right );
        // 中
        int sum = leftNum + rightNum;
        return sum;
    }
};