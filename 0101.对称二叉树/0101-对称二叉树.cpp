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
 
    // 使用递归方法
    // 1.确定递归函数的返回值和参数
    bool compare( TreeNode* left, TreeNode* right){
        // 2.确定递归函数的终止条件                              // 左  右
        if ( left != NULL && right == NULL) return false;       // 不  空
        else if ( left == NULL && right != NULL) return false;  // 空  不
        else if ( left == NULL && right == NULL ) return true;  // 空  空   hhh，这里注意判断的顺序，把指针为空先判断再判断值得问题
        else if ( left->val != right->val ) return false;       // 值不等
        // 3.处理单层递归逻辑
        bool outside = compare( left->left , right -> right);   //左/右
        bool inside = compare( left -> right , right -> left ); //右/左
        bool result =  outside && inside;                       //中

        return result;
    }

    bool isSymmetric(TreeNode* root) {
        // 调用函数
        return compare( root->left,root->right);

    }
};