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

// //  C++实现二叉树结构体
// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x):val(x),left(NULL),right(NULL){} //构造函数
// };
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // 1.确定递归函数的返回值和参数
        // 2.确定终止条件
        if( root == NULL ) return 0;
        // 3.确定单层递归的逻辑，使用后序遍历
        int leftHeight = maxDepth( root-> left );   //左
        int rightHeight = maxDepth( root-> right ); //右
        int result =  1 + max( rightHeight,leftHeight ); //中
        return result;
    }
};