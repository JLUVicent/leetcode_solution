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
    // 判断是否为平衡二叉树
    // 1.确定递归函数的参数和返回值
    int getHeight( TreeNode* node){
        // 2.确定终止条件
        if ( node == NULL ) return false;
        // 3.确定单层递归逻辑
        int leftHeight = getHeight( node->left ); //获取左节点的深度
        if ( leftHeight == -1) return -1;        //如果左高度为-1 ，直接返回-1 判断等号注意！！！
        int rightHeight = getHeight( node->right ); //获取右节点的深度
        if ( rightHeight == -1 ) return -1;      //如果右节点高度为-1,直接返回-1
        int result; //记录结果
        if ( abs(rightHeight-leftHeight) > 1) result = -1; //如果不满足平衡二叉树要求，直接返回-1
        else { result = 1 + max(leftHeight,rightHeight);}  //求节点的高度
        return result; 
    }
    bool isBalanced(TreeNode* root) {
        int result = getHeight(root);
        if (result == -1){
            return false;
        }
        else{ return true;}
    }
};